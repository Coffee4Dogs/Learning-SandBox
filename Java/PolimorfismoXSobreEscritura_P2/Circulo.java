
package polimorfxsobreescritura;

//Aqui le estamos diciendo que es una extencion de Figura
public class Circulo extends Figura {
    double Radio;
    
    public Circulo(){
        super();
    }
    
    
    public void CalcularArea(){
    Area = Math.PI*Math.pow(Radio, 2);
    //Area es una extencion del circulo.
    //Pi * R al cuadrado.
    
    }
    
    public void CalcularPerimetro(){
    Perimetro = 2 * Math.PI*Radio;
    }
    
    
    
}//Fin de la clase Circulo
