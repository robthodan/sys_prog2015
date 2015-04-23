/*
 * Automat.cpp
 *
 */

#include "../includes/Automat.h"
#include "../includes/State.h"
#include "../includes/Initial.h"
#include "../includes/Number.h"
#include "../includes/Identifier.h"



Automat::Automat() {
	_initialState = new Initial();
	_numberState = new Number();
	_identifierState = new Identifier();

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
