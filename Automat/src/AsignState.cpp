/*
 * AssignState.cpp
 *
 *  Created on: Apr 25, 2015
 *      Author: tom
 */


#include "../includes/AsignState.h"

void AsignState::read(char c, AutomatOO* automat){
	if(c == '='){
		automat->mkToken(DEF);
		automat->setStateInitial();
	}
	else if (c == '*') {
		automat->setStateComment();
	} else {
		automat->mkToken(DP);
		automat->ungetChar(1);
		automat->setStateInitial();
	}
}
