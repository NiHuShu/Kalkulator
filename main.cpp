#include <iostream>

using namespace std;

int main()
{
   std::cout << "kalkulator by NiHuShu" << std::endl;
   std::cout << "Wpisz pierwsz� liczb�" << std::endl;
   int first;
   std::cin >> first;
   std::cout << "Wpisz drug� liczb�" << std::endl;
   int second;
   std::cin >> second;
   std::cout << "Wybierz rodzaj dzia�ania" << std::endl;
   std::cout << "1.Dodawanie" << std::endl;
   std::cout << "2.Odejmowanie" << std::endl;
   std::cout << "3.Mno�enie" << std::endl;
   std::cout << "4.Dzielenie" << std::endl;
   int type;
   std::cin >> type;
   int wynik;
   if (type == 1) {
    wynik = first + second;
    std::cout << "Wynik to: " << wynik << std::endl;
   }
    else if (type == 2){
     wynik = first - second;
     std::cout << "Wynik to: " << wynik << std::endl;
}
    else if (type == 3) {
        wynik = first * second;
        std::cout << "Wynik to: " << wynik << std::endl;
    }
    else if (type == 4) {
        wynik = first / second;

        std::cout << "Wynik to: " << wynik << std::endl;
    }
    else {
        std::cout <<"nie ma takiego dzia�ani";
}
   std::cin >> second;
   std::cout << "Co dalej?" << std::endl;
   std::cout << "1.Zresetuj program" << std::endl;
   std::cout << "2.Wykonaj ponownie obliczenie na tych samych liczbach" << std::endl;
   std::cout << "3.Wyjd� z programu" << std::endl;
   int next;
   std::cin >> next;
   if (next == 1){
    std::cout << "Sorry jeszcze tego nie zaprogramowa�em :D" << std::endl;
   }
   else if (next == 2){
       std::cout << "Wybierz rodzaj dzia�ania" << std::endl;
   std::cout << "1.Dodawanie" << std::endl;
   std::cout << "2.Odejmowanie" << std::endl;
   std::cout << "3.Mno�enie" << std::endl;
   std::cout << "4.Dzielenie" << std::endl;
   int type;
   std::cin >> type;
   int wynik;
   if (type == 1) {
    wynik = first + second;
    std::cout << "Wynik to: " << wynik << std::endl;
   }
    else if (type == 2){
     wynik = first - second;
     std::cout << "Wynik to: " << wynik << std::endl;
}
    else if (type == 3) {
        wynik = first * second;
        std::cout << "Wynik to: " << wynik << std::endl;
    }
    else if (type == 4) {
        wynik = first / second;

        std::cout << "Wynik to: " << wynik << std::endl;
    }
    else {
        std::cout <<"nie ma takiego dzia�ani";
}
   }
   else if (next == 3){
    return  0;
   }



}
