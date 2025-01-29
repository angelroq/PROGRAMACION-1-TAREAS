Algoritmo calcular_edad_de_usuario
	Definir anioDeNacimiento Como Entero
	Definir mesDeNacimiento Como Entero
	Definir anioAproxUsuario Como Entero
	Definir anioConvertidoMes Como Entero
	Definir edadDelUsuario Como Entero 
	Escribir 'Bienvenido a un programa el cual permite calcular la edad del usuario'
	Escribir 'Ingrese año de nacimiento'
	Leer anioDeNacimiento
	Escribir 'Ingrese mes de nacimiento, (Ingreselo como numero de mes 1-12)'
	Leer mesDeNacimiento
	anioAproxUsuario <- 2025-anioDeNacimiento
	anioConvertidoMes <- (anioAproxUsuario*12)
	edadDelUsuario = trunc((anioConvertidoMes-mesDeNacimiento)/12)
	Escribir 'Usted tiene ', edadDelUsuario ' años de edad!'
FinAlgoritmo
