#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
double D = 3.05; 
double E = 5.0 * 3.1415 * sqrt(5);
double PI = 3.1415;
double e = 2.7182;
float x;
char wybor;
double wynik;

int main()
{
    cout << "Podaj wartosc zmiennej x:\n";
    cin >> x;
    cout << "Wybierz funcje\n f(x) - f \n g(x) - g\n h(x) - h\n ";
    cin >> wybor;
    switch(wybor) {
    case 'f': 
        if (x == -1.0) {
            cout << "Nie mozna dzielic przez zero!";
        }
        else {
            wynik = (D * cos(2.0 * x - 3.0)) / (E * sin(2.0 * x + 2.0));
            cout << "Funkcja f(x) wynosi " << wynik;
        }
            break;
    case 'g':
        if (x == -1.0 || x == 3.5) {
            cout << "Nie mozna dzielic przez 0";
        }
        else {
            wynik = pow(2.5 - abs((2.5 * x)  - 2.0), 1.0 / 6);
            cout << "Funkcji g(x) wynosi " << wynik;
        }
        break;
    case 'h':
        wynik = pow(2 * (E / (5 + D)) * x + log(x), (e / (x - 1)));
        cout << "Funkcji h(x) wynosi " << wynik;
        
        break;
    default:
        wynik = (D * cos(2 * x - 3)) / (E * sin(2 * x + 2));
        cout << "Funkcja f(x) wynosi " << wynik;
        break;
    }
 

    
}
