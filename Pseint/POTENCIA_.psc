// Implementaci�n del c�lculo de una potencia mediante una funci�n recursiva
// El paso recursivo se basa en que A^B = B*(A^(B-1))
// El paso base se base en que A^0 = 1
Funci�n resultado <- Potencia (base,exponente)
	Si exponente=0 Entonces
		resultado <- 1
	SiNo
		resultado <- base*Potencia(base,exponente-1)
	FinSi
FinFunci�n

Algoritmo POTENCIA_
	Escribir 'Ingrese Base'
	Leer base
	Escribir 'Ingrese Exponente'
	Leer exponente
	Escribir 'El resultado es ', Potencia(base,exponente)
	// REVISADO POR: Angel Roquel
FinAlgoritmo
