#include "zlab02.h"
#include <iostream>
#include<typeinfo>
#include<limits>
#include <cmath>
#include <random>
using namespace std;

ZLab02::ZLab02()
{

}

void ZLab02::zadanie_2_3() // <---
{
    cout<<"nic sie nie dzieje"<<endl;
}
void ZLab02::zadanie_2_4()
{
    int a = 5, b = 3;
    int c = a / b;
    double d = a / b;
    double e = static_cast<double>(a) / static_cast<double>(b);

    cout << "a=" << a << " b=" << b << endl
         << " a/b=" << c << endl
         << " a/b=" << d << endl
         << " a/b=" << e << endl;
}

void ZLab02::zadanie_2_5()
{
    cout.precision(20);
    double eps = numeric_limits<double>::min();
    cout << "Dzielenie z dokładnością: " << eps << endl;
    double x,y;
    cout << "Podaj dzielną: ";
    cin >> x;
    cout << "Podaj dzielnik: ";
    cin >> y;
    if(fabs(y) > eps)
        cout << x << "/" << y << "=" << x/y << endl;
    else
        cout << "Dzielnik jest za mały" << endl;
}
void ZLab02::menu()
{
    unsigned short wybor;

    do{
        cout << "Które zadanie uruchomić?" << endl
             << "3 -> zadanie 2.3" << endl
             << "4 -> zadanie 2.4" << endl
             << "5 -> zadanie 2.5" << endl
             << "7 -> zadanie 2.7" << endl
             << "8 -> zadanie 2.8" << endl
             << "9 -> zadanie 2.9" << endl;
        cin >> wybor;
    }while(wybor < 3 || wybor > 9 || wybor==6);

    switch (wybor) {
        case 3 : zadanie_2_3(); break;
        case 4 : zadanie_2_4(); break;
        case 5 : zadanie_2_5(); break;
        case 7 : zadanie_2_7(); break;
        case 8 : zadanie_2_8(); break;
        case 9 : zadanie_2_9(); break;
        default: cout << "Nie ma takiego zadania" << endl;
    }
}
void ZLab02::zadanie_2_7()
{
    long liczba1 = 3, liczba2 = -5, liczba3 = 0;

    long *wskaznikDoLong;
    wskaznikDoLong = nullptr;

    cout<< "liczba1=" << liczba1
        << " liczba2=" << liczba2
        << " liczba3=" << liczba3 << endl;

    wskaznikDoLong = &liczba2;

    *wskaznikDoLong = 10;
    cout<< "liczba1=" << liczba1
        << " liczba2=" << liczba2
        << " liczba3=" << liczba3 << endl;

    wskaznikDoLong = &liczba3;

    *wskaznikDoLong = liczba1;

    cout<< "liczba1=" << liczba1
        << " liczba2=" << liczba2
        << " liczba3=" << liczba3 << endl;

    wskaznikDoLong = &liczba1;

    liczba2 = *wskaznikDoLong;

    cout<< "liczba1=" << liczba1
        << " liczba2=" << liczba2
        << " liczba3=" << liczba3 << endl;
}
void ZLab02::zadanie_2_8()
{
    long liczba1 = 3, liczba2 = -5, liczba3 = 0;

    cout<< "liczba1=" << liczba1
        << " liczba2=" << liczba2
        << " liczba3=" << liczba3 << endl;

    long & referencjaDoLong = liczba2;

    referencjaDoLong = 10;

    cout<< "liczba1=" << liczba1
        << " liczba2=" << liczba2
        << " liczba3=" << liczba3 << endl;

    long & referencjaDoLongInna = liczba3;

    referencjaDoLongInna = liczba1;

    cout<< "liczba1=" << liczba1
        << " liczba2=" << liczba2
        << " liczba3=" << liczba3 << endl;

    long & referencjaDoLongKolejna = liczba1;

    liczba2 = referencjaDoLongKolejna;

    cout<< "liczba1=" << liczba1
        << " liczba2=" << liczba2
        << " liczba3=" << liczba3 << endl;
}
void ZLab02::zadanie_2_9()
{
    const short N = 10;
    int tablica[N];

    random_device maszynkaLosujaca;
    uniform_int_distribution<short> dystrybucja(-3,4);

    for(unsigned short i=0; i<N; i++)
        tablica[i] = dystrybucja(maszynkaLosujaca);

    for(int j : tablica) cout << j << " " ;

    cout << endl;
}




