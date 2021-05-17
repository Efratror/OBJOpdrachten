/**
*********************************************************************************
 *  @file		Wedstrijd.h
 *  @brief		Bevat de definitie & implementatie code voor de Wedstrijd klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST71
 ********************************************************************************/

#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

#include "Datum.h"
#include "Team.h"
#include "Teller.h"

using namespace std;

/**
* @class	Wedstrijd
* @brief	Wedstrijd klasse
* @ingroup	HFST71
*/
class Wedstrijd
{
private:
	Datum speelDatum;	//!< Datum waarop de wedstrijd wordt gespeeld
	Team t1;			//!< Team 1
	Team t2;			//!< Team 2
	Teller num1;		//!< Punten van team 1
	Teller num2;		//!< Punten van team 2

public:
	/** @brief	Constructor van de klasse	
	*	@param	speelDatum: Datum waarop de wedstrijd wordt gespeedl
	*	@param	team1: Team 1
	*	@param	team2: Team 2*/
	Wedstrijd(const Datum& speelDatum, const Team& team1, const Team& team2)
		:speelDatum(speelDatum), t1(team1), t2(team2) {
	}

	/** @brief	Team 1 scoort een punt
	*	@see Teller::verhoog() */
	void team1() {
		num1.verhoog();
	}

	/** @brief	Team 2 scoort een punt
	*	@see Teller::verhoog() */
	void team2() {
		num2.verhoog();
	}

	/**	@brief		Alle gegevens van de wedstrijd weer gegeven als string
	*	@details	De gegevens zijn de speeldatum en (eind)stand van de wedstrijd
	*	@return		string alle gegevens van de wedstrijd */
	string toString() const {
		ostringstream os;
		os << "De wedstrijd op " << speelDatum.toString() << endl;
		os << "Heeft de volgende stand: " << endl;
		os << num1.getTeller();
		os << "-";
		os << to_string(num2.getTeller());
		return os.str();
	}

	
};

