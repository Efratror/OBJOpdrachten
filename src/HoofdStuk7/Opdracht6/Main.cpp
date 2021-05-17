/**
*********************************************************************************
 *  @file		/HoofdStuk7/Opdracht6/Main.cpp
 *  @brief		Uitwerking hoofstuk 7, opdracht 6
 *  @details    Bevat de implementatie code voor een Teller en MV (PuntenTeller) classe demo
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST72
 ********************************************************************************/

#pragma once

#include <iostream>

#include "Datum.h"
#include "TentamenResultaat.h"
#include "Student.h"
#include "CijferAdministratie.h"

using namespace std;

/** @brief Main function
*   @details Demo functie voor een cijfer administratie \n
*   Met de volgende opties:
*   - 1: Voeg een student toe
*   - 2: Voeg een resultaat toe
*   - 3: Toon resultaat
*   - 4: Toon alle studenten
*   - 5: Toon alle gegevens
    - x: Sluit het programma af

*   @return int exit-code
*   @ingroup HFST72*/
int main()
{
    CijferAdministratie cijfers;

    cout << "==========================================" << endl;
    cout << endl;
    cout << "     Module voor cijfer administratie     " << endl;
    cout << endl;
    cout << "==========================================" << endl;
    cout << endl;

    char ch = 'x';
    do
    {
        cout << "1: Voeg een student toe" << endl;
        cout << "2: Voeg een resultaat toe" << endl;
        cout << "3: Toon resultaat" << endl;
        cout << "4: Toon alle studenten" << endl;
        cout << "5: Toon alle gegevens" << endl;
        cout << endl << "Toets x om te sluiten" << endl;
        cout << "Uw keuze: ";
        cin >> ch;
        cout << endl;

        if (ch == '1') {
            Student1 st = Student1();
            cijfers.voegStudentToe(st);
        }
        else if (ch == '2') {
            TentamenResultaat tr = TentamenResultaat();
            cijfers.voegResultaatToe(tr);
        }
        else if (ch == '3') {
            cijfers.toonResultaten();
        }
        else if (ch == '4') {
            cijfers.toonStudenten();
        }
        else if (ch == '5') {
            cout << cijfers.toString();
        }
        else if (ch != 'x'){
            cout << "Ongeldige invoer" << endl;
        }

        cout << endl;

    } while (ch != 'x');
    
    std::cin.get();
    std::cout << "Press any key to continue...";
    std::cin.get();
    return 0;
}

