/*
 * Initial.h
 *
 *  Created on: Apr 21, 2015
 *      Author: tom
 */

#ifndef INITIAL_H_
#define INITIAL_H_

#include "State.h"

class Initial: public State {
public:
	virtual ~Initial(){};
	virtual void read(char,AutomatOO*);
};



#endif /* INITIAL_H_ */
