#include "../includes/Automat.h"

int main (int argc, char* argv[]){

	Automat* automat;

	automat = new Automat();

	char autoTest[] = { "123 HALLO123+ 123"};

	for(int i = 0; i < 17; i++){
		automat->read(autoTest[i]);
	}

}
