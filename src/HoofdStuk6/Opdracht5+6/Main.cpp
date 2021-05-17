/**
*********************************************************************************
 *  @file		./HoofdStuk6/Opdracht5+6/Main.cpp
 *  @brief		Uitwerking hoofstuk 6, opdracht 5 en 6
 *  @details    Bevat de implementatie code voor een Teller en MV (PuntenTeller) classe demo
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST62
 ********************************************************************************/

#include <iostream>
#include <string>

#include "Teller.h"
#include "MV.h"

using namespace std;

/** @brief Main function
*   @details Demo functie voor de volgende functies uit de Teller klasse
*   - Teller::setTeller()
*   - Teller::verhoog()
*   - Teller::verlaag()
*   
*   Daarnaast toont het een demo van volgende functies uit MV klasse.
*   - MV::man();
*   - MV::vrouw();
*   - MV::toString();
*
*   @return int exit-code
*   @ingroup HFST62*/
int main()
{
    //Demo van de teller klasse
    cout << "---Demo teller---" << endl;
    Teller tel;
    cout << "Init teller" << endl;
    cout << to_string(tel.getTeller()) << endl;

    cout << "Set teller" << endl;
    tel.setTeller(10);
    cout << to_string(tel.getTeller()) << endl;

    cout << "Verhoog teller" << endl;
    tel.verhoog();
    cout << to_string(tel.getTeller()) << endl;

    cout << "Verlaag teller" << endl;
    tel.verlaag();
    cout << to_string(tel.getTeller()) << endl << endl;

    //Demo van de man vs vrouw puntenteller
    MV mvPunten;
    char input;
    cout << "---Demo man vs vrouw puntenteller---" << endl;
    cout << "Toets M een mannenlijk punt" << endl;
    cout << "Toets V een vrouwenlijk punt" << endl;
    cout << "Toets S om te stoppen" << endl << endl;
    do
    {
        cout << "De stand: " << mvPunten.toString() << endl;
        cin >> input;
        cin.get();
        cin.clear();
        if (input == 'M')
            mvPunten.man();
        if (input == 'V')
            mvPunten.vrouw();
        

    } while (input != 'S');

    cout << endl <<"De eindstand is: " << mvPunten.toString() << endl << endl;

    std::cout << "Press any key to continue...";
    std::cin.get();
}
