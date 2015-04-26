/*
 * AssignState.cpp
 *
 *  Created on: Apr 25, 2015
 *      Author: tom
 */


#include "../includes/AsignState.h"

void AsignState::read(char c, AutomatOO* automat){
	if(c == '='){
		automat->mkToken(ASSIGN);
		automat->setStateInitial();
	} else {
		automat->mkToken(COLON);
		automat->ungetChar(1);
		automat->setStateInitial();
	}
}
