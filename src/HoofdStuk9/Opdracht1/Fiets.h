/**
*********************************************************************************
 *  @file		Fiets.h
 *  @brief		Bevat de definitie code voor de Fiets klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST91
 ********************************************************************************/

#pragma once
#include "Voertuig.h"

 /**
 * @class	Fiets
 * @brief	Child klasse fiets, parent: Voertuig
 * @ingroup HFST91
 */
class Fiets : public Voertuig
{
private:
    const int aw = 2;   //!< Aantal wielen van een fiets
    int frameNummer;    //!< Frame nummer van een fiets

public:
    /** @brief		Default constructor van de klasse
    *	@details    Initiele waarde(s) zijn als volgt:
    *   - frameNummer = 0
	*	- aantalWielen = aw = 2*/
    Fiets() {
        frameNummer = 0;
        aantalWielen = aw;
    }

    /** @brief		Default constructor van de klasse
    *   @details
    *   - Aantalwielen = aw = 2
    *	@param frameNummer: Identificatie nummer van een fiets */
    Fiets(int frameNummer)
        :frameNummer(frameNummer) {
        aantalWielen = aw;
    };


    /**	@brief		Alle gegevens van een fiets weer gegeven als string
    *	@details	De gegevens zijn het aantal wielen en het frame nummer.
    *	@return		string alle gegevens van een fiets. */
    string toString() const {
        ostringstream os;
        
        os << Voertuig::toString() << endl;
        os << "Frame nummer: " << frameNummer;

        return os.str();
    }
};