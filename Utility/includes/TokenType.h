#ifndef TOKENTYPE_H_
#define TOKENTYPE_H_

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
	SPECIAL,		//TODO neue Bezeichnung fuer '<:>'
	IF,           	// 'if' / 'IF'
	WHILE,        	// 'while' / 'WHILE'
	INT,          	// 'int'
	BOOLEAN,      	// 'boolean'
	VOID,         	// 'void'
	RETURN,       	// 'return'
};

#endif
