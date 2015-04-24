/*
 * Initial.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: tom
 */

#include <iostream>

#include "../includes/InitialState.h"


void InitialState::read(char c, AutomatOO* automat){
	if(c == '1'){
		automat->setStateNumber();
	}

	switch(c){
	case 43: // PLUS
		automat->mkToken(PLUS);
		break;
	case 45: // MINUS
		automat->mkToken(MINUS);
		break;
	case ':': // COLON
		automat->setStateAsign();
		break;
	case '*': // STAR
		std::cout << "+" << std::endl;
		break;
	case '<': // LESS
		std::cout << "=" << std::endl;
		break;
	case '>': // GREATER
		std::cout << "+" << std::endl;
		break;
	case '=': // EQUAL
		std::cout << "=" << std::endl;
		break;
	case '!': // EXCLAMATIONMARK
		std::cout << "+" << std::endl;
		break;
	case ';': // SEMICOLON
		std::cout << "=" << std::endl;
		break;
	case '(': // LBRACE
		std::cout << "+" << std::endl;
		break;
	case ')': // RBRACE
		std::cout << "=" << std::endl;
		break;
	case '{': // LCURLY
		std::cout << "+" << std::endl;
		break;
	case '}': // RCURLY
		std::cout << "=" << std::endl;
		break;
	case '[': // LSQUARE
		std::cout << "+" << std::endl;
		break;
	case ']': // RSQUARE
		std::cout << "=" << std::endl;
		break;


	}

}



