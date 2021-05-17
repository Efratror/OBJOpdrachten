/**
*********************************************************************************
 *  @file		Tijdstip.h
 *  @brief		Bevat de definitie code voor de Tijdstip klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST61
 ********************************************************************************/

#pragma once
#include <string>

using namespace std;
/**
* @class	Tijdstip
* @brief	Het verwerken van 24-uurs tijds gegevens
* @ingroup HFST61
*/
class Tijdstip
{
private:
	int uur;		//!< Uren van het tijdstip
	int minuut;		//!< Minuten van het tijdstip
	int seconde;	//!< Seconden van het tijdstip

public:
	/** @brief	Constructor van de klasse	*/
	Tijdstip();

	/**	@brief	Het ingeven van een tijdStip
	*	@param	uur 0 >= uur <= 23
	*	@param	minuut 0 >= minuut <= 59
	*	@param	seconde 0 >= seconde <= 59 */
	void setTijdStip(int uur, int minuut, int seconde);

	/**	@brief	Tijdstip gerepresenteerd als een string in format uu:mm:ss
	*	@return	string in format uu:mm:ss */
	string toString();

	/** @brief		Het verstrijken van een uur in 24-uurs format 
	*	@details	Als uur > 23, dan wordt uur 0
	*/
	void volgendUur();

	/** @brief		Het verstrijken van een minuut	
	*	@details	Als minuut > 59, dan wordt minuut 0
	*/
	void volgendeMinuut();

	/** @brief		Het verstrijken van een seconde	
	*	@details	Als seconde > 59, dan wordt seconde 0
	*/
	void volgendeSeconde();

private:

	/**
	* @brief	voegt een '0'-character toe voor i < 10
	* @param	i
	* @return	string met e.v.t voor gaande 0 */
	string addLeadingZero(int i);

};
