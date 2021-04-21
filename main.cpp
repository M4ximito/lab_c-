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
    Prostokat prostokat("Prostak", 2, 4);

    Prostokat& referencjaDoProstokat1 = prostokat;

    cout << referencjaDoProstokat1.doTekstu() << endl << endl;

    Prostokat& referencjaDoProstokat2 = kwadrat;

    cout << referencjaDoProstokat2.doTekstu() << endl << endl;




    system("Pause");

    return 0;
}



}
