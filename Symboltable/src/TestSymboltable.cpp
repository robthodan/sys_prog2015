#include "../includes/Symboltable.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	Symboltable* symboltable = new Symboltable();

	cout << "hello" << endl;
	cout << symboltable->hash("Hello") << endl;
}
