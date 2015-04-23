/*
 * Initial.h
 *
 *  Created on: Apr 21, 2015
 *      Author: tom
 */

#ifndef INITIAL_H_
#define INITIAL_H_

#include "State.h"

class InitialState: public State {
public:
	virtual ~InitialState(){};
	virtual void read(char,AutomatOO*);
};



#endif /* INITIAL_H_ */
