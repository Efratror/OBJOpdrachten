/**
*********************************************************************************
 *  @file		Datum.h
 *  @brief		Bevat de definitie & implementatie code voor de Datum klasse
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

using namespace std;

/**
* @class	Datum1
* @brief	Datum1 klasse
* @ingroup	HFST72
*/
class Datum1
{
private:
	int dag;					//!< Dag nummer van de datum
	int maand;					//!< Maand nummer van de datum
	int jaar;					//!< Jaar nummer van de datum
	const int beginDag = 1;		//!< Default dag nummer van de datum
	const int beginMaand = 1;	//!< Default maand nummer van de datum
	const int beginJaar = 1900;	//!< Default jaar nummer van de datum

public:
	/** @brief	Default constructor van de klasse	
	*	@details Initiele(s) waarde zijn als volgt:
		- dag = 1
		- maand = 1
		- jaar = 1990 */
	Datum1() {
		dag = beginDag;
		maand = beginMaand;
		jaar = beginJaar;
	}

	/** @brief	Constructor van de klasse
	*	@param	dag: Dag nummer van de datum
	*	@param	maand: Maand nummer van de datum
		@param	jaar: Jaar nummer van de datum*/
	Datum1(int dag, int maand, int jaar)
		:dag(dag), maand(maand), jaar(jaar) {
	}

	/** @brief		Veranderd de datum
	*	@details	Vraagt de gebruiker naar de nieuwe datum. De parameter wordt 
	*				alleen gebruikt om terug te geven welke soort datum er wordt aangepast.
	*				Heeft alleen een visuele functie.
	*	@param		typeDatum: Soort datum dat veranderd wordt. */
	void changeDatum(string typeDatum) {
		cout << typeDatum << " dag: ";
		cin >> dag;
		cin.get();
		cout << typeDatum << " maand: ";
		cin >> maand;
		cin.get();
		cout << typeDatum << " jaar: ";
		cin >> jaar;
		cin.get();
	}

	/**	@brief	Datum gerepresenteerd als een string in format dd-mm-jjjj
	*	@return	string in format dd-mm-jjjj */
	string toString() const {
		ostringstream os;
		os << setfill('0') << setw(2) << dag << '-'
			<< setw(2) << maand << '-' << setw(4) << jaar;
		return os.str();
	}
};
