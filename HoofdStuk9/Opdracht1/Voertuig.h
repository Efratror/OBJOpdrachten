/**
*********************************************************************************
 *  @file		Voertuig.h
 *  @brief		Bevat de definitie code voor de Voertuig klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST91
 ********************************************************************************/

#pragma once
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

/**
* @class	Voertuig
* @brief	Parent klasse voor een voertuig
* @ingroup HFST91
*/
class Voertuig
{
protected:
	int aantalWielen; //!< Aantal wielen dat een voertuig heeft

public:

	/** @brief	Default constructor van de klasse	
	*	@details Initiele waarde(s) zijn als volgt:
	*	- aantalWielen = 4*/
	Voertuig() {
		aantalWielen = 4; 
	}

	/** @brief	Constructor van de klasse
	*	@param	aantalWielen: Aantal wielen dat een voertuig heeft. */
	Voertuig(int aantalWielen)
		:aantalWielen(aantalWielen) {};

	/**	@brief		Alle gegevens van een voertuig weer gegeven als string
	*	@details	De gegevens zijn het aantal wielen
	*	@return		string alle gegevens van een voertuig. */
	string toString() const {
		ostringstream os;

		os << "Aantal wielen: " << aantalWielen;
		return os.str();
	}
};


