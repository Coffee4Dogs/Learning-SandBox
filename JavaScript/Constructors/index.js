class Animal{
    constructor(){
        //Constructor
    }
}

class Rabbit extends Animal{
    constructor(Name, Age, RunSpeed){
        this.Name = Name; 
        this.Age = Age; 
        this.RunSpeed = RunSpeed; 
    }
} //End-of-Rabbit

class Fish extends Animal{
    constructor(Name, Age, SwimSpeed){
        this.Name = Name;
        this.Age = Age;
        this.SwimSpeed = SwimSpeed;
    }
     

}//End of Fish

class Hawk extends Animal{
    constructor(Name, Age, FlySpeed){
        this.Name = Name;
        this.Age = Age;
        this.FlySpeed = FlySpeed;

    }

}//End-of-Hawk


const Rabbit = new Rabbit("rabbit", 1, 12);

