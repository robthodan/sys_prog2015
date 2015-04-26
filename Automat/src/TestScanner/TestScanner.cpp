/*
 * TestScanner.cpp
 *
 *  Created on: Apr 24, 2015
 *      Author: tom
 */

#include "../../includes/TestScanner/TestScanner.h"

#include <iostream>

TestScanner::TestScanner(){
	this->count = 0;
}

void TestScanner::mkToken(Token_Type token){
	switch(token){
		case PLUS: // PLUS
			std::cout << "    Token: Plus" << std::endl;
			break;
		case MINUS: // MINUS
			std::cout << "    Token: Minus" << std::endl;
			break;
		case NUMBER: // MINUS
			std::cout << "    Token: Number" << std::endl;
			break;
		case DEF: // MINUS
			std::cout << "    Token: Assign" << std::endl;
			break;
		case DP: // MINUS
			std::cout << "    Token: Doppelpunkt" << std::endl;
			break;
		case COMMENT:
			std::cout << "comment" << std::endl;
			break;
		case IDENTIFIER:
			std::cout << "    Token: Identifier" << std::endl;
			break;
	}

}


void TestScanner::ungetChar(int back){
	this->count -= back;
}

void TestScanner::read(char c){
	std::cout << c << std::endl;
}

