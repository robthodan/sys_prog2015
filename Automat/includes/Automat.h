/*
 * Automat.h
 *
 *  Created on: Jul 5, 2012
 *      Author: knad0001
 */

#ifndef Automat_H_
#define Automat_H_

#include "State.h"
#include "Initial.h"
#include "Identifier.h"
#include "Number.h"
#include "State.h"


class Automat: public AutomatOO {
public:
	Automat();
	virtual ~Automat();
	void read(char);
	void setStateInitial();
	void setStateIdentifier();
	void setStateNumber();


private:

	State* _currentState;

	Initial* _initialState;
	Number* _numberState;
	Identifier* _identifierState;
};

#endif /* Automat_H_ */
