class Telefono:
    # Atributos
    Model = "Default Type"  #El modelo de la Camara.
    Camera = 0              #La cantidad de Pixeles de la Camara
    ButtonAmmount = 0       #La cantidad de botones del telefono.
    SmartPhone = True       #El telefono es smart?
    OSVersion = 0.0         #Version del Sistema Operativo


    # Constructor (El constructor es una funcion)
    def __init__ (self, Model, Camera, ButtonAmmount, SmartPhone, OSVersion):
        self.Model = Model
        self.LogicaCamara(Camera, SmartPhone)
        self.ButtonAmmount = ButtonAmmount
        self.SmartPhone = SmartPhone
        self.OSVersion = OSVersion

    
    def LogicaCamara(self, Camera, SmartPhone):
        if(SmartPhone==True and  Camera<20):
            self.Camera = 20
        else:
            self.Camera = Camera


    def ImprimirDatos(self):
        print("-------------------------------------------- \n")
        print("El telefono es un "+ self.Model + ". Tiene " + str(self.Camera) + " MP" )
        print("Esta en la version: " + str(self.OSVersion))
        print("Tiene: "+ str(self.ButtonAmmount) + " botones y ", end="")
        if(self.SmartPhone == True):
            print("es smart.")
        else:
            print("no es smart.")
    
# Datos --------------Model-----Cam-But-Smart-OSVer
iPhone10 = Telefono ("iPhone 10", 10, 3, True, 5.9)
Samsung = Telefono  ("Samsung Galaxy 11", 11, 3, False, 20.8)
Huawei = Telefono   ("Huawei P60", 20, 3, True, 7.4)
iPhone20 = Telefono ("iPhone 20", 60, 3, False, 20000.2000000)
Xiaomi = Telefono   ("Xiami Redmi10", 2, 4, True, 99999.1)
iPhone14 = Telefono ("iPhone 14", 12, 1, True, 12345.6789) 


# Imprimir En pantalla
iPhone10.ImprimirDatos()
Samsung.ImprimirDatos()
Huawei.ImprimirDatos()
iPhone20.ImprimirDatos()
Xiaomi.ImprimirDatos()
iPhone14.ImprimirDatos()








    




