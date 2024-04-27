#Ejercicio 1:

def paridad(a):
    if a % 2 == 0:
        par = True
    return par

#Ejercicio 2:

def sum_elem(a):
    sumatoria = 0
    for i in range(len(a)):
        sumatoria = sumatoria + a[i]
    return sumatoria

lista_num = [1, 5, 7, 2, 9, 3, 7, 4]

resultado = sum_elem(lista_num)

print("Resultado de la sumatoria:", resultado)

#Ejercicio 3:

def ord_frase(a):

    print("Frase caracter por caracter:")
    for i in a:
        print(i)

    print("Caracteres pares:")
    for j in range(len(a)):
        if j % 2 == 0:
            print(a[j])

    print("Caracteres impares:")
    for x in range(len(a)):
        if x % 2 != 0:
            print(a[x])
        
frase = input("Ingrese una frase: ")

ord_frase(frase)

#Ejercicio 4:

def cont_pares(a):
    contador_pares = 0
    palabra = []
    for i in a:
        if i != " ":
            palabra.append(i)
        else:
            if len(palabra) % 2 == 0:
                contador_pares = contador_pares + 1
            palabra = []
    return contador_pares

frase = input("Ingrese una frase: ")

cant_pares = cont_pares(frase)

print("Cantidad de palabras con una cantidad de letras pares:", cant_pares)

#Ejercicio 5:

texto = open("fragmento_hobbit.txt","r")
textocomp = texto.read()
texto.close()

palabra = []
palabrastr = ""
cont_frase = 0
cont_pal_pares = 0
cont_pal_impares = 0
cont_pal = 0
cont_vocales = 0
cont_nombres = 0
abc = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "ñ", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
ABC = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "Ñ", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]
carac = [".", "/", "?"]
vocales = ["a", "e", "i", "o", "u"]

for i in range(len(textocomp)):
    if textocomp[i] in vocales:
        cont_vocales = cont_vocales + 1
        palabra.append(textocomp[i])
        palabrastr = palabrastr + textocomp[i]
    elif textocomp[i] in ABC and textocomp[i - 2] != ".":
        cont_nombres = cont_nombres + 1
        palabra.append(textocomp[i])
        palabrastr = palabrastr + textocomp[i]
    elif textocomp[i] in abc or textocomp[i] in ABC:
        palabra.append(textocomp[i])
        palabrastr = palabrastr + textocomp[i]
    elif textocomp[i] == " ":
        if len(palabra) % 2 == 0:
            cont_pal_pares = cont_pal_pares + 1
            cont_pal = cont_pal + 1
            palabra = []
            palabrastr = ""
        else:
            cont_pal_impares = cont_pal_impares + 1
            cont_pal = cont_pal + 1
            palabra = []
            palabrastr = ""
    elif textocomp[i] in carac:
        cont_frase = cont_frase + 1
        
print("Cantidad de palabras:", cont_pal)
print("Total de frases:", cont_frase)
print("Cantidad de nombres:", cont_nombres)
print("Cantidad de vocales:", cont_vocales)
print("Palabras pares:", cont_pal_pares)
print("Palabras impares:", cont_pal_impares)
    
#Ejercicio 6:

#a) Método 1
frase_list = []
esarf = ""

frase = input("Ingrese una frase:")

for i in range(len(frase)):
    frase_list.append(frase[i])

for x in frase_list[::-1]:
    esarf = esarf + x
    
print("Frase invertida:", esarf)

#b) Método 2
frase = input("Ingrese una frase:")

frase_invertida = frase[::-1]

print("Frase invertida:", frase_invertida)

#c) Método 3
frase = input("Ingrese una frase:")
frase_inv = ""

for i in frase:
    frase_inv = i + frase_inv
    
print("Frase invertidia:", frase_inv)

#Ejercicio 7)

def producto_escalar(a,b,c,d):
    resultado = a*c + b*d
    return resultado

print("Ingrese los valores de las coordenadas del los vectores bidimensionales:")
x1 = int(input("X1:"))
y1 = int(input("Y1:"))
x2 = int(input("X2:"))
y2 = int(input("Y2:"))

prod_esc = producto_escalar(x1, x2, y1, y2)

print("Producto escalar:", prod_esc)

#Ejercicio 8)

lista_num = []

ingreso = input("Ingrese un número para agregarlo a la lista o q para salir:")
while ingreso != "q":
    for i in ingreso:
        if i.isalpha():
            ingreso = input("Ingrese un número para agregarlo a la lista o q para salir:")
        else:
            lista_num.append(ingreso)
            ingreso = input("Ingrese un número para agregarlo a la lista o q para salir:")
    
print("Lista de núemros:", lista_num)

#Ejercicio 9)

def inversión_vector (a,b,c):
    menosa = a * (-1)
    menosb = b * (-1)
    menosc = c * (-1)
    vector_inver = [menosa, menosb, menosc]
    return vector_inver

x1 = float(input("Ingrese el valor de x:"))
y1 = float(input("Ingrese el valor de y:"))
z1 = float(input("Ingrese el valor de z:"))

vector = [x1, y1, z1]

vector_inv = inversión_vector(x1, y1, z1)

print("Vector ingresado:", vector)
print("Vector inverso:", vector_inv)

#Ejercicio 10)

#Las principales diferencias entre arreglos y listas es primero que los arreglos no pueden guardar multiples tipos de datos, solamente pueden almacenar de un solo tipo y tiene que ser declarado cuando se crea el arreglo al igual que su tamaño tambien debe ser declarado y el limitado. Sin embargo las listas pueden almacenar múltiples tipos de datos y van creciendo a medida que les agregamos datos.

#Ejercicio 11)

#Función np.zeros(): Crea y devuelve una referencia a un array con las dimensiones especificadas en la tupla dimensiones cuyos elementos son todos ceros. Primero se especifíca el tamaño de cada una de las dimensiones y luego el tipo de datos que se almacenar en el array.

#Función np.array(): Crea un array a partir de la lista o tupla lista y devuelve una referencia a él.

#Ejercicio 12)

import numpy as np
import random

matriz = np.zeros((10, 10))
suma = 0

for j in range(10):
    for i in range(10):
        matriz[j, i] = random.randint(1, 10)
        
for x in range(10):
    for y in range(10):
        suma = suma + matriz[x, y]
        
    
print("Matriz 10 x 10:","\n", matriz)        
print("Suma total de la matriz:", suma)

#Ejercicio 13)

#Método numpy
import numpy as np
import random

matriz = np.zeros((6, 6))
suma_diagonal = 0

for i in range(6):
    for j in range(6):
        matriz[i, j] = random.randint(1, 10)
        
for x in range(6):
    for y in range(6):
        if x == y:
            suma_diagonal = suma_diagonal + matriz[x, y]
            
print("Matriz 6 x 6:", "\n", matriz)
print("Suma de la diagonal:", suma_diagonal)

#Método listas anidadas
fila1 = [1, 5, 9, 4, 3, 7]
fila2 = [4, 8, 6, 1, 3, 4]
fila3 = [7, 1, 0, 8, 1, 3]
fila4 = [2, 5, 7, 9, 3, 1]
fila5 = [9, 1, 2, 0, 4, 6]
fila6 = [8, 2, 0, 3, 4, 7]
matriz = [fila1, fila2, fila3, fila4, fila5, fila6]
suma_diagonal = 0
print(matriz)
        
for x in range(6):
    for y in range(6):
        if x == y:
            suma_diagonal = suma_diagonal + matriz[x][y]
            
print("Matriz 6 x 6:", "\n", matriz)
print("Suma de la diagonal:", suma_diagonal)

#Ejercicio 14)

import numpy as np

matriz = np.zeros((6, 6))
num = 1
        
for x in range(6):
    for y in range(6):
        if x == y:
            matriz[x, y] = num
    num = num + 1
            
print("Matriz 6 x 6:", "\n", matriz)

text_matriz = open("matriz.txt", "w")
text_matriz.write(str(matriz))
text_matriz.close()

#Ejercicio 15)

#

























