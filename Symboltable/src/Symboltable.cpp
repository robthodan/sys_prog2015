/*
 * Symboltable.cpp
 *
 *  Created on: Sep 26, 2012
 *      Author: knad0001
 */

#include "../includes/Symboltable.h"

Symboltable::Symboltable() {
	for(int i = 0; i <1000; i++) {
		entries[i] = NULL;
	}
	initSymTab();
}

Symboltable::~Symboltable() {
	// TODO Auto-generated destructor stub
}

void Symboltable::initSymTab() {

}

Information * Symboltable::getEntry(char * lexem) {

}

void Symboltable::addEntry(char * lexem, TokenType type, int value) {

}
