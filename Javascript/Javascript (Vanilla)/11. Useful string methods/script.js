let username = "Sponge Bob";
let PhoneNumber = "123-456-7890";

// How many letters do I have
console.log(username.length);

// Get a letter froma specific index
console.log(username.charAt(0))

// The last ocurens of this letter
console.log(username.indexOf("o"))

// last intdex of
console.log(username.lastIndexOf("o"))

// Get rid of any spaces
username = "     Sponge Bob      ";
username = username.trim();
console.log(username);

username = username.toUpperCase();
console.log(username);

username = username.toLocaleLowerCase();
console.log(username);

PhoneNumber = PhoneNumber.replaceAll("-", "/");
console.log(PhoneNumber);