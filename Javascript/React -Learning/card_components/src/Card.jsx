import profilePic from "./assets/dog.jpeg"

function Card(){


    return(
        <div className="card-image">
            <img src={profilePic} alt="profile picture"></img>
            <h2 className="card-title">Coffee4Dogs</h2>
            <p className="card-text">I play videogames!</p>
        </div>


    );
}

export default Card