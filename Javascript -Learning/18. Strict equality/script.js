// = asignment
// ==comparison operator (compare if values are equal)
// ===strict equality operator (but also compare if they have the datatype as well)
// != inequality operator
// !== strict inequality operator

const PI = 3.14;
const number = 3.14;
// ==comparison operator
console.log("==comparison operator")

if(PI == "3.14"){
    console.log("This PI is true!");
}
else{
    console.log("This PI is false");
}


// ===strict equality operator
console.log("===strict equality operator")

if(PI === "3.14"){
    console.log("This PI is true!");
}
else{
    console.log("This PI is false");
}

if(PI === number){
    console.log("This PI is true!");
}
else{
    console.log("This PI is false");
}

// != inequality operator
console.log("!=strict equality operator")


if(PI != "3.14"){
    console.log("This PI is true!");
}
else{
    console.log("This PI is false");
}

// !== strict inequality operator
console.log("!==strict equality operator")

if(PI !== "3.14"){
    console.log("This PI is true!");
}
else{
    console.log("This PI is false");
}