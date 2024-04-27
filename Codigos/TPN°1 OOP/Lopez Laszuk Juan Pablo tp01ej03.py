# -*- coding: utf-8 -*-
"""
Created on Tue Apr 23 09:57:41 2024

@author: juanp
"""

#TPN°1: Programacion orientada a objetos
#Ejercicio 3:
    
class empleado:
    def __init__(self, nomb, h_trab, tar_h): #Metodo constructor con los atributos del empleado
        self.nomb = nomb
        self.h_trab = h_trab
        self.tar_h = tar_h
        
    def cal_salario(self): #Metodo para el calculo del salario
        salario = self.h_trab * self.tar_h #Simplemente multiplico horas trabajas por el valor de cada una
        print("Al empleado", self.nomb, "le corresponde un sueldo de:", salario)
        
#Pido que el usuario ingrese los datos necesarios para el empleado
nombre_emp = input("Ingrese el nombre del empleado:")
horas_trab = float(input("Ingrese las horas trabajadas:"))
tarifa_hora = float(input("Ingrese el valor de la hora de trabajo:"))

#Creo un objeto de la clase empleado
empleado_1 = empleado(nombre_emp, horas_trab, tarifa_hora)

#Llamo el método para el cálculo del salario
empleado_1.cal_salario()












