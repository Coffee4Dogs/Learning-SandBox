class PRESTAMO{
    private:
        double TasaInteresAnual;
        double Capital;
        double Cuota;
        double InteresMensual;
        int Plazo;
    
    PRESTAMO(double TasaInteresAnual, double cuota, double Capital, double InteresMensual, int Plazo){
        this-> TasaInteresAnual = TasaInteresAnual;
        this-> Cuota = Cuota;
        this-> Capital = Capital;
        this-> InteresMensual = InteresMensual;
        this-> Plazo = Plazo;
    }





    PRESTAMO(){
    }

    ~PRESTAMO(){
    }

    double CalculoInteresAnual (double TasaInteresAnual){
        return TasaInteresAnual / ((360*12) / 365);
    }

    double CalculoCuotaNivelada(double Capital, int Plazo, double TasaInteresAnual){
        double Exponente = pow((1 + TasaInteresAnual), (-1 * Plazo));
        return ((Capital * TasaInteresAnual) / 1 - Exponente);
    }

};