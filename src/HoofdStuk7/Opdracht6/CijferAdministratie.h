/**
*********************************************************************************
 *  @file		CijferAdministratie.h
 *  @brief		Bevat de definitie & implementatie code voor de CijferAdministratie klasse
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
#include "Student.h"

using namespace std;

/**
* @class	CijferAdministratie
* @brief	CijferAdministratie klasse
* @ingroup	HFST72
*/
class CijferAdministratie
{
private:
	vector<Student1> studenten; //!< Alle studenten

public:
	/** @brief	Constructor van de klasse */
	CijferAdministratie() {};

	/** @brief	Voegt een student toe aan de cijfer administratie
	*	@param	student: Student die aan de administratie wordt toegevoegd*/
	void voegStudentToe(const Student1& student) {
		studenten.push_back(student);
	}

	/** @brief		Voegt een tentamen resulataat toe
	*	@details	Vraagt naar de naam van de student om het resultaat toe te voegen.
	*				Kan deze niet gevonden worden dan wordt dit aangegeven.
	*	@param		resulaat: TentamenResultaat*/
	void voegResultaatToe(const TentamenResultaat& resulaat) {
		string naam;
		cout << "De student naam: ";
		cin >> naam;
		cin.get();

		for (unsigned int i = 0; i < studenten.size(); i++)
		{
			if (studenten[i].getNaam() == naam) {
				studenten[i].voegResultaatToe(resulaat);
				return;
			}
		}

		cout << "Kan de student niet vinden" << endl;
	}

	/** @brief		Toont alle resultaten van een student
	*	@details	Vraagt naar de naam van de student om het resultaat af te drukken.
	*				Kan deze niet gevonden worden dan wordt dit aangegeven.*/
	void toonResultaten() {
		string naam;
		cout << "De student naam: ";
		cin >> naam;
		cin.get();

		for (unsigned int i = 0; i < studenten.size(); i++)
		{
			if (studenten[i].getNaam() == naam) {
				cout << studenten[i].toonResultaten();
				return;
			}
		}
		cout << "Kan de student niet vinden" << endl;
	}

	/** @brief		Toont alle studenten in de cijfer administratie
	*	@details	Als er geen studenten aanwezig zijn wordt dit aangegeven */
	void toonStudenten() {
		if (studenten.size() > 0) {
			for (unsigned int i = 0; i < studenten.size(); i++)
			{
				cout << studenten[i].toString();
			}
		}
		else {
			cout << "Nog geen studenten in het systeem" << endl;
		}
	}

	/**	@brief		Alle gegevens van de cijfer administratie weer gegeven als string
	*	@details	De gegevens zijn alle studenten en hun eventuele resultaten
	*	@return		string alle gegevens van de cijfer administratie */
	string toString() const {
		ostringstream os;

		for (unsigned int i = 0; i < studenten.size(); i++)
		{
			os << studenten[i].toString();
			os << studenten[i].toonResultaten();
		}

		if (os.str() == "") {
			os << "Er staan nog geen gegevens in de administratie" << endl;
		}

		return os.str();
	}
};

