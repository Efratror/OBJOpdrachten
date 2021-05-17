/**
*********************************************************************************
 *  @file		Uitgave.h
 *  @brief		Bevat de definitie code voor de Uitgave klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST92
 ********************************************************************************/

#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

/**
* @class	Uitgave
* @brief	Parent klasse voor een Uitgave
* @ingroup HFST92
*/
class Uitgave
{
protected:
	string titel;	//!< Titel van de uitgave
	double prijs;	//!< Prijs van de uitgave

public:

	/** @brief		Default constructor van de klasse
	 *	@details	Vraagt de gebruiker naar de titel en de prijs van de uitgave
	 *	@see		Uitgave::setTitle() 
	 *	@see		Uitgave::setPrijs()*/
	Uitgave() {
		setTitle();
		setPrijs();
	}



	/** @brief		Set de titel van de uitgave
	 *	@details	Vraagt de gebruiker naar de titel van de uitgave */
	void setTitle() {
		cout << "De title van de uitgave is: ";
		cin >> titel;
		cin.get();
	}


	/** @brief		Set de prijs van de uitgave
	 *	@details	Vraagt de gebruiker naar de prijs van de uitgave*/
	void setPrijs() {
		cout << "De prijs van de uitgave is: ";
		cin >> prijs;
		cin.get();
	}

	/**	@brief		Alle gegevens van een uitgave weer gegeven als string
	*	@details	De gegevens zijn de titel en de prijs.
	*	@return		string alle gegevens van een uitgave. */
	string toString() const {
		ostringstream os;
		
		os << "Titel: " << titel << endl;
		os << setprecision(2) << showpoint  << fixed << "Prijs: " << prijs << endl;

		return os.str();
	}
};

