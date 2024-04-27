# -*- coding: utf-8 -*-
"""
Created on Tue Apr 23 09:57:41 2024

@author: juanp
"""

#TPN°1: Programacion orientada a objetos
#Ejercicio 1:
class rectangulo:
    def __init__(self, altura, base):
        self.altura = altura  #Constructor, en donde le paso los datos
        self.base = base
        
    def calculo_area(self):
        area = self.altura * self.base
        print("fEl valor del area es de:",area) #Metodo para el calculo del area
        
    def calculo_perimetro(self):
        perimetro = (self.altura * 2) + (self.base * 2)
        print("fEl valor del perimetro es de:", perimetro) #Metodo para el calculo del perimetro

#Ingreso los datos de base y altura
alt_rec1 = int(input("Ingrese la altura del rectángulo:"))
base_rec1 = int(input("Ingrese la base del rectángulo:"))

#Creo el objeto con los datos dados
rectangulo_1 = rectangulo(alt_rec1, base_rec1)

#Llamada de los metodos para el calculo del area y el perimetro
rectangulo_1.calculo_area()
rectangulo_1.calculo_perimetro()






































