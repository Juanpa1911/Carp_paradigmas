# -*- coding: utf-8 -*-
"""
Created on Tue Apr 23 09:57:41 2024

@author: juanp
"""

#TPN°1: Programacion orientada a objetos
#Ejercicio 2:
class circulo:
    def __init__(self, radio): #Metodo constructor
        self.radio = radio
    
    def calculo_area(self): #Metodo calculo area
        area = 3.1415 * (self.radio ** 2)
        print("fEl area del circulo es de:", area)
        
    def calculo_perimetro(self): #Metodo calculo perimetro
        perimetro = 3.1415 * 2 * self.radio
        print("fEl perimetro del circulo es de:", perimetro)
        
#Ingreso los datos
radio1 = int(input("Ingrese el radio del circulo:")) 

#Construcción del objeto
circulo_1 = circulo(radio1)

 #Llamada de los metodos de los calculos solicitados
circulo_1.calculo_area()
circulo_1.calculo_perimetro()




















