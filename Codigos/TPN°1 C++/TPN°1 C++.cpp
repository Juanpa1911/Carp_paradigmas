#include <iostream>
#include <CString>
#include <ctime>

using namespace std;

int main(){
	cout << "Ejercicio 1)" << endl;
	string frase;
	frase = "Hola Pepe, tanto tiempo!";
	cout << frase << endl;
	cout << endl;
	
	cout << "Ejercicio 2)" << endl;
	cout << "a)El orden de prioridad es el siguiente, primero resuelvo los parentesis, luego multiplicaciones y divisiones, y por ultimo sumas y restas. Por ejemplo, 3 + 5 * (74 - 2) deberia de dar 363." << endl;
	int resultado2a;
	resultado2a = 3 + 5 * (74 - 2);
	cout << "Resultado de 3 + 5 * (74 - 2)= " << resultado2a << endl;
	
	cout << "b)No es lo mismo ya que en uno se aplica distributiva y en el otro no." << endl;
	int resultado2b1;
	resultado2b1 = 2 * 10 + 5;
	int resultado2b2;
	resultado2b2 = 2 * (10 + 5);
	cout << "Primer caso 2 * 10 + 5 = " << resultado2b1 << endl;
	cout << "Segundo caso 2 * (10 + 5) = " << resultado2b2 << endl;
	
	cout << "c)En este caso a pesar de que la division no es exacta se redondea a la unidad." << endl;
	float resultado2c;
	resultado2c = 5 / 2;
	cout << "Resultado = " << resultado2c << endl;
	
	cout << "d)En este caso si a la variable del resultado la hago del tipo int solo me toma las unidades, sin embargo si la hago del tipo float toma decimales." << endl;
	int resultado2d;
	resultado2d = 5.0 / 2;
	cout << "Resultado = " << resultado2d << endl;
	
	cout << "e)Al igual que en el caso anterior depende como definimos la variable." << endl;
	float resultado2e;
	resultado2e = 5.0 / 2.0;
	cout << "Resultado = " << resultado2e << endl;
	
	cout << "f)En este caso no me arroja ningun resultado ya que no son variables del mismo tipo." << endl;
	string resultado2f;
	resultado2f = 5 + "helou";
	cout << "Resultado = " << resultado2f << endl;
	
	cout << "g)En este caso me arroja un error ya que no me permite concatenar texto con un operador aritmetico." << endl;
	string resultado2g;
	resultado2g = "hola + Pepito";
	cout << resultado2g << endl;
	cout << endl;
	
	cout << "Ejercicio 3)" << endl;
	int num31;
	int num32;
	num31 = 24;
	num32 = 786;
	int resultado3;
	resultado3 = num31 + num32;
	cout << "Resultado = " << resultado3 << endl;
	cout << endl;
	
	cout << "Ejercicio 4) Cantidad de bytes que ocupan cada uno de los tipos de datos:" << endl;
	cout << "int = " << sizeof(int) << endl;
	cout << "float = " << sizeof(float) << endl;
	cout << "double = " << sizeof(double) << endl;
	cout << "string = " << sizeof(string) << endl;
	cout << "char = " << sizeof(char) << endl;
	cout << "bool = " << sizeof(bool) << endl;
	cout << "void = " << sizeof(void) << endl;
	cout << endl;
	
	cout << "Ejercicio 5)" << endl;
	int a5;
	a5 = 5;
	int b5;
	b5 = 8;
	cout << "Variable a = " << a5 << endl;
	cout << "Variable b = " << b5 << endl;
	cout << endl;
	cout << "Intercambiamos variables." << endl;
	int c5;
	c5 = a5;
	a5 = b5;
	b5 = c5;
	cout << "Variable a = " << a5 << endl;
	cout << "Variable b = " << b5 << endl;
	cout << endl;
	
	cout << "Ejercicio 6)" << endl;
	float num61;
	float num62;
	cout << "Ingrese un numero: ";
	cin >> num61;
	cout << "Ingrese un segundo numero: ";
	cin >> num62;
	float suma6;
	float multiplicacion6;
	suma6 = num61 + num62;
	multiplicacion6 = num61 * num62;
	cout << "Resultado de la suma de ambos: " << suma6 << endl;
	cout << "Resultado de la multiplicacion entre ambos: " << multiplicacion6 << endl;
	cout << endl;
	
	cout << "Ejercicio 7)" << endl;
	float dolpeso;
	cout << "Ingrese el valor del dolar en pesos: " << endl;
	cin >> dolpeso;
	float dolares;
	cout << "Ingrese la cantidad de dolares que desea convertir: " << endl;
	cin >> dolares;
	float cambio;
	cambio = dolares * dolpeso;
	cout << "Pesos equivalentes: " << cambio << endl;
	cout << endl;
	
	cout << "Ejercicio 8)Calculo del volumen de un cono" << endl;
	float radio;
	cout << "Ingrese el valor del radio: ";
	cin >> radio;
	float altura;
	cout << "Ingrese el valor de la altura: ";
	cin >> altura;
	float pi8 = 3.1415;
	float volcono;
	volcono = (pi8 * (radio * radio) * altura) / 3;
	cout << "Volumen del cono con los datos dados: " << volcono << endl;
	cout << endl;
	
	cout << "Ejercicio 9)Calculo del volumen de una esfera" << endl;
	float diametro;
	cout << "Ingrese el valor del diametro de la esfera:";
	cin >> diametro;
	float pi9 = 3.1415;
	float radesf;
	radesf = diametro / 2;
	float volesf;
	volesf = 4 * (pi9 * (radesf * radesf * radesf)) / 3;
	cout << "Volumen de la esfera: " << volesf << endl;
	cout << endl;
	
	cout << "Ejercicio 10)Calculo volumen cubo" << endl;
	float lado;
	cout << "Ingrese el valor del lado del cubo: ";
	cin >> lado;
	float volcubo;
	volcubo = lado * lado * lado;
	cout << "Volumen del cubo: " << volcubo << endl;
	cout << endl;
	
	cout << "Ejercicio 11)Pasaje de unidades de distancia" << endl;
	float metros;
	cout << "Ingrese la distancia en metros: ";
	cin >> metros;
	float decimetros;
	decimetros = metros * 10;
	float centimetros;
	centimetros = metros * 100;
	float milimetros;
	milimetros = metros * 1000;
	float decametros;
	decametros = metros / 10;
	float kilometros;
	kilometros = metros / 1000;
	float pies;
	pies = metros * 3.28;
	float yardas;
	yardas = metros * 1.09;
	float pulgadas;
	pulgadas = metros * 39.37;
	float millas;
	millas = metros / 1609;
	float millasnauticas;
	millasnauticas = metros / 1852;
	cout << "Distancia en decimetros: " << decimetros << endl;
	cout << "Distancia en centimetros: " << centimetros << endl;
	cout << "Distancia en milimetros: " << milimetros << endl;
	cout << "Distancia en decametros: " << decametros << endl;
	cout << "Distancia en kilometros: " << kilometros << endl;
	cout << "Distancia en pies: " << pies << endl;
	cout << "Distancia en yardas: " << yardas << endl;
	cout << "Distancia en pulgadas: " << pulgadas << endl;
	cout << "Distancia en millas: " << millas << endl;
	cout << "Distancia en millas nauticas: " << millasnauticas << endl;
	cout << endl;
	
	cout << "Ejercicio 12)Contador de letras" << endl;
	string palabra12;
	getline(cin, palabra12);
	int cantletras;
	cantletras = palabra12.size();
	cout << "La palabra cuenta con " << cantletras << " letras" << endl;
	cout << endl;
	
	cout << "Ejercicio 13)" << endl;
	string palabra13;
	cin >> palabra13;
	int tamanopal13 = palabra13.size();
	while (tamanopal13 <= 4){
	cin >> palabra13;
	tamanopal13 = palabra13.size();
	}
	for (int i = 0; i < tamanopal13; i = i + 1){
		if (i == 0){
			cout << "Primera letra: " << palabra13[i] << endl;
		}
		if (i == 2){
			cout <<  "Tercera letra: " << palabra13[i] << endl;
		}
		if (i == 3){
			cout << "Cuarta letra: " << palabra13[i] << endl;
		}
	}
	cout << endl;
	
	cout << "Ejercicio 14)" << endl;
	string palabra14;
	cout << "Ingrese una palabra: ";
	cin >> palabra14;
	int tamanopal14 = palabra14.size();
	for (int i = 0; i < tamanopal14; i = i + 1){
		if (i == 0){
			cout << "Primera letra: " << palabra14[i] << endl;
		}
		if (i == (tamanopal14 - 1)){
			cout << "Ultima letra: " << palabra14[i] << endl;
		}
	}
	cout << endl;
	
	cout << "Ejercicio 15)" << endl;
	int num15;
	cout << "Ingrese un numero: ";
	cin >> num15;
	if (num15 > 0){
		cout << "El numero es positivo.";
	}
	if (num15 < 0){
		cout << "El numero es negativo.";
	}
	if (num15 == 0){
		cout << "El numero es igual a cero.";
	}
	cout << endl;
	
	cout << "Ejercicio 16)" << endl;
	float dividendo;
	cout << "Ingrese el numero a dividir:";
	cin >> dividendo;
	float divisor;
	cout << "Ingrese el divisor:";
	cin >> divisor;
	while (divisor == 0){
		cout << "El divisor no puede ser 0, ingrese otro numero:";
		cin >> divisor;
	}
	//Se necesita un condicional para el caso en el que el usuario ingrese un 0, ya que no se puede dividir por 0.
	float resultado16;
	resultado16 = dividendo / divisor;
	cout << "El resultado de la division es: " << resultado16;
	cout << endl;
	
	cout << "Ejercicio 17)Par o impar" << endl;
	int num17;
	cout << "Ingrese un numero entero:";
	cin >> num17;
	if (num17 % 2 == 0){
		cout << "El numero es par.";
	}
	else{
		cout << "El numero es impar.";
	}
	cout << endl;
	
	cout << "Ejercicio 18)" << endl;
	float num181;
	cout << "Ingrese un numero:";
	cin >> num181;
	float num182;
	cout << "Ingrese otro numero:";
	cin >> num182;
	float resta = num182 - num181;
	if (resta < 0){
		cout << "El resultado de la resta del segundo menos el primero es negativa.";
		resta = resta * (-1);
		cout << endl;
		cout << "Valor absoluto de la resta: " << resta << endl;
	}
	else {
		cout << "El resultado de la resta del segundo menos el primero es positiva." << endl;
		cout << "Valor absoluto de la resta: " << resta << endl;
	}
	cout << endl;
	
		cout << "Ejercicio 19)" << endl;
	srand(time(0));
	int num19r = rand() % 5;
	cout << "Adivine el numero elegido entre 1 y 5: ";
	int num19i ;
	cin >> num19i;
	if (num19i < num19r){
		cout << "Perdio, el numero era mayor.";
	}
	if (num19i > num19r){
		cout << "Perdio, el numero era menor.";
	}
	if (num19i == num19r){
		cout << "Excelente, le pego al numero!";
	}
	cout << endl;
	
	
		cout << "Ejercicio 20)" << endl;
	int notaB;
	int notaV;
	srand(time(0));
	notaB = rand() % 10;
	notaV = rand() % 10;
	if (notaB >= (2 * notaV)){
		cout << "Betty esta feliz!" << endl;
		cout << "Nota Betty: " << notaB << endl;
		cout << "Nota Vilma: " << notaV << endl;
	}
	else {
		cout << "Betty no esta feliz!" << endl;
		cout << "Nota Betty: " << notaB << endl;
		cout << "Nota Vilma: " << notaV << endl;
	}
	cout << endl;
	
	
	
	cout << "Ejercicio 21)" << endl;
	float num211;
	float num212;
	cout << "Ingrese dos numeros:" << endl;
	cin >> num211;
	cin >> num212;
	if (num211 > num212){
		cout << "El numero mayor es: " << num211;
	}
	if (num211 < num212){
		cout << "El numero mayor es: " << num212;
	}
	cout << endl;
	
	
		cout << "Ejercicio 22)" << endl;
	float nota;
	cout << "Ingrese la nota que desea pasar al sistema norteamericano (o 101 para salir):";
	cin >> nota;
	while (nota <= 100){
		if (0 <= nota && nota <= 59){
			cout << "La nota en el sistema americano es: F" << endl;
		}
		if (60 <= nota && nota <= 69){
			cout << "La nota en el sistema americano es: D" << endl;
		}
		if (70 <= nota && nota <= 79){
			cout << "La nota en el sistema americano es: C" << endl;
		}
		if (80 <= nota && nota <= 89){
			cout << "La nota en el sistema americano es: B" << endl;
		}
		if (90 <= nota && nota <= 100){
			cout << "La nota en el sistema americano es: A" << endl;
		}
		cout << "Ingrese la nota que desea pasar al sistema norteamericano (o 101 para salir):";
		cin >> nota;
	}
	cout << "Cerrando programa.";
	cout << endl;
	
	
	cout << "Ejercicio 23)" << endl;
	int num231 = 1;
	int num232 = 55;
	int num233 = 7;
	int num234 = 13;
	int num235 = 14;
	if ((num231 + num232 + (num231 * num232)) == 111){
		cout << "El par de numeros 1, 55 es unisticio." << endl;
	}
	else{
		cout << "El par de numeros 1, 55 no es unisticio." << endl;
	}
	if ((num232 + num231 + (num232 * num231)) == 111){
		cout << "El par de numeros 55, 1 es unisticio." << endl;
	}
	else {
		cout << "El par de numeros 55, 1 no es unisticio." << endl;
	}
	if ((num233 + num234 + (num233 * num234)) == 111){
		cout << "El par de numeros 7, 13 es unisticio." << endl;
	}
	else{
		cout << "El par de numeros 7, 13 no es unisticio." << endl;
	}
	if ((num233 + num235 + (num233 * num235)) == 111){
		cout << "El par de numeros 7, 14 es unisticio." << endl;
	}
	else{
		cout << "El par de numeros 7, 14 no es unisticio." << endl;
	}
	cout << endl;
	
	
		cout << "Ejercicio 24)" << endl;
	int num24;
	int cero = 0;
	cout << "Ingrese un numero para ver la secuencia hasta ese numero:";
	cin >> num24;
	while (cero <= num24){
		cout << cero << endl;
		cero = cero + 1;
	}
	cout << endl;
	
	
	cout << "Ejercicio 25)" << endl;
	float resultado25 = 0;
	float num25;
	cout << "Ingrese un numero o 0 para salir:";
	cin >> num25;
	while (num25 != 0){
		resultado25 = num25 + resultado25;
		cout << "Ingrese otro número o 0 para salir:";
		cin >> num25;
	}
	cout << "Resultado de la sumatoria de los numeros ingresados: " << resultado25;
	cout << endl;
	
	
	cout << "Ejercicio 26)" << endl;
	string frase26;
	int tam_frase26;
	cout << "Ingrese una frase por favor:" << endl;
	getline(cin, frase26);
	tam_frase26 = frase26.size();
	for (int i = 0 ; i < tam_frase26; i++){
		if (frase26[i] != ' '){
			cout << frase26[i] << endl;
		}
	}
	cout << endl;
	
	
	cout << "Ejercicio 27)" << endl;
	string pal27;
	int tam_pal27;
	cout << "Ingrese una palabra por favor:" << endl;
	getline(cin, pal27);
	tam_pal27 = pal27.size();
	cout << "Letras en las posiciones pares:" << endl;
	for (int i = 0 ; i < tam_pal27; i++){
		if (i % 2 == 0){
			cout << pal27[i + 1] << endl;
		}
	}
	cout << endl;
	
	
	cout << "Ejercicio 28)" << endl;
	int vector28[8];
	int producto28 = 1;
	srand(time(0));
	cout << "Vector de 8 numeros: ";
	for (int i = 0; i < 8; i++){
		vector28[i] = (rand() % 9) + 1;
		producto28 = producto28 * vector28[i];
		cout << vector28[i] << ", ";
		if (i == 7){
			cout << endl;
		}
	}
	cout << "Producto de los numeros que contiene:" << producto28 << endl;
	cout << endl;
	
	
	cout << "Ejercicio 29)" << endl;
	int vector291[10];
	int vector292[10];
	int prod_esc29;
	srand(time(0));
	cout << "Vector 1: ";
	for (int i = 0; i < 10; i++){
		vector291[i] = (rand() % 9) + 1;
		cout << vector291[i] << ", ";
	}
	cout << endl;
	cout << "Vector 2: ";
	for (int j = 0; j < 10; j++){
		vector292[j] = (rand() % 9) + 1;
		cout << vector292[j] << ", ";
	}
	for (int x = 0; x < 10; x++){
		prod_esc29 = prod_esc29 + (vector291[x] * vector292[x]);
	}
	cout << endl;
	cout << "Producto escalar entre ambos: " << prod_esc29;
	cout << endl;
	
	
	cout << "Ejercicio 30)" << endl;
	int vector30[25];
	srand(time(0));
	cout << "Vector: ";
	for (int i = 0; i < 25; i++){
		vector30[i] = rand();
		cout << vector30[i] << ", ";
	}
	cout << endl;
	cout << "Valor de la primera posicion: " << vector30[0] << endl;
	cout << "Valor de la posicion del medio: " << vector30[12] << endl;
	cout << "Valor de la ultima posicion: " << vector30[24] << endl;
	cout << endl;
	
	
	cout << "Ejercicio 31)" << endl;
	int matriz31[6][6];
	int sum_dia31;
	srand(time(0));
	cout << "Matriz: " << endl;
	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 6; j++){
			matriz31[i][j] = rand() % 50;
			cout << matriz31[i][j] << ' ';
			if (i == j){
				sum_dia31 = sum_dia31 + matriz31[i][j];
			}
		}
		cout << endl;
	}
	cout << "Suma de la diagonal: " << sum_dia31 << endl;
	cout << endl;
	
	
	cout << "Ejercicio 32)" << endl;
	int matriz32[8][12];
	int sum_filas[8];
	srand(time(0));
	for (int i = 0; i < 8; i++){
		sum_filas[i] = 0;
	}
	cout << "Matriz y la suma de sus filas: " << endl;
	for (int x = 0; x < 8; x++){
		for (int y = 0; y < 12; y++){
			matriz32[x][y] = rand() % 50;
			cout << matriz32[x][y] << ' ';
			sum_filas[x] = sum_filas[x] + matriz32[x][y];
		}
		cout << " = " << sum_filas[x];
		cout << endl;
	}
	cout << endl;
	
	
	cout << "Ejercicio 33)" << endl;
	string frase33;
    cout << "Ingresa una frase de al menos 3 palabras: ";
    getline(cin, frase33);
    string palabra_actual = "";
    string palabra_media = "";
    int contador_palabras = 0;
    bool palabra_encontrada = false;
    for (char c : frase33) {
        if (c != ' ') {
            palabra_actual += c;
        } 
		else {
            contador_palabras++;
            if (!palabra_encontrada && contador_palabras == 2) {
                palabra_media = palabra_actual;
                palabra_encontrada = true;
            }
            palabra_actual = "";
        }
    }
    contador_palabras++;
    if (!palabra_encontrada && contador_palabras == 2) {
        palabra_media = palabra_actual;
    }
    cout << "La palabra del medio es: " << palabra_media << endl;
    int longitud = palabra_media.length();
    cout << "La longitud de la palabra del medio es: " << longitud << endl;
	
	cout << endl;
    
    
	cout << "Ejercicio 34)" << endl;
	string Nombre_Apellido;
	string Nombre = "";
	string Apellido = "";
	bool espacio_encontrado = false;
	cout << "Ingrese su nombre y su apellido: ";
	getline (cin, Nombre_Apellido);
    for (char c : Nombre_Apellido) {
        if (c == ' ') {
            espacio_encontrado = true;
        } 
		else {
            if (!espacio_encontrado) {
                Nombre += c;
            } 
			else {
                Apellido += c;
            }
        }
    }
    
    cout << "Inversion: " << Apellido << ", "  << Nombre << endl;
	cout << endl;
	
	return 0;
}