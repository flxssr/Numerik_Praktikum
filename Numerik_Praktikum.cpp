#include "functions.h""
#include <iostream>

using namespace std;
char* line;


functions func;

int main(){
	
	func.leseZeile(line, 0);
	func.schreibeZeile(line);

	

	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}




