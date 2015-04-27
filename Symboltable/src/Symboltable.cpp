/*
 * Symboltable.cpp
 *
 *  Created on: Sep 26, 2012
 *      Author: knad0001
 */
#include "../../Utility/includes/Token.h"
#include "../includes/Symboltable.h"

Symboltable::Symboltable() {
	for(int i = 0; i <1000; i++) {
		entries[i] = 0;
	}
	initSymbols();
}

Symboltable::~Symboltable() {
	// TODO Auto-generated destructor stub
}

void Symboltable::initSymbols() {
	//TODO
}

Information * Symboltable::getEntry(char * lexem) {
	//TODO
	return 0;
}

void Symboltable::addEntry(char * lexem, TokenType type, int value) {
	//TODO
}

int Symboltable::hash(const char * lexem) {
	unsigned long hash = 5381;
	int c;

	while (c = *lexem++)
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return hash;
}
