document.addEventListener("mousemove", parallax);

function parallax(e) {
  document.querySelectorAll(".layer").forEach((layer) => {
    const speed = layer.getAttribute("data-speed");

    const x = (e.clientX * speed) / 100;
    const y = (e.clientY * speed) / 100;

    layer.style.transform = `translateX(${x}px) translateY(${y}px)`;
  });
}
