/*
 * Automat.cpp
 *
 */

#include "../includes/Automat.h"
#include "../includes/State.h"
#include "../includes/InitialState.h"
#include "../includes/NumberState.h"
#include "../includes/IdentifierState.h"

#include <iostream>



Automat::Automat(TestScannerOO* testscanner) {
	_initialState = new InitialState();
	_numberState = new NumberState();
	_identifierState = new IdentifierState();
	_asignState = new AsignState();
	_commentState = new CommentState();

	scanner = testscanner;

	_currentState = _initialState;

}

Automat::~Automat() {
	// TODO Auto-generated destructor stub
}



void Automat::read(char c){
	_currentState->read(c, this);
}

void Automat::setStateInitial(){
	this->_currentState = this->_initialState;
}

void Automat::setStateNumber(){
	this->_currentState = this->_numberState;
}

void Automat::setStateIdentifier(){
	this->_currentState = this->_identifierState;
}

void Automat::setStateAsign(){
	this->_currentState = this->_asignState;
}

void Automat::setStateComment(){
	this->_currentState = this->_commentState;
}

void Automat::mkToken(Token_Type token){
	this->scanner->mkToken(token);

}


void Automat::ungetChar(int i){
	this->scanner->ungetChar(i);
}


