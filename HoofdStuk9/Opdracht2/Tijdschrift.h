/**
*********************************************************************************
 *  @file		Tijdschrift.h
 *  @brief		Bevat de definitie code voor de Tijdschrift klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST92
 ********************************************************************************/

#pragma once
#include "Uitgave.h"

using namespace std;

/**
* @class	Tijdschrift
* @brief	Child klasse Tijdschrift, parent: Uitgave
* @ingroup HFST92
*/
class Tijdschrift : public Uitgave
{
private:
    string maand;   //!< Naam van de maand waar het tijdschrift is uitgegeven.
    const string maanden[12] = { "Januari", "Februari", "Maart", "April", "Mei", "Juni",
                                "Juli", "Augustus", "September", "Oktober", "November", "December"};    //!< Array die alle namen van de maanden bevat
public:

    /** @brief		Default constructor van de klasse
     *	@details	Vraagt de gebruiker naar de uitgave maand
     *	@see Tijdschrift::setMaand() */
    Tijdschrift() {
        setMaand();
    };

    /** @brief		Set de uitgave maand
    *	@details	Vraagt de gebruiker naar de nummerieke uitgave maand.
    *               Functie is beveiligt tegen ongeldige invoer*/
    void setMaand() {
        int m;
        bool exit = false;
        do
        {
            cout << "Geef de maand van de uitgave als nummer: ";
            cin >> m;
            cin.get();

            if ((m >= 0) && (m < 12)) {
                maand = maanden[m-1];
                exit = true;
            }
            else {
                cout << "Ongeldige invoer" << endl;
            }

        } while (!exit);
    }

    /**	@brief		Alle gegevens van een tijdschrift weer gegeven als string
    *	@details	De gegevens zijn de uitgave maand(in characters), de titel en de prijs.
    *   @see        Uitgave
    *	@return		string alle gegevens van een tijdschrift. */
    string toString() const {
        ostringstream os;

        os << "Dit is een uitgave van type Tijdschrift met" << endl;
        os << Uitgave::toString();
        os << "Maand: " << maand << endl;

        return os.str();
    }
};

