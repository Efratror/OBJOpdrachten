/** \mainpage In te leveren opgaven uit het boek "Aan de slag met C++"
 *  @section H Introductie:
 *  Voor het vak "object georienteerd programmeren" diende opgaven gemaakt en ingeleverd te worden. Hieronder vind u de documentatie over deze opgaven. \n
 *  Uit de volgende hoofstukken moesten opgaven gemaakt worden:
 *  - @ref H6
 *  - @ref H7
 *  - @ref H9
 * 
 *  Max Avontuur \n
 *  21-4-2021
 * 
    @subsection H6 Hoofstuk 6:
    @ref HFST6 bestaat uit een viertal opgaven, deze zijn gebundeld in @ref HFST61 en @ref HFST62. 
    Het hoofdstuk gaat over het maken van klasse. Het toont hoe klasse zijn opgebouwd en wat er mee gedaan kan worden.

    @subsubsection H62 Opdracht 2
    Opdracht 2 luidt als volgt: "Schrijf een klasse Tijdstip met daarin drie private leden van het type int voor de uren, minuten en seconden, 
    een constructor met defaultargumenten, een public lidfunctie setTijdstip() waarmee je een bepaald tijdstip kunt instellen en een public lidfunctie toString()
    die de tijd aflevert in het fromaat uu::mm::ss, dus bijvoorbeeld 15:05:03 of 14:00:59. Test de klasse in een programma."

    @subsubsection H63 Opdracht 3
    Opdracht 3 vroeg het volgende: "Voeg aan de klasse Tijdstip uit de vorige opgave drie functies toe: volgendUur(), 
    waar mee je het tijdstip een uur verder zet(ga uit van een 24-uurs klok). Geef de klasse ook een volgendeMinuut() 
    en volgendeSeconde(). Schrijf een programma waarin je een en ander test."

    @subsubsection H65 Opdracht 5
    Maak een klasse teller op grond van het volgende klassendiagram.
    @image html TellerClass.png
    Met een instantie van deze klasse kun je bijvoorbeeld de score van een ploeg in een sportwedstrijd bijhouden. 
    De klasse heeft een attribuut dat de waarde van de teller onthoudt. De functies verhoog en verlaag verhogen respectievelijk 
    verlagen de waarde met 1. Schrijf een implementatie van de klasse teller. Geef de klasse een constructor die een 
    object maakt met de waarde 0, een getter en een setter. Schrijf een programma waarin je een Teller-object maakt en test.

    @subsubsection H66 Opdracht 6
    Defineer een klasse MV met twee private Teller-objecten: een teller voor mannen en een voor vrouwen. Maak in de hoofdfunctie main 
    een loop die pas stop als je op de S toets drukt. Geef de klasse een lidfunctie man() die de betreffende teller verhoogt als je in de loop 
    in het hoofdprogramma op de M toets drukt, en een lidfunctie vrouw() die de betreffende teller verhoogt als je de toets V indrukt. Geef de klasse 
    ook een lidfunctie toString() die het resutlaat van de telling als string aflevert en een lidfunctie zetOpNul() om beide tellers op 0 te zetten.

    @subsection H7 Hoofstuk 7:
    @ref HFST7 bestaat uit een tweetal opgaves, @ref HFST71 en @ref HFST72. 
    Het hoofdstuk gaat over objectgeorienteerd ontwerpen. Het toont hoe men zelf een gedegen ontwerp kan maken voor een klasse.
    
    @subsubsection H71 Opdracht 1
    Voorzie de klasse Team van een attribuut naam waarin je de naam van het team kan opslaan. Wijzig de constructor overeenkomstig. 
    Zorg dat toString() ook de naam van het team aflevert. Test de klasse. Voeg een klasse Wedstrijd toe. De klasse bevat de volgende attributen: 
    twee teams(de teams die tegen elkaar spelen), een datum (waarop de wedstrijd gespeeld wordt) en de uitslag. Bedenk zelf op welke manier je de uitslag wilt opslaan.
    De associaties tussen de verschillende klassen zijn in beeld gebracht. Schrijf de broncode van de klasse wedstrijd en schrijf een programma om het geheel te testen.

    @subsubsection H76 Opdracht 6
    Het volgende is een beschrijving voor een eenvoudige cijferadministratie. De administratie bestaat uit een lijst van studenten. 
    Van elke student zijn naam en geboortedatum bekend en zijn tentamenresulataten. Een tentamenresultaat bestaat uit de naam van het vak,
    het cijfer en de datum waarop het cijfer is behaald. Het is mogelijk van een student een overzicht van de resultaten op 
    het scherm te zetten. Het is ook mogelijk een overzicht van alle studenten op het scherm te zetten. Schrijf de broncode van de klassen 
    test ze een voor een. Test vervolgens het hele systeem.

    @subsection H9 Hoofstuk 9:
    @ref HFST9 bestaat uit een tweetal opgaves, @ref HFST91 en @ref HFST92.
    Het hoofdstuk gaat over overerving. Het toont hoe men uit bestaande klasses nieuwe klasses kan maken.

    @subsubsection H91 Opdracht 1
    Gegeven is de declaratie van een klasse Voertuig:
    @image html voertuig.png
    De defaultconstructor initialiseert aantalWielen met de waarde 4 en de constructor met een argument initialiseert met de waarde van aw.
    Leid uit deze klasse de volgende klasse af:
    @image html fiets.png
    schrijf een implementatie voor alle constructors en functies. Maak bij de constructors van de klasse Fiets zo 
    veel mogelijk gebruik van de constructors van Voertuig. Bij Hiets moet het aantal wielen altijd met de waarde 2 worden 
    geinitialiseerd. Maak in de functie toString van Fiets gebruik van de functie met dezelfde naam van voertuig. 
    Schrijf ten slotte een compleet programma waarin je test of alles goed werkt.

    @subsubsection H96 Opdracht 2
    Een uitgever geeft tijdschriften, boek en blue-rayw uit. Maak ene klasse uitgave waarin de titel en de rpijs van een uitgaven kunnen worden opgeborgen.
    Gebruik als basisklasse voor de volgende drie afgeleide klassen:
    - Tijdschrift, waar in de maan van de uitgave(januari, befruarie ect.) kan worden opgeborgen;
    - Boek, die het aantalblazijden en de naam van de auteur bevat;
    - BlueRay, die het aantal minuten speeltijd kan bevatten.

    Schrijf geschikte constructors en schrijf lidfuncties waarmee je via het toetsenbord alle gegevens kunt invoeren van de verschillende uitgaven.
    Schrijf ook lidfuncties die de gegevens op het scherm zetten.
*/

/** @defgroup boek Opdrachten
    @brief Alle in te leveren opgaven uit het boek
*/

/** @defgroup HFST6 Hoofdstuk 6
    @brief Opdrachten van Hoofdstuk 6
    @details Hoofdstuk 6 gaat over het maken van klasse. Het toont hoe klasse zijn opgebouwd en wat er mee gedaan kan worden.
    @ingroup boek
*/

/** @defgroup HFST61 Opdracht 2 & 3
    @brief Opdrachten 2 & 3
    @details Opdracht 2 luidt als volgt: "Schrijf een klasse Tijdstip met daarin drie private leden van het type int voor de uren, minuten en seconden, 
    een constructor met defaultargumenten, een public lidfunctie setTijdstip() waarmee je een bepaald tijdstip kunt instellen en een public lidfunctie toString()
    die de tijd aflevert in het fromaat uu::mm::ss, dus bijvoorbeeld 15:05:03 of 14:00:59. Test de klasse in een programma."


    Opdracht 3 vroeg het volgende: "Voeg aan de klasse Tijdstip uit de vorige opgave drie functies toe: volgendUur(), 
    waar mee je het tijdstip een uur verder zet(ga uit van een 24-uurs klok). Geef de klasse ook een volgendeMinuut() 
    en volgendeSeconde(). Schrijf een programma waarin je een en ander test."

    @ingroup HFST6
*/

/** @defgroup HFST62 Opdracht 5 & 6
    @brief Opdrachten 5 & 6
    @details  Maak een klasse teller op grond van het volgende klassendiagram.
    @image html TellerClass.png
    Met een instantie van deze klasse kun je bijvoorbeeld de score van een ploeg in een sportwedstrijd bijhouden. 
    De klasse heeft een attribuut dat de waarde van de teller onthoudt. De functies verhoog en verlaag verhogen respectievelijk 
    verlagen de waarde met 1. Schrijf een implementatie van de klasse teller. Geef de klasse een constructor die een 
    object maakt met de waarde 0, een getter en een setter. Schrijf een programma waarin je een Teller-object maakt en test.

    Defineer een klasse MV met twee private Teller-objecten: een teller voor mannen en een voor vrouwen. Maak in de hoofdfunctie main 
    een loop die pas stop als je op de S toets drukt. Geef de klasse een lidfunctie man() die de betreffende teller verhoogt als je in de loop 
    in het hoofdprogramma op de M toets drukt, en een lidfunctie vrouw() die de betreffende teller verhoogt als je de toets V indrukt. Geef de klasse 
    ook een lidfunctie toString() die het resutlaat van de telling als string aflevert en een lidfunctie zetOpNul() om beide tellers op 0 te zetten.

    @ingroup HFST6
*/

/** @defgroup HFST7 Hoofdstuk 7
    @brief Opdrachten van Hoofdstuk 7
    @details Hoofdstuk 7 gaat over objectgeorienteerd ontwerpen. Het toont hoe men zelf een gedegen ontwerp kan maken voor een klasse.
    @ingroup boek
*/

/** @defgroup HFST71 Opdracht 1
    @brief Opdracht 1
    @details Voorzie de klasse Team van een attribuut naam waarin je de naam van het team kan opslaan. Wijzig de constructor overeenkomstig. 
    Zorg dat toString() ook de naam van het team aflevert. Test de klasse. Voeg een klasse Wedstrijd toe. De klasse bevat de volgende attributen: 
    twee teams(de teams die tegen elkaar spelen), een datum (waarop de wedstrijd gespeeld wordt) en de uitslag. Bedenk zelf op welke manier je de uitslag wilt opslaan.
    De associaties tussen de verschillende klassen zijn in beeld gebracht. Schrijf de broncode van de klasse wedstrijd en schrijf een programma om het geheel te testen.
    @ingroup HFST7
*/

/** @defgroup HFST72 Opdracht 6
    @brief Opdrachten 6
    @details Het volgende is een beschrijving voor een eenvoudige cijferadministratie. De administratie bestaat uit een lijst van studenten. 
    Van elke student zijn naam en geboortedatum bekend en zijn tentamenresulataten. Een tentamenresultaat bestaat uit de naam van het vak,
    het cijfer en de datum waarop het cijfer is behaald. Het is mogelijk van een student een overzicht van de resultaten op 
    het scherm te zetten. Het is ook mogelijk een overzicht van alle studenten op het scherm te zetten. Schrijf de broncode van de klassen 
    test ze een voor een. Test vervolgens het hele systeem.
    @ingroup HFST7
*/

/** @defgroup HFST9 Hoofdstuk 9
    @brief Opdrachten van Hoofdstuk9
    @details Hoofdstuk 9 gaat over overerving. Het toont hoe men uit bestaande klasses nieuwe klasses kan maken.
    @ingroup boek
*/

/** @defgroup HFST91 Opdracht 1
    @brief Opdracht 1
    @details Gegeven is de declaratie van een klasse Voertuig:
    @image html voertuig.png
    De defaultconstructor initialiseert aantalWielen met de waarde 4 en de constructor met een argument initialiseert met de waarde van aw.
    Leid uit deze klasse de volgende klasse af:
    @image html fiets.png
    schrijf een implementatie voor alle constructors en functies. Maak bij de constructors van de klasse Fiets zo 
    veel mogelijk gebruik van de constructors van Voertuig. Bij Hiets moet het aantal wielen altijd met de waarde 2 worden 
    geinitialiseerd. Maak in de functie toString van Fiets gebruik van de functie met dezelfde naam van voertuig. 
    Schrijf ten slotte een compleet programma waarin je test of alles goed werkt.
    @ingroup HFST9
*/

/** @defgroup HFST92 Opdracht 2
    @brief Opdrachten 2
    @details  Een uitgever geeft tijdschriften, boek en blue-rayw uit. Maak ene klasse uitgave waarin de titel en de rpijs van een uitgaven kunnen worden opgeborgen.
    Gebruik als basisklasse voor de volgende drie afgeleide klassen:
    - Tijdschrift, waar in de maan van de uitgave(januari, befruarie ect.) kan worden opgeborgen;
    - Boek, die het aantalblazijden en de naam van de auteur bevat;
    - BlueRay, die het aantal minuten speeltijd kan bevatten.

    Schrijf geschikte constructors en schrijf lidfuncties waarmee je via het toetsenbord alle gegevens kunt invoeren van de verschillende uitgaven.
    Schrijf ook lidfuncties die de gegevens op het scherm zetten.
    @ingroup HFST9
*/