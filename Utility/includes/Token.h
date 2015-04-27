/*
 * Token.h

 *
 *  Created on: 16.04.2015
 *      Author: danielmauch
 */

#include <string.h>

#ifndef TOKEN_H_
#include "Information.h"
#include "TokenType.h"
#define TOKEN_H_

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
