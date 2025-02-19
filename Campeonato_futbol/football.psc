Algoritmo football
	Definir i, j Como Entero
	Definir estadisticas Como Cadena
	Definir nombres Como Cadena
	Definir datos Como Entero
	Definir repet Como Entero
	Definir ganador1, ganador2, ganador3, ganador4, ganador5, ganador6 Como Entero
	Dimensionar datos(6,5)
	Dimensionar estadisticas(6,1)
	Repetir
		Limpiar Pantalla
		Para j<-1 Hasta 6 Con Paso 1 Hacer
			Escribir 'Ingrese nombre del equipo No. ', j
			Leer nombres
			estadisticas[j,1]<-nombres
		FinPara
		Limpiar Pantalla
		Escribir 'Primera vuelta'
		Escribir 'Nom.Equipo     PJ              PG              PP              PE              GA'
		// Genera los datos aleatorios
		Para j<-1 Hasta 6 Con Paso 1 Hacer
			Escribir estadisticas[j,1], '              'Sin Saltar
			Para x<-1 Hasta 5 Con Paso 1 Hacer
				datos[j,x]<-azar(10)
				Escribir datos[j,x], '               'Sin Saltar
			FinPara
			Escribir ' '
		FinPara
		// Asigna los ganadores variables  los partidos ganados por equipo
		ganador1 <- datos[1,2]
		ganador2 <- datos[2,2]
		ganador3 <- datos[3,2]
		ganador4 <- datos[4,2]
		ganador5 <- datos[5,2]
		ganador6 <- datos[6,2]
		// compara a todos los equipos para encontrar el que gano más partidos
		Si ganador1>ganador2 Y ganador1>ganador3 Y ganador1>ganador4 Y ganador1>ganador5 Y ganador1>ganador6 Entonces
			Escribir 'El ganador es el equipo: ', estadisticas[1,1]
		SiNo
			Si ganador2>ganador1 Y ganador2>ganador3 Y ganador2>ganador4 Y ganador2>ganador5 Y ganador2>ganador6 Entonces
				Escribir 'El ganador es el equipo: ', estadisticas[2,1]
			SiNo
				Si ganador3>ganador1 Y ganador3>ganador2 Y ganador3>ganador4 Y ganador3>ganador5 Y ganador3>ganador6 Entonces
					Escribir 'El ganador es el equipo: ', estadisticas[3,1]
				SiNo
					Si ganador4>ganador1 Y ganador4>ganador2 Y ganador4>ganador3 Y ganador4>ganador5 Y ganador4>ganador6 Entonces
						Escribir 'El ganador es el equipo: ', estadisticas[4,1]
					SiNo
						Si ganador5>ganador1 Y ganador5>ganador2 Y ganador5>ganador3 Y ganador5>ganador4 Y ganador5>ganador6 Entonces
							Escribir 'El ganador es el equipo: ', estadisticas[5,1]
						SiNo
							Si ganador6>ganador1 Y ganador6>ganador2 Y ganador6>ganador3 Y ganador6>ganador4 Y ganador6>ganador5 Entonces
								Escribir 'El ganador es el equipo: ', estadisticas[6,1]
							SiNo
								Escribir 'Ocurrio un empate entre alguno equipos'
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
		// Hace el calculo de la segunda vuelta
		Escribir ' '
		Escribir 'Segunda vuelta'
		Escribir 'Nom.Equipo     PJ              PG              PP              PE              GA'
		Para j<-1 Hasta 6 Con Paso 1 Hacer
			Escribir estadisticas[j,1], '              'Sin Saltar
			Para x<-1 Hasta 5 Con Paso 1 Hacer
				datos[j,x]<-azar(10)
				Escribir datos[j,x], '               'Sin Saltar
			FinPara
			Escribir ' '
		FinPara
		// Asigna los ganadores variables  los partidos ganados por equipo
		ganador1 <- datos[1,2]
		ganador2 <- datos[2,2]
		ganador3 <- datos[3,2]
		ganador4 <- datos[4,2]
		ganador5 <- datos[5,2]
		ganador6 <- datos[6,2]
		// Asigna los ganadores variables  los partidos ganados por equipo
		Si ganador1>ganador2 Y ganador1>ganador3 Y ganador1>ganador4 Y ganador1>ganador5 Y ganador1>ganador6 Entonces
			Escribir 'El ganador es el equipo: ', estadisticas[1,1]
		SiNo
			Si ganador2>ganador1 Y ganador2>ganador3 Y ganador2>ganador4 Y ganador2>ganador5 Y ganador2>ganador6 Entonces
				Escribir 'El ganador es el equipo: ', estadisticas[2,1]
			SiNo
				Si ganador3>ganador1 Y ganador3>ganador2 Y ganador3>ganador4 Y ganador3>ganador5 Y ganador3>ganador6 Entonces
					Escribir 'El ganador es el equipo: ', estadisticas[3,1]
				SiNo
					Si ganador4>ganador1 Y ganador4>ganador2 Y ganador4>ganador3 Y ganador4>ganador5 Y ganador4>ganador6 Entonces
						Escribir 'El ganador es el equipo: ', estadisticas[4,1]
					SiNo
						Si ganador5>ganador1 Y ganador5>ganador2 Y ganador5>ganador3 Y ganador5>ganador4 Y ganador5>ganador6 Entonces
							Escribir 'El ganador es el equipo: ', estadisticas[5,1]
						SiNo
							Si ganador6>ganador1 Y ganador6>ganador2 Y ganador6>ganador3 Y ganador6>ganador4 Y ganador6>ganador5 Entonces
								Escribir 'El ganador es el equipo: ', estadisticas[6,1]
							SiNo
								Escribir 'Ocurrio un empate entre alguno equipos'
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
		Escribir '¿Desea realizar otro campeonato? 0=No 1=si'
		Leer repet
	Hasta Que repet=0
FinAlgoritmo
