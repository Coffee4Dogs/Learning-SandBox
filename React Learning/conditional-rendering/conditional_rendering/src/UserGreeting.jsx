import PropTypes from "prop-types"

function UserGreeting(props) {

        //Way1
    // if (props.isLoggedIn) {
    //     return <h2> Welcome {props.username}</h2>
        
    // }

    // else{
    //     return <h2>Please log in to continue.</h2>
    // }
    

    //     Way2
    // Ternaty Operator Javascript:
    // condition ? exprIfTrue : exprIfFalse
    // return(props.isLoggedIn ? <h2 className="welcome-message">Welcome  {props.username}</h2>
    //                         :<h2 className="login-prompt">Please log in to continue</h2>);


    const welcomemessage = <h2 className="welcome-message">Welcome  {props.username}</h2>
    const loginprompt = <h2 className="login-prompt">Please log in to continue</h2>

    return(
        
        props.isLoggedIn ? welcomemessage : loginprompt


    );


}

UserGreeting.proptypes = {
    isLoggedIn: PropTypes.bool,
    username: PropTypes.string,

}

UserGreeting.defaulProps = {
    isLoggedIn: false,
    username: "Guest",

}


export default UserGreeting