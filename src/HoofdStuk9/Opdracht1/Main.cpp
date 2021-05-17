/**
*********************************************************************************
 *  @file		Main.cpp
 *  @brief		Uitwerking hoofstuk 9, opdracht 1
 *  @details    Bevat de implementatie code voor een voertuig en fiets klasse demo
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST91
 ********************************************************************************/

#include <iostream>
#include "Voertuig.h"
#include "Fiets.h"

 /** @brief Main function
 *   @details Demo functie voor de volgende klasse:
 *   - Voertuig
 *   - Fiets
 *   Toont hoe de overerving kan worden gebruikt.
 * 
 *   @return int exit-code
 *   @ingroup HFST91*/
int main()
{
    std::cout << "---Demo Overerving---" << endl;
    std::cout << "    Hoofstuk 9" << endl;
    std::cout << "    Opdracht 1" << endl;
    std::cout << "---------------------" << endl << endl;

    std::cout << "Voertuig:" << endl;
    Voertuig v = Voertuig(5);
    std::cout << v.toString() << endl << endl;

    std::cout << "Fiets:" << endl;
    Fiets f = Fiets(111);
    std::cout << f.toString() << endl << endl;

    std::cout << "Press any key to continue...";
    std::cin.get();
    
    return 0;
}


