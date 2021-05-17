/**
*********************************************************************************
 *  @file		/HoofdStuk7/Opdracht6/Student.h
 *  @brief		Bevat de definitie & implementatie code voor de Student1 klasse
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
#include <vector>

#include "Datum.h"
#include "TentamenResultaat.h"

using namespace std;

/**
* @class	Student1
* @brief	Student1 klasse
* @ingroup	HFST72
*/
class Student1
{
private:
	string naam;							//!< Naam van de student
	Datum1 geboorteDatum;					//!< Geboorte datum van de student
	vector<TentamenResultaat> resultaten;	//!< Alle resultaten van de student

public:
	/** @brief		Default constructor van de klasse
	*	@details	Vraag de gebruiker naar de naam en geboorte datum van de student
	*	@see Student1::setNaam()
	*	@see Student1::setGeboorteDatum()*/
	Student1() {
		setNaam();
		setGeboorteDatum();
	}

	/** @brief	Constructor van de klasse	
	*	@param	naam: Naam van de student
	*	@param	geboorteDatum: Geboorte datum van de student*/
	Student1(string naam, Datum1& geboorteDatum)
		: naam(naam), geboorteDatum(geboorteDatum) {};

	/** @brief		Set naam van de student
	*	@details	Vraag de gebruiker naar de naam van de student */
	void setNaam() {
		string n;

		cout << "De student naam: ";
		cin >> n;
		cin.get();
		naam = n;
	}

	/** @brief		Set geboorte datum van de student
	*	@details	Vraag de gebruiker naar de geboorte datum van de student 
	*	@see		Datum1::changeDatum()*/
	void setGeboorteDatum() {
		geboorteDatum.changeDatum("Geboorte");
	}

	/** @brief	Voegt een TentamenResultaat toe voor de student 
	*	@param	resultaat: het behaalde tentamen resultaat*/
	void voegResultaatToe(const TentamenResultaat& resultaat) {
		resultaten.push_back(resultaat);
	}

	/** @brief		Verkrijgt de naam de student
	*	@return		string, naam van de student*/
	string getNaam() {
		return naam;
	}

	/** @brief		Alle TentamenResultaten van een student weer gegeven als string
	*	@details	Als er geen resulaten zijn voor een student dan wordt dit aangegeven.
	*	@return		string alle TentamenResultaten van de student*/
	string toonResultaten() const {
		ostringstream os;
		if (resultaten.size() > 0) {
			for (unsigned int i = 0; i < resultaten.size(); i++)
			{
				os << resultaten[i].toString() << endl;
			}
		}
		else {
			os << "Student heeft nog geen resultaten" << endl;
		}

		return os.str();
	}

	/**	@brief		Alle gegevens van de student weer gegeven als string
	*	@details	De gegevens zijn de naam en de geboorte datum
	*	@return		string alle gegevens van de student */
	string toString() const {
		ostringstream os;

		os << naam << endl;
		os << geboorteDatum.toString() << endl;

		return os.str();
	}
};

