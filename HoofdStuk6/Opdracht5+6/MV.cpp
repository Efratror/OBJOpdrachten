/**
*********************************************************************************
 *  @file		MV.cpp
 *  @brief		Bevat de implementatie code voor de MV (Puntenteller) klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST62
 ********************************************************************************/
#include "MV.h"

MV::MV()
{
}

void MV::man()
{
	mannen.verhoog();
}

void MV::vrouw()
{
	vrouwen.verhoog();
}

string MV::toString()
{
	string s = "";
	s += to_string(mannen.getTeller());
	s += "-";
	s += to_string(vrouwen.getTeller());
	return s;
}

void MV::zetOpNul()
{
	mannen.setTeller(0);
	vrouwen.setTeller(0);
}
