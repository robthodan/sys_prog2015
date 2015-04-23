/*
 * Number.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: tom
 */

#include "../includes/NumberState.h"

#include <iostream>


void NumberState::read(char c, AutomatOO* automat){

	if(!((48 <= c) && (c <= 57))){
		std::cout << "Number" << std::endl;
		automat->setStateInitial();
		automat->counter--;
	}




}


