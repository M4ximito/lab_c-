#include <iostream>
#include "zlab06.h"

using namespace std;



int main() {

{

//    cout << "Laboratorium 03" << endl;

//   Prostokat p1;
// Prostokat p2("koc",1.4,2.2);
//   Prostokat p3("pułapka",-2,-3);

//    cout.precision(2);
//    cout << p1.doTekstu() << endl;
//    cout << p2.doTekstu() << endl;
//    cout << p3.doTekstu() << endl;

//    p3.zmienBoki(2,3);
//    cout << endl << p3.doTekstu() << endl;
//
//   cout << endl << "Użycie metod obiektu:" << endl;
//    cout << "Nazwa: " << p2.jakaNazwa() << endl
//         << "Poprawny: " << p2.czyPoprawny() << endl
//         << "Obwód=:" << p2.podajObwod() << endl
//         << "Pole=" << p2.podajPole() << endl;


    /*--------------------------------------
    cout << "Laboratorium 02" << endl;
    ZLab02 lab02;
    // lab02.zadanie_2_3();
    // lab02.zadanie_2_4();
    // lab02.zadanie_2_5();
    // lab02.zadanie_2_7();
    //lab02.zadanie_2_8();
    //lab02.zadanie_2_9();
     lab02.menu();
    --------------------------------------*/
        Kwadrat kwadrat("Kwadrek", 4);
        Kwadrat& refDoKwadrat = kwadrat;

        double r0 = refDoKwadrat.promienKolaWgPola();
        double r1 = refDoKwadrat.promenOkreguWgObwodu();

        cout << "ro=" << r0 << endl << "r1=" << r1 << endl;




        system("Pause");

        return 0;
    }



}
