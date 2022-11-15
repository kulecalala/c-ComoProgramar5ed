// Exerc5-14: main.cpp
/* Problema: Uma empresa de pedidos pelo correio vende cinco produtos diferentes cujos preços de varejo são:
             produto 1 — $ 2,98, produto 2 — $ 4,50, produto 3 — $ 9,98, produto 4 — $ 4,49 e produto 5 — $ 6,87.
             Escreva um programa que lê uma série de pares de números como mostrado a seguir:

               a) número de produto
               b) quantidade vendida

            Seu programa deve utilizar uma instrução switch para determinar o preço de varejo de cada produto.
            Seu programa deve calcular e exibir o valor de varejo total de todos os produtos vendidos. Utilize
            um loop controlado por sentinela para determinar quando o programa deve parar o loop e exibir os
            resultados finais.*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw;
using std::setprecision;

int main()
{
   int qtdeProd1;
   int qtdeProd2;
   int qtdeProd3;
   int qtdeProd4;
   int qtdeProd5;

   double custoProd1 = 2.98;
   double custoProd2 = 4.50;
   double custoProd3 = 9.98;
   double custoProd4 = 4.49;
   double custoProd5 = 6.87;

   double totalProd1;
   double totalProd2;
   double totalProd3;
   double totalProd4;
   double totalProd5;

   totalProd1 = totalProd2 = totalProd3 = totalProd4 = totalProd5 = 0;

   int qtdeTotal = 0;
   double totalGeral;

   int option;

   do {
      system("clear");

      cout << "\n\n\t==============> Vendas Por Correio <==============\n";

      cout << fixed << setprecision(2);

      cout << "\n\tCodigo" << setw(16) << "Produto" << setw(16) << "Custo"
           << "\n\t" << setw(6) << "1" << setw(16) << "Iphone" << setw(16) << custoProd1 << "$"
           << "\n\t" << setw(6) << "2" << setw(16) << "BT" << setw(16) << custoProd2  << "$"
           << "\n\t" << setw(6) << "3" << setw(16) << "PC" << setw(16) << custoProd3 << "$"
           << "\n\t" << setw(6) << "4" << setw(16) << "Book" << setw(16) << custoProd4 << "$"
           << "\n\t" << setw(6) << "5" << setw(16) << "Tablet" << setw(16) << custoProd5  << "$"
           << "\n\n\t" << setw(14) << "0 => Processar total"
           << "\n\n\t====> Insira Um Codigo: ";
      cin >> option;

      system("clear");

      switch (option) {
         case 0:
            option = EOF;
            break;

         case 1:
            cout << "\n\n\tDeseja quantos Iphone's: ";
            cin >> qtdeProd1;

            qtdeTotal += qtdeProd1;
            totalProd1 += custoProd1 * qtdeProd1;

            break;

         case 2:

            cout << "\n\n\tDeseja quantas BT's: ";
            cin >> qtdeProd2;

            qtdeTotal += qtdeProd2;
            totalProd2 += custoProd2 * qtdeProd2;

            break;

         case 3:

            cout << "\n\n\tDeseja quantos PC's: ";
            cin >> qtdeProd3;

            qtdeTotal += qtdeProd3;
            totalProd3 += custoProd3 * qtdeProd3;

            break;

         case 4:

            cout << "\n\n\tDeseja quantos book's: ";
            cin >> qtdeProd4;

            qtdeTotal += qtdeProd4;
            totalProd4 += custoProd4 * qtdeProd4;

            break;

         case 5:

            cout << "\n\n\tDeseja quantos Tablet's: ";
            cin >> qtdeProd5;

            qtdeTotal += qtdeProd5;
            totalProd5 += custoProd5 * qtdeProd5;

            break;

         default:

            system("clear");
            cout << "\n\tOperacao invalida, selecione outra!" << endl;
            system("pause");

      }


   } while (option != EOF);

   totalGeral = totalProd1 + totalProd2 + totalProd3 + totalProd4 + totalProd5;

   cout << "\n\n\t===========> Total A Pagar <=============\n"
        << "\n\tTotal de Produtos: " << qtdeTotal
        << "\n\tTotal a Pagar: $" << totalGeral
        << endl;

   return 0;
}
