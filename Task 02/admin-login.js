$(document).ready(() => {
  if (Cookies.get("email")) {
    // alert("user is already login, logout first");
    window.location.href = "admin-dashboard.html";
  }
  const submit = async () => {
    try {
      let email = $("#email").val();
      let password = $("#password").val();

      let response = await fetch("http://localhost:5000/admin-login", {
        method: "POST",
        headers: {
          "Content-Type": "application/json",
        },
        body: JSON.stringify({
          email,
          password,
        }),
      });

      const temp = await response.json();
      console.log(temp);

      if (temp.success) {
        alert(temp.message);
        Cookies.set("email", email);

        window.location.href = "admin-dashboard.html";
      } else {
        alert(temp.message);
      }
    } catch (error) {
      console.log(error);
    }
  };

  $("#myForm").submit(function (e) {
    e.preventDefault(true);
    submit();
  });
});
