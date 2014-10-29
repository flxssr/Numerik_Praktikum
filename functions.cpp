#include "functions.h"
#include <iostream>
#include <fstream>


using namespace std;

void functions::leseZeile(char* line, int y){
	line = new char[512*17];
	fstream file;
	file.open("Hauptflamme.dat", ios::in | ios::out);
	file.seekg(204 + y *512*17, ios::beg);	//beginne mit lesen bei Zeile y, 204byte Header + y * (512 Werte mit 17byte pro wert)
	
	file.read(line, 512 * 17);

	file.close();



}




void functions::schreibeZeile(char* line){
	fstream file;
	file.open("output.txt", ios::out | ios::app);
	file.write(line, sizeof(line));
	file.close();


}