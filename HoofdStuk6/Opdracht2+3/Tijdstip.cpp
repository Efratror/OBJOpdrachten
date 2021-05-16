/**
*********************************************************************************
 *  @file		Tijdstip.cpp
 *  @brief		Bevat de implementatie code voor de Tijdstip klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST61
 ********************************************************************************/

#include "Tijdstip.h"

Tijdstip::Tijdstip(){
    this->uur = 0;
    this->minuut = 0;
    this->seconde = 0;
}

void Tijdstip::setTijdStip(int uur, int minuut, int seconde)
{
    if (uur < 0)
        uur = 0;
    else if (uur > 23)
        uur = 23;

    if (minuut < 0)
        minuut = 0;
    else if (minuut > 59)
        minuut = 59;

    if (seconde < 0)
        seconde = 0;
    else if (seconde > 59)
        seconde = 59;

    this->uur = uur;
    this->minuut = minuut;
    this->seconde = seconde;
}

string Tijdstip::toString()
{
    string tijd = "";

    tijd += addLeadingZero(this->uur);
    tijd += ":";
    tijd += addLeadingZero(this->minuut);
    tijd += ":";
    tijd += addLeadingZero(this->seconde);

    return tijd;
}

void Tijdstip::volgendUur()
{
    this->uur++;

   if (this->uur > 23)
       this->uur = 0;
}

void Tijdstip::volgendeMinuut()
{
    this->minuut++;
    if (this->minuut > 59)
        this->minuut = 0;
}

void Tijdstip::volgendeSeconde()
{
    this->seconde++;
    if (this->seconde > 59)
        this->seconde = 0;
}

string Tijdstip::addLeadingZero(int i)
{
    string s = "";

    if (i < 10)
        s += "0";
    s += to_string(i);

    return s;
}
