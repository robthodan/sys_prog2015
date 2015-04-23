/*
 * Initial.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: tom
 */

#include <iostream>

#include "../includes/Initial.h"

void Initial::read(char c, AutomatOO* automat){

	if((48 <= c) && (c <= 57)){
		automat->setStateNumber();
	} else if((65 <= c) && (c <= 90)){
		automat->setStateIdentifier();
	}


	switch(c){
	case '+': // PLUS
		std::cout << "=" << std::endl;
		break;
	case '-': // MINUS
		std::cout << "+" << std::endl;
		break;
	case ':': // COLON
		std::cout << "=" << std::endl;
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



