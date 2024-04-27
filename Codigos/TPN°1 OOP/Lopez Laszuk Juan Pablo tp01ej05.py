# -*- coding: utf-8 -*-
"""
Created on Sat Apr 27 09:13:29 2024

@author: juanp
"""

#TPN°1: Programacion orientada a objetos
#Ejercicio 5:
    
class MaquinaCalculadora: #Creo la clase de la calculadora
    def __init__(self, marc, mod, cent, met, km): #Metodo constructor con sus atributos
        self.marc = marc
        self.mod = mod
        self.cent = cent
        self.met = met
        self.km = km
        
    def metros_a_kilometros(self): #Metodo para el pasaje de metros a km
        self.km = self.met / 1000
        print("El equivalente de los metros ingresados en km es:", self.km)
        
    def metros_a_centimetros(self): #Metodo para el pasaje de metros a cm
        self.cent = self.met * 100
        print("El equivalente de los metros ingresados en cm es:", self.cent)
        
#Pido los datos al usuario
marca = input("Ingrese la marca de la calculadora:")
modelo = input("Ingrese la modelo de la calculadora:")
metros = float(input("Ingrese la cantidad de metros que desea pasar a cm y km: "))

#Le doy valores a los atributos de km y cm
centimetros = 0
kilometros = 0

#Creo un objeto calculadora
Calculadora = MaquinaCalculadora(marca, modelo, centimetros, metros, kilometros)

#Llamo a los metodos de pasaje de unidades, los cuales ya me imprimen el resultado
Calculadora.metros_a_centimetros()
Calculadora.metros_a_kilometros()


