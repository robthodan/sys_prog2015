/*
 * Identifier.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: tom
 */

#include "../includes/IdentifierState.h"
#include <iostream>

void IdentifierState::read(char c, AutomatOO* automat){

	if(!((65 <= (int)c) && ((int)c <= 90)) && !((0 <= c) && (c <= 9))){
		std::cout << "identifier" << std::endl;
		automat->setStateInitial();
	}


}


