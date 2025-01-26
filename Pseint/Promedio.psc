Algoritmo Promedio
	// Calcula el promedio de una lista de N datos
	Escribir 'Ingrese la cantidad de datos a operar:'
	Leer ndatos
	acum <- 0
	Para i<-1 Hasta ndatos Hacer
		Escribir 'Ingrese el dato ', i, ':' // Pide datos conforme a la cantidad que se desea
		Leer dato
		acum <- acum+dato
	FinPara
	prom <- acum/ndatos
	Escribir 'El promedio es: ', prom
FinAlgoritmo
