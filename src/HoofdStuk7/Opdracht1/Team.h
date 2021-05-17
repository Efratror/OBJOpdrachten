/**
*********************************************************************************
 *  @file		Team.h
 *  @brief		Bevat de definitie & implementatie code voor de Team klasse
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

#include "Student.h"

using namespace std;

/**
* @class	Team
* @brief	Team klasse
* @ingroup	HFST71
*/
class Team
{
private:
	string naam;					//!< Naam van het team
	vector<const Student*> leden;	//!< Alle leden(studenten) van het team

public:
	/** @brief	Constructor van de klasse	
	*	@param	naam: Naam van het team*/
	Team(string naam)
		:naam(naam){
	}

	/**	@brief	Voeg een lid toe aan het team
	*	@param	lid: Student die aan het team wordt toe gevoegd */
	void voegTeamLidToe(Student& lid) {
		leden.push_back(&lid);
	}

	/**	@brief		Alle gegevens van het team weer gegeven als string
	*	@details	Geeft de naam van het team en alle informatie over de leden van het team
	*	@see		Student::toString()
	*	@return		string alle gegevens van het team
	*/
	string toString() const {
		ostringstream os;
		vector<const Student*>::const_iterator it;

		os << "Team " << naam << " bestaat uit: " << endl;
		for (it = leden.begin(); it != leden.end(); it++) {
			os << (*it)->toString() << endl;
		}

		return os.str();
	}
};

