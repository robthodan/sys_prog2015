#ifndef INFORMATION_H_
#define INFORMATION_H_

class Information {
public:
	Information();
	~Information();
private:
	char * lexem;
	TokenType type;
	int value;
};

#endif
