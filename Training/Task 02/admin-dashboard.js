$(document).ready(() => {
  if (Cookies.get("email")) {
  } else {
    //   alert("login first");
    window.location.href = "admin-login.html";
  }
  $(".logout-admin").click(() => {
    Cookies.remove("email");
    window.location.href = "admin-login.html";
  });

  const retrive = async () => {
    try {
      let response = await fetch("http://localhost:5000/data", {
        method: "GET",
        headers: {
          "Content-Type": "application/json",
        },
      });

      // alert("data sent");
      const temp = await response.json();
      console.log(temp.data[0]);

      $(".total").append(` <h3>${temp.data.length}</h3>`);

      temp.data.map((user, index) => {
        $(".tbody").append(`<tr>
          <th scope="row">${index + 1}</th>
          <td>${user.fname}</td>
          <td>${user.lname}</td>
          <td>${user.email}</td>
          <td><div id = ${
            user._id
          } class="action"><svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-trash" viewBox="0 0 16 16">
            <path d="M5.5 5.5A.5.5 0 0 1 6 6v6a.5.5 0 0 1-1 0V6a.5.5 0 0 1 .5-.5m2.5 0a.5.5 0 0 1 .5.5v6a.5.5 0 0 1-1 0V6a.5.5 0 0 1 .5-.5m3 .5a.5.5 0 0 0-1 0v6a.5.5 0 0 0 1 0z"/>
            <path d="M14.5 3a1 1 0 0 1-1 1H13v9a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2V4h-.5a1 1 0 0 1-1-1V2a1 1 0 0 1 1-1H6a1 1 0 0 1 1-1h2a1 1 0 0 1 1 1h3.5a1 1 0 0 1 1 1zM4.118 4 4 4.059V13a1 1 0 0 0 1 1h6a1 1 0 0 0 1-1V4.059L11.882 4zM2.5 3h11V2h-11z"/></svg></div></td>
        </tr>`);
      });

      $(".action").click(function () {
        Swal.fire({
          title: "Are you sure?",
          text: "You won't be able to revert this!",
          icon: "warning",
          showCancelButton: true,
          confirmButtonColor: "#3085d6",
          cancelButtonColor: "#d33",
          confirmButtonText: "Yes, delete it!",
        }).then((result) => {
          if (result.isConfirmed) {
            var id = $(this).attr("id");
            console.log(id);

            const remove = async () => {
              try {
                let response = await fetch(
                  "http://localhost:5000/remove-user",
                  {
                    method: "DELETE",
                    headers: {
                      "Content-Type": "application/json",
                    },
                    body: JSON.stringify({
                      id,
                    }),
                  }
                );

                const temp = await response.json();
                console.log(temp);

                Swal.fire("Removed!", "", "success");
                window.location.reload();
              } catch (error) {
                console.log(error);
              }
            };

            remove();

            Swal.fire({
              title: "Deleted!",
              text: "Your file has been deleted.",
              icon: "success",
            });
          }
        });
      });

      // $(".data").append(temp.data[0].fname);
    } catch (error) {
      console.log(error);
    }
  };

  retrive();
});
