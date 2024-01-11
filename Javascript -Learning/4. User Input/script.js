


// // Input through a window:
// let username = window.prompt("What's your name?");
// console.log(username);


document.getElementById("myButton").onclick = function(){
    username = document.getElementById("myText").value;
    console.log(username);
    document.getElementById("myLabel").innerHTML = "Hello " + username;
}