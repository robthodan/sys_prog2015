/*
 * Token_Type.h
 *
 *  Created on: Apr 25, 2015
 *      Author: tom
 */

#ifndef TOKEN_TYPE_H_
#define TOKEN_TYPE_H_

enum Token_Type {
	EOF,
	ERROR,
	NUMBER,
	IDENTIFIER,
	PLUS,
	MINUS,
	COLON,
	STAR,
	LESS,
	GREATER,
	EQUAL,
	ASSIGN,
	LCG, // <:> immernohc n kack name
	EMARK,
	AMPERSAND, // &
	SEMICOLON,
	LBRACE,
	RBRACE,
	LCURLY,
	RCURLY,
	LSQUARE,
	RSQUARE
};



#endif /* TOKEN_TYPE_H_ */
