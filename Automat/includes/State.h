/*
 * State.h
 *
 *  Created on: Apr 21, 2015
 *      Author: tom
 */

#ifndef STATE_H_
#define STATE_H_

#include "Token_Type.h"

class State;

class AutomatOO {
public:
	virtual ~AutomatOO(){};
	virtual void setStateInitial() = 0;
	virtual void setStateNumber() = 0;
	virtual void setStateIdentifier() = 0;
	virtual void setStateAsign() = 0;
	virtual void setStateComment () = 0;
	virtual void setStateSpecial () = 0;
	virtual void setStateSpecial2 () = 0;

	virtual void mkToken(Token_Type) = 0;
	virtual void ungetChar(int) = 0;

};

class State {
public:
	virtual ~State(){};
	virtual void read(char,AutomatOO*) = 0;

};



#endif /* STATE_H_ */
