/*
 * Token_Type.h
 *
 *  Created on: Apr 25, 2015
 *      Author: tom
 */

#ifndef TOKEN_TYPE_H_
#define TOKEN_TYPE_H_

enum Token_Type {
	EOF,      		// "end of file"
	ERROR,
	NUMBER,			// digit digit*
	IDENTIFIER,		// letter ( letter | digit )*
	PLUS,         	// '+'
	MINUS,        	// '-'
	STAR,         	// '*'
	EXCLAMATIONMARK,// '!'
	LBRACE,       	// '('
	RBRACE,       	// ')'
	EQUAL,       	// '='
	LESS,         	// '<'
	GREATER,      	// '>'
	LCURLY,       	// '{'
	RCURLY,       	// '}'
	SEMICOLON,    	// ';'
	AND,			// '&'
	DP,				// ':'
	DEF,			// ':='
	LECK,			// '['
	RECK,			// ']'
	GAY,			//TODO neue Bezeichnung fuer '<:>'
	IF,           	// 'if' / 'IF'
	WHILE,        	// 'while' / 'WHILE'
	INT,          	// 'int'
	BOOLEAN,      	// 'boolean'
	VOID,         	// 'void'
	RETURN,       	// 'return'
	COMMENT
};



#endif /* TOKEN_TYPE_H_ */
