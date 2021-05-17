/**
*********************************************************************************
 *  @file		Teller.h
 *  @brief		Bevat de definitie code voor de Teller klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST71
 ********************************************************************************/

#pragma once

 /**
 * @class	Teller
 * @brief	Teller klasse
 * @ingroup HFST71
 */
class Teller
{
private:
	int waarde; //!< Huidige waarde van de teller

public:
	/** @brief	Constructor van de klasse	
	*	@details initiele waarde van de teller is 0 */
	Teller();

	/** @brief	Verhoogt de waarde van de teller met 1*/
	void verhoog();

	/** @brief	Verlaagt de waarde van de teller met 1*/
	void verlaag();

	/** @brief	Zet de waarde van de teller
	*	@param w: waarde van de teller*/
	void setTeller(int w);

	/** @brief	Verkrijgt de waarde van de teller
	*	@return int: huidige waarde van de teller*/
	int getTeller() const;
};

