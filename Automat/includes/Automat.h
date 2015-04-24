/*
 * Automat.h
 *
 *  Created on: Jul 5, 2012
 *      Author: knad0001
 */


#ifndef Automat_H_
#define Automat_H_

#include "State.h"
#include "InitialState.h"
#include "IdentifierState.h"
#include "NumberState.h"



class Automat: public AutomatOO {
public:
	Automat();
	virtual ~Automat();
	void read(char);
	void setStateInitial();
	void setStateIdentifier();
	void setStateNumber();
	void mkToken(TokenType);




private:

	State* _currentState;

	InitialState* _initialState;
	NumberState* _numberState;
	IdentifierState* _identifierState;
};

#endif /* Automat_H_ */
