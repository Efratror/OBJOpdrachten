/**
********************************************************************************
 *  @file		Main.cpp
 *  @brief		Uitwerking hoofstuk 6, opdracht 2 en 3
 *  @details	Bevat de implementatie code voor een Tijdstip klasse demo
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST61 
 ********************************************************************************/

#include <iostream>
#include "Tijdstip.h"

using namespace std;

/** @brief Main function
*   @details Demo functie voor de volgende functies uit de tijdsklasse
*   - setTijdstip()
*   - volgendUur()
*   - volgendeMinute()
*   - volgendeSeconde()
*  
*   @return int exit-code 
*   @ingroup HFST61*/
int main()
{
    Tijdstip tijd;

    /*
    * Demo die laat zien hoe er van een maximale tijd
    * naar de volgende tijds eenheid gegaan kan worden
    */
    cout << "Demo roll over time" << endl;
    tijd.setTijdStip(23, 59, 59);
    cout << tijd.toString() << endl;

    tijd.volgendUur();
    cout << tijd.toString() << endl;
    tijd.volgendeMinuut();
    cout << tijd.toString() << endl;
    tijd.volgendeSeconde();
    cout << tijd.toString() << endl;

    /*
    * Demo die laat zien hoe er van eenheden
    * naar tientallen gegaan wordt
    */
    cout << endl << "Demo < 10 to > 10" << endl;
    tijd.setTijdStip(9, 9, 9);
    cout << tijd.toString() << endl;

    tijd.volgendUur();
    tijd.volgendeMinuut();
    tijd.volgendeSeconde();
    cout << tijd.toString() << endl << endl;

    /*
    * Demo die laat zien wat er met ongeldige
    * invoer gedaan wordt
    */
    cout << "Demo te grote en te kleine invoer" << endl;
    tijd.setTijdStip(-1, -1, -1);
    cout << tijd.toString() << endl;
    tijd.setTijdStip(25, 60, 60);
    cout << tijd.toString() << endl << endl;
    system("pause");
}
