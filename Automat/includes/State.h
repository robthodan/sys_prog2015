/*
 * State.h
 *
 *  Created on: Apr 21, 2015
 *      Author: tom
 */

#ifndef STATE_H_
#define STATE_H_

#include "../../Token/includes/TokenType.h"

class State;

class AutomatOO {
public:
	virtual ~AutomatOO(){};
	virtual void setStateInitial() = 0;
	virtual void setStateNumber() = 0;
	virtual void setStateIdentifier() = 0;

	virtual void mkToken(TokenType) = 0;



};

class State {
public:
	virtual ~State(){};
	virtual void read(char,AutomatOO*) = 0;

};



#endif /* STATE_H_ */
