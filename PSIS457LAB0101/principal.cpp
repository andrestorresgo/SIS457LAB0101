#include <iostream>
using namespace std;

int flag;
int main() {
	do {
		cout << "biograf�a" << "\n";
			cout << "Ingrese 1 si desea volver a mostrar la biograf�a, y cualquier otro caracter para salir" "\n";
			cin >> flag;
	} while (flag == 1);

	system("pause");
	return 0;
}