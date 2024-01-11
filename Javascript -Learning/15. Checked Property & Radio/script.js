console.log("hello");

document.getElementById("myButton").onclick = function(){

    // Check Box
    const myCheckBox = document.getElementById("myCheckBox");

    // Radio Buttons
    const VisaBtn = document.getElementById("VisaBtn");
    const MasterCardBtn = document.getElementById("MasterCardBtn");
    const PayPalBtn = document.getElementById("PayPalBtn");

    if(myCheckBox.checked == true){
        console.log("You are subscribed");
    }

    else{
        console.log("You are NOT subscribed!");
    }



    if(VisaBtn.checked){
        console.log("You are paying with a Visa!");
    }

    else if(MasterCardBtn.checked){
        console.log("You are paying with a MasterCard!");
    }
    
    else if(PayPalBtn.checked){
        console.log("You are paying with a PayPal!");
    }

    else{
        console.log("You must select a payment type!");
    }






}