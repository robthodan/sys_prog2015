/*
 * Token.h

 *
 *  Created on: 16.04.2015
 *      Author: danielmauch
 */

#include <string.h>

#ifndef TOKEN_H_
#define TOKEN_H_

enum class TokenType {
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
	SPECIAL			//TODO neue Bezeichnung fuer '<:>'
	IF,           	// 'if' / 'IF'
	WHILE,        	// 'while' / 'WHILE'
	INT,          	// 'int'
	BOOLEAN,      	// 'boolean'
	VOID,         	// 'void'
	RETURN,       	// 'return'
};

class Token {
public:
	Token(TokenType type);
	~Token();

	TokenType getType();
	void setType(TokenType type);
private:
	TokenType type;
	Information* information;
	int line;
	int column;
};

#endif /* TOKEN_H_ */
