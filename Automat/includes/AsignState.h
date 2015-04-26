/*
 * AssignState.h
 *
 *  Created on: Apr 25, 2015
 *      Author: tom
 */

#ifndef ASIGNSTATE_H_
#define ASIGNSTATE_H_

#include "State.h"

class AsignState : public State {
public:
	virtual ~AsignState(){};
	virtual void read(char,AutomatOO*);
};




#endif /* ASSIGNSTATE_H_ */
