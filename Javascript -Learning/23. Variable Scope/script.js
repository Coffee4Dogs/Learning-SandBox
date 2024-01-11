// variable scope = where a variable is recognized
//                 and accesibel (local vs global)




function function1() {
    let x = 1;
    console.log(x);
}

function function2() {
    let x = 2;
    console.log(x);
}


function1(2);
function2();