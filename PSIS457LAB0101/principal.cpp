#include <iostream>
using namespace std;

int flag;
int main() {
	do {
		cout << "Mi nombre es Andr�s Alejandro Torres Gonz�lez, tengo 19 a�os, nac� y actualmente vivo en Sucre, Bolivia" << "\n"
			"soy estudiante de Ingenier�a en Ciencias de la Computaci�n y actualmente curso el 3er semestre en la USFX." << "\n";
			cout << "Ingrese 1 si desea volver a mostrar la biograf�a, y cualquier otro caracter para salir:" "\n";
			cin >> flag;
	} while (flag == 1);

	system("pause");
	return 0;
}