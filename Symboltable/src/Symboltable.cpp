/*
 * Symboltable.cpp
 *
 *  Created on: Sep 26, 2012
 *      Author: knad0001
 */
#include "../../Utility/includes/Token.h"
#include "../includes/Symboltable.h"
#include "../../Utility/includes/TokenType.h"

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
	this->addEntry("+", TokenType::PLUS, -1);
	this->addEntry("-", TokenType::MINUS, -1);
	this->addEntry("*", TokenType::STAR, -1);
	this->addEntry("!", TokenType::EXCLAMATIONMARK, -1);
	this->addEntry("(", TokenType::LBRACE, -1);
	this->addEntry(")", TokenType::RBRACE, -1);
	this->addEntry("=", TokenType::EQUAL, -1);
	this->addEntry("<", TokenType::LESS, -1);
	this->addEntry(">", TokenType::GREATER, -1);
	this->addEntry("{", TokenType::LCURLY, -1);
	this->addEntry("}", TokenType::RCURLY, -1);
	this->addEntry(";", TokenType::SEMICOLON, -1);
	this->addEntry("&", TokenType::AND, -1);
	this->addEntry(":", TokenType::DP, -1);
	this->addEntry(":=", TokenType::DEF, -1);
	this->addEntry("[", TokenType::LECK, -1);
	this->addEntry("]", TokenType::RECK, -1);
	this->addEntry("<:>", TokenType::SPECIAL, -1);
	this->addEntry("if", TokenType::IF, -1);
	this->addEntry("IF", TokenType::IF, -1);
	this->addEntry("while", TokenType::WHILE, -1);
	this->addEntry("WHILE", TokenType::WHILE, -1);
	this->addEntry("int", TokenType::INT, -1);
	this->addEntry("boolean", TokenType::BOOLEAN, -1);
	this->addEntry("void", TokenType::VOID, -1);
	this->addEntry("return", TokenType::RETURN, -1);
}

Information * Symboltable::getEntry(char * lexem) {
	//TODO
	return 0;
}

void Symboltable::addEntry(const char * lexem, TokenType type, int value) {
	//TODO
}

int Symboltable::hash(const char * lexem) {
	unsigned long hash = 5381;
	int c;

	while (lexem != NULL) {
		c = *lexem++;
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return hash;
}
