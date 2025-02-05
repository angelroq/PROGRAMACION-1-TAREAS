Algoritmo CALCULADORA_OPERACIONES_BASICAS
	Definir signo Como Cadena
	Definir numeroUnoIngresado, numeroDosIngresado, resultadoDeOperacion Como Real
	Definir repetirUsoCalculadora Como Entero
	Repetir // Se define como real para realizar operaciones entre fracciones
		Escribir 'CALCULADORA DE LAS 4 OPERACIONES BÁSICAS.'
		Escribir '(SUMA, RESTA, DIVISIÓN Y MULTIPLICACIÓN)'
		Escribir 'Ingrese primer numero a operar'
		Leer numeroUnoIngresado
		Escribir 'Ingrese signo de operación a realizar'
		Leer signoAOperar
		Escribir 'Ingrese segundo numero a operar'
		Leer numeroDosIngresado
		Si signoAOperar='/' Y numeroDosIngresado=0 Entonces
			Escribir 'La division por cero es indefinida, por favor ingrese un segundo numero diferente de cero.'
		SiNo
			Según signoAOperar Hacer
				'+':
					resultadoDeOperacion <- numeroUnoIngresado+numeroDosIngresado
				'-': // Lee el signo ingresado para elegir la operación correspondiente al signo
					resultadoDeOperacion <- numeroUnoIngresado-numeroDosIngresado
				'/':
					resultadoDeOperacion <- numeroUnoIngresado/numeroDosIngresado
				'*':
					resultadoDeOperacion <- numeroUnoIngresado*numeroDosIngresado
				De Otro Modo:
					Escribir 'Ingrese un signo válido.'
			FinSegún
			Según signoAOperar Hacer
				'+':
					Escribir 'El resultado de la suma es: ', resultadoDeOperacion
				'-': // Lee el signo ingresado para mostrar el resultado correspondiente al signo
					Escribir 'El resultado de la resta es: ', resultadoDeOperacion
				'/':
					Escribir 'El resultado de la división es: ', resultadoDeOperacion
				'*':
					Escribir 'El resultado de la multiplicación es: ', resultadoDeOperacion
			FinSegún
		FinSi
		Escribir '¿Desea realizar otra operación?'
		Escribir 'Escriba 1 si lo desea y 0 para salir de la calculadora'
		Leer repetirUsoCalculadora
	Hasta Que repetirUsoCalculadora=0
	numeroUnoIngresado <- 0
	numeroDosIngresado <- 0
	resultadoDeOperacion <- 0
	// Algoritmo realizado por Angel Roquel 
FinAlgoritmo
