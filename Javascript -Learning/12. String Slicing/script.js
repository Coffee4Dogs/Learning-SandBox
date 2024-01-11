let FullName = "Coffee Dogs";
let FirstName;
let LastName;



// FirstName = FullName.slice(0, 6);
// LastName = FullName.slice(6);
// console.log(FirstName);
// console.log(LastName);


FirstName = FullName.slice(0, FullName.indexOf(" ")+1);
LastName = FullName.slice(FullName.indexOf(" ")+1);
console.log(FirstName);
console.log(LastName);


FullName = "Snoop Dog";

FirstName = FullName.slice(0, FullName.indexOf(" ")+1);
LastName = FullName.slice(FullName.indexOf(" ")+1);
console.log(FirstName);
console.log(LastName);
