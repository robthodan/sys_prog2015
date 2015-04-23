/*
 * Identifier.h
 *
 *  Created on: Apr 22, 2015
 *      Author: tom
 */

#ifndef IDENTIFIER_H_
#define IDENTIFIER_H_

#include "State.h"

class IdentifierState: public State {
public:
	virtual ~IdentifierState(){};
	virtual void read(char,AutomatOO*);
};


#endif /* IDENTIFIER_H_ */
