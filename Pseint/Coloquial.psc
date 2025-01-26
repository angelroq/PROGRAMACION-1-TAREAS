// Si tiene problemas para ejecutar este ejemplo seleccione el perfil "Flexible"
// en el cuadro de "Opciones del lenguaje", al cual se accede desde el menú Configurar.
// Este ejemplo muestra algunas de las variaciones posibles cuando se utiliza
// syntaxis flexible, instrucciones adicionales, y expresiones en lenguaje
// coloquial para las condiciones.
Algoritmo Coloquial
	Definir num1, num2, num3 Como Entero
	Escribir 'Ingrese 3 numeros (los dos primeros deben ser enteros):'
	Leer num1, num2, num3
	Si (num1)>(num2) Y (num1)>(num3) Entonces
		Escribir num1, ' es el mayor'
	SiNo
		Si (num2)>(num3) Entonces
			Escribir num2, ' es el mayor'
		SiNo
			Escribir num3, ' es el mayor'
		FinSi
	FinSi
	Escribir 'Pulse una tecla para continuar'
	Esperar Tecla
	Limpiar Pantalla
	Si (num1) MOD 2=0 Entonces
		Escribir num1, ' es par'
	SiNo
		Escribir num1, ' es impar'
	FinSi
	Escribir 'Los divisores de ', num2, ' son: 'Sin Saltar
	Para i<-1 Hasta num2-1 Hacer
		Si (num2) MOD (i)=0 Entonces
			Escribir i, ' 'Sin Saltar
		FinSi
	FinPara
	Escribir num2
	Si (num3)=TRUNC(num3) Entonces
		Escribir 'El ultimo numero ingresado: ', num3, ' es entero'
	SiNo
		Escribir num3, ' es real'
	FinSi
	// REVISADO POR: Angel Roquel
FinAlgoritmo
