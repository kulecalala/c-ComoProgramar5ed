// Funcao: Utilizando apenas as técnicas aprendidas neste capítulo,
//         escreva um programa que calcula os quadrados e cubos dos inteiros de 0 a 10
//         e usa tabulações para imprimir as seguintes tabelas de valores, elegantemente formatadas.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   cout << "\nInteiro \tQuadrado \tCubo";
   cout << "\n0       \t" << (0 * 0) << " \t\t" << (0 * 0 * 0);
   cout << "\n1       \t" << (1 * 1) << " \t\t" << (1 * 1 * 1);
   cout << "\n2       \t" << (2 * 2) << " \t\t" << (2 * 2 * 2);
   cout << "\n3       \t" << (3 * 3) << " \t\t" << (3 * 3 * 3);
   cout << "\n4       \t" << (4 * 4) << " \t\t" << (4 * 4 * 4);
   cout << "\n5       \t" << (5 * 5) << " \t\t" << (5 * 5 * 5);
   cout << "\n6       \t" << (6 * 6) << " \t\t" << (6 * 6 * 6);
   cout << "\n7       \t" << (7 * 7) << " \t\t" << (7 * 7 * 7);
   cout << "\n8       \t" << (8 * 8) << " \t\t" << (8 * 8 * 8);
   cout << "\n9       \t" << (9 * 9) << " \t\t" << (9 * 9 * 9);
   cout << "\n10      \t" << (10 * 10) << " \t\t" << (10 * 10 * 10);

   cout << endl;

   return 0;
}
