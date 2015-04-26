#include "../includes/Automat.h"
#include "../includes/TestScanner/TestScanner.h"
#include <iostream>


int main (int argc, char* argv[]){

	Automat* automat;
	TestScanner* scanner = new TestScanner();


	automat = new Automat(scanner);




	char autoTest[] = { "ab1211 + :* sg *: 43 "};

	while(scanner->count < (sizeof(autoTest)/sizeof(char))){
		std::cout << autoTest[scanner->count] << " ";
		automat->read(autoTest[scanner->count]);
		scanner->count++;

	}

	enum Test {BLA, BLI, BLUB};
	Test hmm = BLA;

	switch(hmm){
	case (int)BLA:
		std::cout << " ok so gehts"<< std::endl;
		break;
	case (int)BLI:
		std::cout << "hhmmmm " << std::endl;
		break;
	case (int)BLUB:
		std::cout << "hhgagagagmmmm " << std::endl;
		break;

	}

}
