// conditional rendering - allows you to controll what gets rendered
// 			in your application based on certain condition
// 			(show, hide, or change components)


import UserGreeting from "./UserGreeting"


function App() {

  return(

    <>
    
      <UserGreeting isLoggedIn={true} username="Coffee4Dogs" />
      <UserGreeting isLoggedIn={false}  />
    </>


  );


  
}

export default App
