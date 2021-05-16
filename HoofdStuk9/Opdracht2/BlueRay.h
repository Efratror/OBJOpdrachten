/**
*********************************************************************************
 *  @file		BlueRay.h
 *  @brief		Bevat de definitie code voor de BlueRay klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST92
 ********************************************************************************/

#pragma once
#include "Uitgave.h"

 /**
 * @class	BlueRay
 * @brief	Child klasse blueRay, parent: Uitgave
 * @ingroup HFST92
 */
class BlueRay : public Uitgave
{
private:
    unsigned int minuten;   //!< Aantal speel minuten van de blueRay

public:

    /** @brief		Default constructor van de klasse
     *	@details	Vraagt de gebruiker naar het aantal speelminuten
     *	@see BlueRay::setMinuten() */
    BlueRay() {
        setMinuten();
    }

    /** @brief		Set het aantal speel minuten van de blueRay
     *	@details	Vraagt de gebruiker naar het aantal speelminuten */
    void setMinuten() {
        cout << "Geef het aantal speel minuten: ";
        cin >> minuten;
        cin.get();
    }

    /**	@brief		Alle gegevens van een blueRay weer gegeven als string
    *	@details	De gegevens zijn het aantal speelminuten, de titel en de prijs.
    *   @see        Uitgave
    *	@return		string alle gegevens van een blueRay. */
    string toString() const {
        ostringstream os;

        os << "Dit is een uitgave van type BlueRay met" << endl;
        os << Uitgave::toString();
        os << "Aantal speelminuten: " << minuten << endl;

        return os.str();
    }
};

