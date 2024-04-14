let username = "";

while(username ==="" || username === null){
    console.log(`You didn't enter your name`);
    username = window.prompt(`Enter your name`);
}
console.log(`Hello ${username}`)
