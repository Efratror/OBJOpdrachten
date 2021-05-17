/**
*********************************************************************************
 *  @file		MV.h
 *  @brief		Bevat de definitie code voor de MV (Puntenteller) klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST62
 ********************************************************************************/
#pragma once
#include "Teller.h"
#include <string>

using namespace std;
/**
* @class	MV
* @brief	Mannen VS Vrouwen (MV) Puntenteller
* @ingroup HFST62
*/
class MV
{
private:
	Teller mannen;	//!< Teller voor de mannen
	Teller vrouwen; //!< Teller voor de vrouwen

public:
	/** @brief	Constructor van de klasse	*/
	MV();

	/** @brief	Verhoog de mannen teller met een
	*	@see Teller::verhoog() */
	void man();

	/** @brief	Verhoog de vrouwen teller met een
	*	@see Teller::verhoog() */
	void vrouw();


	/** @brief	Weergave van beide tellers
	*	@return String Huidige stand */
	string toString();

	/** @brief	Zet beide tellers op nul */
	void zetOpNul();
};

