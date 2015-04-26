/*
 * Klasse, welche die Einträge in der Symboltabelle darstellen soll
 *
 * Implementierung in SymTabEntry.cpp
 *
 * Eintrag wird gefunden durch HashWert über Lexem
 *
 * beinhaltet:
 * - pointer auf InformationsContainer
 * -
 */

class SymTabEntry {
public:
	SymTabEntry(char * lexem);
	~SymTabEntry();
private:
	Information* linkToInformation;
	char * lexem;
	SymTabEntry * next;
};
