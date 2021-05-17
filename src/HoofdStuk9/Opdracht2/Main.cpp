/**
*********************************************************************************
 *  @file		/HoofdStuk9/Opdracht2/Main.cpp
 *  @brief		Uitwerking hoofstuk 9, opdracht 2
 *  @details    Bevat de implementatie code voor een uitgevers "database" demo
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST92
 *******************************************************************************/

#include <iostream>

#include "Uitgave.h"
#include "Tijdschrift.h"
#include "Boek.h"
#include "BlueRay.h"

 /** @brief Main function
 *   @details Demo functie voor de volgende klasse:
 *   - Uitgave
 *   - Tijdschrift
 *   - Boek
 *   - BlueRay
 *   @details Toont hoe de overerving kan worden gebruikt.
 *
 *   @return int exit-code
 *   @ingroup HFST92*/
int main()
{
    std::cout << "---Demo Overerving---" << endl;
    std::cout << "    Hoofstuk 9" << endl;
    std::cout << "    Opdracht 2" << endl;
    std::cout << "---------------------" << endl << endl;

    std::cout << "Tijdschrijft" << endl;
    Tijdschrift t = Tijdschrift();
    std::cout << endl << t.toString() << endl;

    std::cout << "Boek" << endl;
    Boek b = Boek();
    std::cout << endl << b.toString() << endl;

    std::cout << "BlueRay" << endl;
    BlueRay br = BlueRay();
    std::cout << endl << br.toString() << endl;

    std::cout << "Press any key to continue...";
    std::cin.get();

    return 0;
}
