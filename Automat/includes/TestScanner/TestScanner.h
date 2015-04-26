/*
 * TestScanner.h
 *
 *  Created on: Apr 24, 2015
 *      Author: tom
 */

#ifndef TESTSCANNER_H_
#define TESTSCANNER_H_

#include "../Automat.h"


class TestScanner : public TestScannerOO {
public:
	TestScanner();
	void mkToken(Token_Type);
	void ungetChar(int);
	void read(char);
	unsigned int count;

};



#endif /* TESTSCANNER_H_ */
