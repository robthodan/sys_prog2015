/*
 * Automat.cpp
 *
 */

#include "../includes/Automat.h"
#include "../includes/State.h"
#include "../includes/InitialState.h"
#include "../includes/NumberState.h"
#include "../includes/IdentifierState.h"



Automat::Automat() {
	_initialState = new InitialState();
	_numberState = new NumberState();
	_identifierState = new IdentifierState();

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

void Automat::mkToken(TokenType){

}
