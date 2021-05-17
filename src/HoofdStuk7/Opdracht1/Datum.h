/**
*********************************************************************************
 *  @file		/HoofdStuk7/Opdracht1/Datum.h
 *  @brief		Bevat de definitie & implementatie code voor de Datum klasse
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

using namespace std;

/**
* @class	Datum
* @brief	Datum klasse
* @ingroup	HFST71
*/
class Datum
{
private:
	unsigned int dag;	//!< Dag nummer van de datum
	unsigned int maand;	//!< Maand nummer van de datum
	unsigned int jaar;	//!< Jaar nummer van de datum

public:
	/** @brief	Constructor van de klasse	
	*	@param	dag: nummer van de dag
	*	@param	maand: nummer van de maand
	*	@param	jaar: nummer van het jaar*/
	Datum(unsigned int dag, unsigned int maand, unsigned int jaar)
		:dag(dag), maand(maand), jaar(jaar) {
	}

	/**	@brief	Datum gerepresenteerd als een string in format dd-mm-jjjj
	*	@return	string in format dd-mm-jjjj */
	string toString() const {
		ostringstream os;
		os << setfill('0') << setw(2) << dag << '-';
		os << setw(2) << maand << '-' << setw(4) << jaar;
		return os.str();
	}
};

