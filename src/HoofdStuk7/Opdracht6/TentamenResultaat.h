/**
*********************************************************************************
 *  @file		TentamenResultaat.h
 *  @brief		Bevat de definitie & implementatie code voor de TentamenResultaat klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST72
 ********************************************************************************/

#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

#include "Datum.h"

using namespace std;

/**
* @class	TentamenResultaat
* @brief	TentamenResultaat klasse
* @ingroup	HFST72
*/
class TentamenResultaat
{
private:
	string vak;		//!< Naam van het vak
	double cijfer;	//!< Behaalde cijfer
	Datum1 datum;	//!< Datum waarop het resultaat is behaald

public:
	/** @brief		Default constructor van de klasse
	*	@details	Vraag de gebruiker het tentamen resultaat
	*	@see TentamenResultaat::setTentamenResultaat() */
	TentamenResultaat() {
		setTentamenResultaat();
	}

	/** @brief	Constructor van de klasse
	*	@param	vak: Naam van het vakt.
	*	@param	cijfer: Behaalde cijfer.
	*	@param	datum: Datum waarop het resultaat behaald is.*/
	TentamenResultaat(string vak, double cijfer, Datum1 &datum)
		: vak(vak), cijfer(cijfer), datum(datum) {}

	/** @brief		Set het tentamenresulataat
	*	@details	Vraagt de gebruiker naar de naam van het vak, het behaalde cijfer en de datum van behalen voor het tentamen resultaat
	*	@see		Datum1::changeDatum()*/
	void setTentamenResultaat() {
		cout << "Het vak: ";
		cin >> vak;
		cin.get();
		cout << "Het cijfer: ";
		cin >> cijfer;
		cin.get();
		datum.changeDatum("Tentamen");
	}

	/**	@brief		Alle gegevens van het tentamen resultaat weer gegeven als string
	*	@details	De gegevens zijn de naam van het vak, het behaalde cijfer en de datum van behalen voor het tentamen resultaat
	*	@return		string alle gegevens van de tentamen resultaat */
	string toString() const {
		ostringstream os;
		os << vak << endl;
		os << cijfer << endl;
		os << datum.toString() << endl;

		return os.str();
	}

};

