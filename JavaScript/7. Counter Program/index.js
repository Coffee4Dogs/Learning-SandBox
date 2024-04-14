

const decreaseBtn = document.getElementById("decreaseBtn");
const resetBtn = document.getElementById("resetBtn");
const increaseBtn = document.getElementById("increaseBtn");
const countLabel = document.getElementById("countLabel")
let count = 0;



increaseBtn.onclick = () =>{
    count ++;
    countLabel.textContent = count;
}

decreaseBtnBtn.onclick = () =>{
    count ++;
    countLabel.textContent = count;
}