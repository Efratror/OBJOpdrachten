/**
*********************************************************************************
 *  @file		/HoofdStuk7/Opdracht1/Teller.cpp
 *  @brief		Bevat de implementatie code voor de Teller klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST71
 ********************************************************************************/

#include "Teller.h"

Teller::Teller()
{
	waarde = 0;
}

void Teller::verhoog()
{
	waarde++;
}

void Teller::verlaag()
{
	waarde--;
}

void Teller::setTeller(int w)
{
	waarde = w;
}

int Teller::getTeller() const
{
	return waarde;
}
