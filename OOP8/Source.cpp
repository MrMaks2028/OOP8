#include <iostream>
using namespace std;

class iNameable {
public:
	virtual const char* getName()const = 0;
	virtual void setName(const char*) = 0;
};

    

int main() {
	setlocale(LC_ALL, "Russian");


	return 0;
}