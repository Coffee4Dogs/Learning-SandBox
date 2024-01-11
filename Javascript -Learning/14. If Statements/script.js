let age = 75;

// The order matters!
if(age >=65){
    console.log("You are a senior citizen!");
}

else if (age >= 18){
    console.log("You are an adult!");
}

else if(age < 0 ){
    console.log("YOU HAVEN'T BEEN BORN YET!");
}



else{
    console.log("You are a child!");
}


// Boolean Example
let online = false;
if (online){
    console.log("You are online!");
}
else{
    console.log("You are offline!");
}