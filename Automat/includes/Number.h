/*
 * Number.h
 *
 *  Created on: Apr 22, 2015
 *      Author: tom
 */

#ifndef NUMBER_H_
#define NUMBER_H_

#include "State.h"

class Number: public State {
public:
	virtual ~Number(){};
	virtual void read(char,AutomatOO*);
};




#endif /* NUMBER_H_ */
