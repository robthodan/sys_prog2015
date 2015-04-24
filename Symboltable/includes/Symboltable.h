/*
 * Symboltable.h
 *
 *  Created on: Sep 26, 2012
 *      Author: knad0001
 */

#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_

class Symboltable {
public:
	Symboltable();
	virtual ~Symboltable();

	void initSymbols();
	void addEntry(char * lexem, TokenType type, int value);
	Information * getEntry(char * lexem);
private:
	SymTabEntry * entries[1000];
};

#endif /* SYMBOLTABLE_H_ */
