//EXERCÍCIO 1
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    for (int i = 1; i <= 10; i++) {
//        cout << i << "\n";
//    }
//    return 0;
//}


//EXERCÍCIO 2
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int numero;
//
//    cout << "Informe um número: ";
//    cin >> numero;
//
//    for (int i = 1; i <= 10; i++) {
//        cout << numero << " x " << i << " = " << (numero * i) << "\n";
//    }
//
//    return 0;
//}


//EXERCÍCIO 3

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    for (int i = 0; i <= 50; i += 5) {
//       cout << i << "\n";
//    }
//
//    return 0;
//}



//EXERCÍCIO 4
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int numero;
//
//    
//    for (int i = 0; i < 5; i++) {
//       
//        cout << "Informe um número: ";
//        cin >> numero;
//
//       
//        if (numero > 100) {
//            cout << "NÚMERO ESPECIAL" << "\n";
//        }
//        else {
//            cout << "NÚMERO COMUM" << "\n";
//        }
//    }
//
//    return 0;
//}



//EXERCÍCIO 6

#include <iostream>

using namespace std;

int main() {
    int numero;

    // Loop para ler cinco números
    for (int i = 0; i < 5; i++) {
        // Solicita ao usuário que informe um número
        cout << "Informe um número: ";
        cin >> numero;

        // Verifica se o número é maior que zero
        if (numero > 0) {
            cout << "NÚMERO POSITIVO" << "\n";
        }
        // Verifica se o número é menor que zero
        else if (numero < 0) {
            cout << "NÚMERO NEGATIVO" << "\n";
        }
        // Caso contrário, o número é zero
        else {
            cout << "O NÚMERO É ZERO" << "\n";
        }
    }

    return 0;
}
