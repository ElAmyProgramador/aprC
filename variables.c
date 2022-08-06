#include <stdio.h> //Incluye la libreria standard-input-output.header

int main() {
	char a = 'a'; //rango de 0 a 255, usa %c
	short b = -15; //rango de -128 a 127, usa %i
	int c = 1024; //rango de -32768 a 32767, usa %i
	unsigned int d = 42325; //rango de 0 a 65535, usa &i
	long e = 262144; //usa %li
	float f = 10.5; //usa %f si quieres solo x numeros despues del punto decimal usa %.xf
	double g = 3.00045; //usa %lf, si usas %.f eliminas el punto decimal

	/*
	char es del tamaño de 1 byte
	short, int y unsigned int es de un tamaño de 2 bytes
	long es del tamaño de 4 bytes
	double y long double es de un tamaño de 8 bytes
	long, float, double y long double tienen un chingamadral de rango
	*/

	printf ("el char es: %c, el short es: %i, el int es: %i, el unsigned int es: %i, el long es: %li, el float es: %f, el double es: %lf\n", a, b, c, d, e, f, g);
}
