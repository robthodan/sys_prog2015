/*
 * Number.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: tom
 */

#include "../includes/NumberState.h"



void NumberState::read(char c, AutomatOO* automat){

	if(!((48 <= c) && (c <= 57))){
		automat->mkToken(NUMBER);
		automat->setStateInitial();
		automat->ungetChar(1);

	}

}


