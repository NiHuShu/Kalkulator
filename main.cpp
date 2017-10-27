#include <iostream>

using namespace std;
long long liczba_1;
long long liczba_2;
int menu()
{
    cout << "1.Dodawanie\n";
    cout << "2.Odejmowanie\n";
    cout << "3.Mnozenie\n";
    cout << "4.Dzielenie\n";
    cout << "Wybierz rodzaj dzia³ania(1-4): ";
    char opcja;
    cin >> opcja;
    switch(opcja)
    {
        case '1':
        cout << "Wybrales dodawanie\n";
        cout << "Podaj pierwsza liczbe: ";
        cin >> liczba_1;
        cout << "Podaj druga liczbe: ";
        cin >> liczba_2;
        cout << "Wynik to: " << liczba_1 + liczba_2 << endl;
        break;
        case '2':
        cout << "Wybrales odejmowanie\n";
        cout << "Podaj pierwsza liczbe: ";
        cin >> liczba_1;
        cout << "Podaj druga liczbe: ";
        cin >> liczba_2;
        cout << "Wynik to: " << liczba_1 - liczba_2 << endl;
        break;
        case '3':
        cout << "Wybrales mnozenie\n";
        cout << "Podaj pierwsza liczbe: ";
        cin >> liczba_1;
        cout << "Podaj druga liczbe: ";
        cin >> liczba_2;
        cout << "Wynik to: " << liczba_1 * liczba_2 << endl;
        break;
        case '4':
        cout << "Wybrales dzielenie\n";
        cout << "Podaj pierwsza liczbe: ";
        cin >> liczba_1;
        cout << "Podaj druga liczbe: ";
        cin >> liczba_2;
        cout << "Wynik to: " << liczba_1 / liczba_2 << endl;
        break;
        default:
        cout << "Nie ma takiej opcji\n";
        menu();
        break;
    }
}

int main()
{
    cout << "Kalkulator by NiHuShu :D\n";
    menu();

    return 0;
}
