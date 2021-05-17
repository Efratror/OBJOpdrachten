/**
********************************************************************************
 *  @file		/HoofdStuk7/Opdracht1/Main.cpp
 *  @brief		Uitwerking hoofstuk 7, opdracht 1
 *  @details	Bevat de implementatie code voor een demo van een Datum, Student, Team, Wedstrijd en Teller klasses
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST71
 ********************************************************************************/

#include <iostream>

#include "Student.h"
#include "Team.h"
#include "Wedstrijd.h"

 /** @brief Main function
 *   @details Demo functie voor de volgende klasse
 *   - Student
 *   - Team
 *   - Wedstrijd
 *
 *   Speelt een wedstrijd, met 2 team en 4 studenten.
 *  
 *   @return int exit-code
 *   @ingroup HFST71*/
int main()
{
    cout << "---Demo wedstrijd---" << endl;

    //Maak student objecten aan
    Student st1 = Student("Piet", "Mechatronica", "m", 1, new Datum(1, 2, 2000));
    Student st2 = Student("Henk", "Duits", "m", 2, new Datum(4, 6, 1880));
    Student st3 = Student("Maartje", "Tekenen", "v", 3, new Datum(6, 12, 1999));
    Student st4 = Student("Loes", "Scheikunde", "v", 4, new Datum(7, 9, 1990));

    //Maak Team 1 aan en voeg studenten toe
    Team t1 = Team("Hadseflats");
    t1.voegTeamLidToe(st1);
    t1.voegTeamLidToe(st3);
    std::cout << t1.toString() << endl;

    //Maak Team 2 aan en voeg studenten toe
    Team t2 = Team("Mij niet gezien");
    t2.voegTeamLidToe(st2);
    t2.voegTeamLidToe(st4);
    std::cout << t2.toString() << endl;

    //Maak een wedstrijd aan en speel deze
    Wedstrijd w1 = Wedstrijd(Datum(7, 2, 2021), t1, t2);
    w1.team1();
    w1.team1();
    std::cout << w1.toString() << endl;

}
