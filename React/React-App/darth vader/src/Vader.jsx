import './App.css'

function Vader() {
    return(
        
        <div className='card'>
            <p> Name: {props.name} </p>
            <p> Age: {props.age} </p>
            <p> Student: {props.isStudent}</p>
        </div>
        
    )
}

export default Vader



