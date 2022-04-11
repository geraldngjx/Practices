let background = document.querySelector("body");
let btn = document.querySelector("#btn");
let text = document.querySelector("#colorCode");

function randomColor() {
    let randomNum = [];
    for (let i = 0; i < 3; i++) {
        randomNum[i] = Math.floor(Math.random() * 255) + 1;
    }
    return randomNum;
}

btn.addEventListener("click", () => {
    background.style.backgroundColor = `rgb(${randomColor()})`;
    btn.style.backgroundColor = `rgb(${randomColor()})`;
    text.innerHTML = `Color: rgb(${randomColor()})`;
})
