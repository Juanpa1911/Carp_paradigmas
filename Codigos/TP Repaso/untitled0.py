#TPN°1: Programacion orientada a objetos

class rectangulo:
    def __init__(self, altura, base):
        self.altura = altura
        self.base = base
        
    def calculo_area(self):
        area = self.altura * self.base
        print(f"El valor del area es de:",area)
        
    def calculo_perimetro(self):
        perimetro = (self.altura * 2) + (self.base * 2)
        print(f"El valor del perimetro es de:", perimetro)


alt_rec1 = int(input("Ingrese la altura del rectángulo:"))
base_rec1 = int(input("Ingrese la base del rectángulo:"))

rectangulo_1 = rectangulo(alt_rec1, base_rec1)

rectangulo_1.calculo_area()
rectangulo_1.calculo_perimetro()






































