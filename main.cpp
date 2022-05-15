// Zadanie nr 1.2
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <cstdlib>

using namespace std;
int main ()
{
cout <<"Zadanie nr 1.2. "<<endl<<endl;
{                               //----------------> ZADANIE 1.1
int x,y,z,m;
float suma, srednia, sh;
float a1, a2, a3;
    cout << "ZADANIE 1.1" <<endl;
    cout << "Program okresli najwieksza liczbe z trzech podanych, a takze policzy dla nich srednia arytmetyczna i harmoniczna."<<endl;
	cout << "Podaj 3 liczby rozdzielone spacja: "<<endl;
	cin>>x>>y>>z;
        m=x;
            if (y>m) m=y;
            if (z>m) m=z;
	cout << "Najwieksza liczba to: " <<m<<endl;
        suma = (x+y+z);
        srednia = suma/3;
    cout << "Srednia arytmetyczna trzech liczb wynosi  : " <<srednia<<endl;
    a1 = 1./x;
    a2 = 1./y;
    a3 = 1./z;
    sh = 3/(a1+a2+a3);
    cout << "Srednia harmoniczna trzech liczb wynosi   : " <<sh<<endl<<endl<<endl;
}
{                               //----------------> ZADANIE 1.2
int x;
float wynik;
    cout << "ZADANIE 1.2" <<endl;
    cout << "Program liczacy funkcje y(x) w zaleznosci od danego przedzialu: " << endl;
    cout << "Przedzia 1: <10,0>" << endl;
    cout << "Przedzia 2: (0,PI>" << endl;
    cout << "Przedzia 3: pozostale liczby" << endl;
    cout << "Wprowadz wartosc x" << endl;
        cin >> x;
        if (x >=-10 && x <0)
        {
         wynik =  (2/3.)*x*x*x+((1/2.)*x);
         cout << "Dla x z przedzialu <-10,0> " << endl;
        }
        else if (x >= 0 && x < M_PI)
        {
        wynik = (1./(sin(x)+2));
         cout << "Dla x z przedzialu (0,pi>" << endl;
        }
        else
        {
            wynik = ((-x/2)+1);
            cout << "Dla x z pozostatych przedzialow " << endl;
        }
        cout << "Wynik funkcji y(x) to " <<wynik<<endl<<endl<<endl;
}
{                               //----------------> ZADANIE 1.3
int R, h, a, b, c, wybor;
float wynik;
    cout << "ZADANIE 1.3" <<endl;
    cout << " Program liczacy objetosc i pole poszczegolnych figur"<<endl;
    cout << "Wybor opcji: " << endl<<endl;
    cout << "1. Objetosc kuli" << endl;
    cout << "2. Objetosc stozka" << endl;
    cout << "3. Pole prostopadloscianu" << endl;
    cout << "Wybierz co chcesz robic" << endl;
    cin >> wybor;
    switch(wybor)
    {
  case 1:
    {
        cout << "Podaj promien kuli R: " << endl;
        cin >> R;
        if (R > 0) {
            wynik = (4/3.)*M_PI*R*R*R;
        cout << "Objetosc kuli wynosi "<<wynik<< endl<<endl<<endl; }
        else
        {
            cout <<"Wartosc nie moze byc ujemna!"<<endl;
        }
    }
    break;
    case 2:
        {
        cout <<"Podaj promien podstawy stozka R oraz wysokosc stozka h, oddzielone spacja: "<<endl;
        cin >>R>>h;
        if (R > 0 && h > 0) {
            wynik = (1/3.)*M_PI*R*R*h;
        cout << "Objetosc stozka wynosi "<<wynik<< endl<<endl; }
        else
        {
        cout <<"Wartosc nie moze byc ujemna!"<<endl;
        }
        }
        break;
        case 3:
        {
        cout << "Podaj dlugosci bokow a, b i c, oddzielone spacja: ";
        cin>>a>>b>>c;
        if (a > 0 && b > 0 && c > 0) {
            wynik = (2*a*b)+(2*a*c)+(2*b*c);
        cout << "Pole prostopadloscianu wynosi "<<wynik<< endl<<endl<<endl; }
        else
        {
        cout <<"Wartosc boku nie moze byc ujemna!"<<endl;
        }
        }
        break;
        default: cout<<"Nie ma takiej opcji!"<< endl<<endl;
        }
}
{                               //----------------> ZADANIE 1.4
float a, b, alfa;
double S, rad;
        {
        cout << "ZADANIE 1.4" <<endl;
        cout << "Program obliczajacy pole trojkata. "<<endl;
        cout << "Podaj dwa boki a, b i kat miedzy bokami a i b, rozdzielone spacja: ";
        cin>>a>>b>>alfa;
        if (a > 0 && b > 0 && alfa > 0) {
        rad = alfa * (M_PI/180);
        S = (1/2.)*a*b*sin(rad);
        cout << "Pole trojkata wynosi: "<<S<<endl<<endl<<endl; }
        else
        {
        cout <<"Wartosc boku nie moze byc ujemna!"<<endl;
        }
        }
}
{                               //----------------> ZADANIE 1.5
float waga, km, stawka, oplata;
    cout << "ZADANIE 1.5" <<endl;
    cout << "Cennik firmy kurierskiej!" <<endl;
    cout << "Prosze podac wage paczki wyrazona w kg: " << endl;
    cout << "Dopuszczalna waga paczki musi zawierac sie w przedziale od 0 do 20 kg " << endl;
    cin>> waga;
    if (waga < 0 || waga > 20)
        {
        cout << "================== Zla wartosc wagi paczki ==================" << endl;
        }
        else
        {
        cout << "Prosze podac kilometry: "<< endl;
        cin>> km;
        if (km < 0 )
        {
        cout << "================== Odleglosc nie moze byc ujemna ==================" << endl;
        }
        else
        {
        stawka = km/100;
        cout <<"Stawki kilometrowe do zaplaty: " << ceil(stawka) <<endl;
        if (waga > 0 && waga <= 2)
        {
        cout<<"Dla paczki do 2 kg, cena za kazde 100 km wynosi 2,10 PLN"<<endl;
        oplata = 2.1*(ceil(stawka));
        cout<<"Kosz dostarczenia paczki wyniesie: "<<oplata<< " PLN"<<endl<<endl<<endl;
        }
        else if (waga > 2 && waga <= 6)
        {
        cout<<"Dla paczki od 2 do 6 kg, cena za kazde 100 km wynosi 3,20 PLN"<<endl;
        oplata = 3.2*(ceil(stawka));
        cout<<"Kosz dostarczenia paczki wyniesie: "<<oplata<< " PLN"<<endl;
        }
        else if (waga > 6 && waga <= 10)
        {
        cout<<"Dla paczki od 6 do 10 kg, cena za kazde 100 km wynosi 4,70 PLN"<<endl;
        oplata = 4.7*(ceil(stawka));
        cout<<"Kosz dostarczenia paczki wyniesie: "<<oplata<< " PLN"<<endl;
        }
        else if (waga > 10 && waga <= 20)
        {
        cout<<"Dla paczki od 10 do 20 kg, cena za kazde 100 km wynosi 5,80 PLN"<<endl;
        oplata = 5.8*(ceil(stawka));
        cout<<"Kosz dostarczenia paczki wyniesie: "<<oplata<< " PLN"<<endl;
        }
        else
        {
        cout << "================== Zla wartosc wagi paczki ==================" << endl;
        }}}}}
