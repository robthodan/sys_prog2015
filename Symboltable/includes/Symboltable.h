/*
 * Symboltable.h
 *
 *  Created on: Sep 26, 2012
 *      Author: knad0001
 */

#ifndef SYMBOLTABLE_H_
#include "../../Utility/includes/Information.h"
#include "../../Utility/includes/Token.h"
#include "../../Utility/includes/SymTabEntry.h"

#define SYMBOLTABLE_H_

class Symboltable {
public:
	Symboltable();
	virtual ~Symboltable();

	void initSymbols();
	void addEntry(const char * lexem, TokenType type, int value);
	Information * getEntry(char * lexem);

	int hash(const char * lexem);
private:
	SymTabEntry * entries[1000];
};

#endif /* SYMBOLTABLE_H_ */
