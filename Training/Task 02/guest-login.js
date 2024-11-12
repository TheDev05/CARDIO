$(document).ready(() => {
  console.log("object");

  $("#email").attr("value", Cookies.get("email"));

  const submit = async () => {
    try {
      let email = $("#email").val();
      let password = $("#password").val();

      let response = await fetch("http://localhost:5000/guest-login", {
        method: "POST",
        headers: {
          "Content-Type": "application/json",
        },
        body: JSON.stringify({
          email,
          password,
        }),
      });

      //   alert("data sent");
      const temp = await response.json();
      console.log(temp);

      if (temp.success) {
        alert(temp.message);
        Cookies.set("email", email);
        console.log(Cookies.get("email"));
        window.location.href = "form.html";
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
