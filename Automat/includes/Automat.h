/*
 * Automat.h
 *
 *  Created on: Jul 5, 2012
 *      Author: knad0001
 */


#ifndef Automat_H_
#define Automat_H_

#include "State.h"
#include "InitialState.h"
#include "IdentifierState.h"
#include "NumberState.h"
#include "AsignState.h"
#include "CommentState.h"
#include "Token_Type.h"


class Automat;

//Nur für Testfälle
class TestScannerOO {
public:
	virtual ~TestScannerOO(){};
	virtual void mkToken(Token_Type) = 0;
	virtual void ungetChar(int)=0;

};

class Automat: public AutomatOO {
public:
	Automat(TestScannerOO*);
	virtual ~Automat();
	void read(char);

	void setStateInitial();
	void setStateIdentifier();
	void setStateNumber();
	void setStateAsign();
	void setStateComment();

	void mkToken(Token_Type);
	void ungetChar(int);

	int getCount();

private:

	TestScannerOO* scanner;


	State* _currentState;
	CommentState* _commentState;
	AsignState* _asignState;
	InitialState* _initialState;
	NumberState* _numberState;
	IdentifierState* _identifierState;
};

#endif /* Automat_H_ */
