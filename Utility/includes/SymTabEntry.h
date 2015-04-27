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

	SymTabEntry * getNextEntry();
	void setNextEntry(SymTabEntry nextEntry);
private:
	Information* linkToInformation;
	char * lexem;
	SymTabEntry * next;
};
