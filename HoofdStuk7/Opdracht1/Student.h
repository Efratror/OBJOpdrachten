/**
*********************************************************************************
 *  @file		Student.h
 *  @brief		Bevat de definitie & implementatie code voor de Student klasse
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

#include "Datum.h"

using namespace std;

/**
* @class	Student
* @brief	Student klasse
* @ingroup	HFST71
*/
class Student
{
private:
	string naam;			//!< Naam van de student
	string opleiding;		//!< Opleiding die de student volgt
	string geslacht;		//!< Geslacht van de student
	int nummer;				//!< Identificatie nummer van de student
	const Datum* gebdat;	//!< Geboorte datum van de student

public:
	/** @brief	Constructor van de klasse
	*	@param	naam: Naam van de student
	*	@param	opleiding: Naam van de opleiding die de student volgt
	*	@param	geslacht: Geslacht van de student
	*	@param	nummer: Identificatie nummer van de student
	*	@param	gbd: Geboorte datum*/
	Student(string naam, string opleiding, string geslacht, int nummer, const Datum* gbd)
		:naam(naam), opleiding(opleiding), geslacht(geslacht), nummer(nummer), gebdat(gbd) {
	}

	/**	@brief	Alle gegevens van de student weer gegeven als string
	*	@see Datum::toString()
	*	@return	string alle gegevens van de student*/
	string toString() const {
		ostringstream os;
		os << naam << "(" << gebdat->toString() << ")" << endl;
		os << opleiding << endl;
		os << geslacht << endl;
		os << nummer << endl;
		return os.str();
	}
};

