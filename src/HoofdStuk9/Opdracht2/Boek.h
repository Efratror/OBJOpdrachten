/**
*********************************************************************************
 *  @file		Boek.h
 *  @brief		Bevat de definitie code voor de Boek klasse
 *  @author		Max Avontuur
 *  @version	1.0
 *  @date		24-4-2021
 *  @ingroup    HFST92
 ********************************************************************************/

#pragma once
#include "Uitgave.h"

 /**
 * @class	Boek
 * @brief	Child klasse boek, parent: Uitgave
 * @ingroup HFST92
 */
class Boek : public Uitgave
{
private:
    string auteur;          //!< Naam van de auteur van het boek
    unsigned int paginas;   //!< Aantal pagina's dat het boek bevat

public:

    /** @brief		Default constructor van de klasse
    *	@details	Vraagt de gebruiker naar de naam van de auteur en het aantal pagina's
    *	@see Boek::setAuteur()
    *	@see Boek::setPaginas() */
    Boek() {
        setAuteur();
        setPaginas();
    }

    /** @brief		Set de naam van de auteur van het boek
    *	@details	Vraagt de gebruiker naar de naam van de auteur van het boek */
    void setAuteur() {
        cout << "Geef de naam van de auteur: ";
        cin >> auteur;
        cin.get();
    }

    /** @brief		Set het aantal pagina's van het boek
    *	@details	Vraagt de gebruiker naar het aantal pagina's van het boek */
    void setPaginas() {
        cout << "Geef het aantal pagina's: ";
        cin >> paginas;
        cin.get();
    }

    /**	@brief		Alle gegevens van een boek weer gegeven als string
    *	@details	De gegevens zijn de naam van de auter, het aantal pagina's, de titel en de prijs.
    *   @see        Uitgave
    *	@return		string alle gegevens van een boek. */
    string toString() const {
        ostringstream os;

        os << "Dit is een uitgave van type Boek met" << endl;
        os << Uitgave::toString();
        os << "Auteur: " << auteur << endl;
        os << "Aantal pagina's: " << paginas << endl;

        return os.str();
    }

};

