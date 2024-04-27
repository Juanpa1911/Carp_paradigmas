# -*- coding: utf-8 -*-
"""
Created on Tue Apr 23 09:57:41 2024

@author: juanp
"""

#TPN°1: Programacion orientada a objetos
#Ejercicio 3:
    
class empleado:
    def __init__(self, nomb, h_trab, tar_h):
        self.nomb = nomb
        self.h_trab = h_trab
        self.tar_h = tar_h
        
    def cal_salario(self):
        salario = self.h_trab * self.tar_h
        print("Al empleado", self.nomb, "le corresponde un sueldo de:", salario)
        
nombre_emp = input("Ingrese el nombre del empleado:")
horas_trab = float(input("Ingrese las horas trabajadas:"))
tarifa_hora = float(input("Ingrese el valor de la hora de trabajo:"))

empleado_1 = empleado(nombre_emp, horas_trab, tarifa_hora)

empleado_1.cal_salario()












