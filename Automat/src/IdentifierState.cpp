/*
 * Identifier.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: tom
 */

#include "../includes/IdentifierState.h"
#include <iostream>

void IdentifierState::read(char c, AutomatOO* automat){

	if( !((c >= 48) && (c <= 57)) && !((c >= 65) && (c <= 122)) ){
		automat->mkToken(IDENTIFIER);
		automat->setStateInitial();
		automat->ungetChar(1);
	}


}


