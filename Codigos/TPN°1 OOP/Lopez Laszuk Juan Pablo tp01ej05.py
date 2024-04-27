# -*- coding: utf-8 -*-
"""
Created on Sat Apr 27 09:13:29 2024

@author: juanp
"""

#TPN°1: Programacion orientada a objetos
#Ejercicio 5:
    
class MaquinaCalculadora:
    def __init__(self, marc, mod, cent, met, km):
        self.marc = marc
        self.mod = mod
        self.cent = cent
        self.met = met
        self.km = km
        
    def metros_a_kilometros(self):
        self.km = self.met / 1000
        print("El equivalente de los metros ingresados en km es:", self.km)
        
    def metros_a_centimetros(self):
        self.cent = self.met * 100
        print("El equivalente de los metros ingresados en cm es:", self.cent)
        
marca = input("Ingrese la marca de la calculadora:")
modelo = input("Ingrese la modelo de la calculadora:")

metros = float(input("Ingrese la cantidad de metros que desea pasar a cm y km:"))
centimetros = 0
kilometros = 0

Calculadora = MaquinaCalculadora(marca, modelo, centimetros, metros, kilometros)

Calculadora.metros_a_centimetros()
Calculadora.metros_a_kilometros()


