$(document).ready(() => {
  $(".btn1").click(() => {
    const xhr = new XMLHttpRequest();
    xhr.open("GET", "https://jsonplaceholder.typicode.com/posts", true);
    xhr.onprogress = function () {
      console.log("on progress");
    };

    xhr.onload = async function () {
      let temp = this.responseText;
      const data = await JSON.parse(temp);

    //   console.log(data[0]);
      for (let i = 0; i < data.length; i++)
        $(".data").append(`<div>${i + 1}. ${data[i].title}</div>`);
    };

    xhr.send();
  });
});
