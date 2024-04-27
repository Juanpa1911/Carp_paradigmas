# -*- coding: utf-8 -*-
"""
Created on Tue Apr 23 09:57:41 2024

@author: juanp
"""

#TPN°1: Programacion orientada a objetos
#Ejercicio 4:
    
class Persona:
    def __init__(self, nomb, pes, alt):
        self.nomb = nomb
        self.pes = pes
        self.alt = alt
        
    def IMC_pers(self):
        IMC = self.pes / (self.alt ** 2)
        print("El valor del IMC de", self.nomb, "es de:", IMC)
        
nombre = input("Ingrese el nombre de la persona: ")
peso = float(input("Ingrese el peso en kg: "))
altura = float(input("Ingrese la altura en mentros: "))
        
persona_1 = Persona(nombre, peso, altura)

persona_1.IMC_pers()