/*
 * Initial.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: tom
 */

#include <iostream>

#include "../includes/InitialState.h"


void InitialState::read(char c, AutomatOO* automat){
	if((c >= 48) && (c <= 57)){
		automat->setStateNumber();
	} else if((c >= 65) && (c <= 122)){
		automat->setStateIdentifier();
	} else {

		switch(c){
		case '+': // PLUS
			automat->mkToken(PLUS);
			break;
		case '-': // MINUS
			automat->mkToken(MINUS);
			break;
		case ':': // COLON
			automat->setStateAsign();
			break;
		case '*': // STAR
			automat->mkToken(STAR);
			break;
		case '<': // LESS
			automat->setStateSpecial();
			break;
		case '>': // GREATER
			automat->mkToken(GREATER);
			break;
		case '=': // EQUAL
			automat->mkToken(EQUAL);
			break;
		case '!': // EXCLAMATIONMARK
			automat->mkToken(EXCLAMATIONMARK);
			break;
		case ';': // SEMICOLON
			automat->mkToken(SEMICOLON);
			break;
		case '(': // LBRACE
			automat->mkToken(LBRACE);
			break;
		case ')': // RBRACE
			automat->mkToken(RBRACE);
			break;
		case '{': // LCURLY
			automat->mkToken(LCURLY);
			break;
		case '}': // RCURLY
			automat->mkToken(RCURLY);
			break;
		case '[': // LSQUARE
			automat->mkToken(LECK);
			break;
		case ']': // RSQUARE
			automat->mkToken(RECK);
			break;
		case '\n': // NEW LINE
			automat->mkToken(RETURN);
			break;
		case 4: //TODO: EOF - Welcher char?
			automat->mkToken(EOF);
			break;
		case ' ':
			break;
		default:
			automat->mkToken(ERROR);
		}
	}

}



