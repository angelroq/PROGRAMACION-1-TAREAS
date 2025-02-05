Algoritmo CALCULADORA_OPERACIONES_BASICAS
	Definir signo Como Cadena
	Definir numeroUnoIngresado, numeroDosIngresado, resultadoDeOperacion Como Real
	Definir repetirUsoCalculadora Como Entero
	Repetir // Se define como real para realizar operaciones entre fracciones
		Escribir 'CALCULADORA DE LAS 4 OPERACIONES B�SICAS.'
		Escribir '(SUMA, RESTA, DIVISI�N Y MULTIPLICACI�N)'
		Escribir 'Ingrese primer numero a operar'
		Leer numeroUnoIngresado
		Escribir 'Ingrese signo de operaci�n a realizar'
		Leer signoAOperar
		Escribir 'Ingrese segundo numero a operar'
		Leer numeroDosIngresado
		Si signoAOperar='/' Y numeroDosIngresado=0 Entonces
			Escribir 'La division por cero es indefinida, por favor ingrese un segundo numero diferente de cero.'
		SiNo
			Seg�n signoAOperar Hacer
				'+':
					resultadoDeOperacion <- numeroUnoIngresado+numeroDosIngresado
				'-': // Lee el signo ingresado para elegir la operaci�n correspondiente al signo
					resultadoDeOperacion <- numeroUnoIngresado-numeroDosIngresado
				'/':
					resultadoDeOperacion <- numeroUnoIngresado/numeroDosIngresado
				'*':
					resultadoDeOperacion <- numeroUnoIngresado*numeroDosIngresado
				De Otro Modo:
					Escribir 'Ingrese un signo v�lido.'
			FinSeg�n
			Seg�n signoAOperar Hacer
				'+':
					Escribir 'El resultado de la suma es: ', resultadoDeOperacion
				'-': // Lee el signo ingresado para mostrar el resultado correspondiente al signo
					Escribir 'El resultado de la resta es: ', resultadoDeOperacion
				'/':
					Escribir 'El resultado de la divisi�n es: ', resultadoDeOperacion
				'*':
					Escribir 'El resultado de la multiplicaci�n es: ', resultadoDeOperacion
			FinSeg�n
		FinSi
		Escribir '�Desea realizar otra operaci�n?'
		Escribir 'Escriba 1 si lo desea y 0 para salir de la calculadora'
		Leer repetirUsoCalculadora
	Hasta Que repetirUsoCalculadora=0
	numeroUnoIngresado <- 0
	numeroDosIngresado <- 0
	resultadoDeOperacion <- 0
	// Algoritmo realizado por Angel Roquel 
FinAlgoritmo
