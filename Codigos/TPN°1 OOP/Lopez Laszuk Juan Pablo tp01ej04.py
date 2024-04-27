# -*- coding: utf-8 -*-
"""
Created on Tue Apr 23 09:57:41 2024

@author: juanp
"""

#TPN°1: Programacion orientada a objetos
#Ejercicio 4:
    
class Persona: #Creo la clase Persona
    def __init__(self, nomb, pes, alt): #Metodo constructor
        self.nomb = nomb
        self.pes = pes
        self.alt = alt
        
    def IMC_pers(self): #Metodo para el calculo del IMC
        IMC = self.pes / (self.alt ** 2) #Formula de calculo
        print("El valor del IMC de", self.nomb, "es de:", IMC) #Imprimo el resultado
        
#Pido que el usuario ingrese los datos necesarios para el calculo
nombre = input("Ingrese el nombre de la persona: ")
peso = float(input("Ingrese el peso en kg: "))
altura = float(input("Ingrese la altura en mentros: "))
        
#Creo un objeto de la clase Persona y le los valores ingresados por el usuario a los atributos
persona_1 = Persona(nombre, peso, altura)

#Llamo al metodo de calculo del IMC
persona_1.IMC_pers()