// See https://aka.ms/new-console-template for more information
Console.WriteLine("Hello, World!");
//Solicita al usuario que ingrese un número dentro de un rango específico (por ejemplo, entre 1 y 100). Usa un bucle do-while para seguir solicitando el número hasta que el usuario proporcione un valor válido. Convierte la entrada de string a int y usa if para verificar si está en el rango.
int numero;
do
{
    Console.WriteLine("Ingrese un número entre 1 y 100");
    numero = Convert.ToInt32(Console.ReadLine());
} while (numero < 1 || numero > 100);
Console.WriteLine("El número es: " + numero);   
//Solicita al usuario que ingrese un número. Usa un bucle while para imprimir un recuento desde 1 hasta el número ingresado.

