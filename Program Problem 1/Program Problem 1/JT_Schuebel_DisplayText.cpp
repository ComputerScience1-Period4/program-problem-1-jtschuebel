/*
JT_Schuebel- 9/21/2017 4th
Display Text
Introduction to C++ Visual Studios
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	cout << "press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	char H = 'H';
	char e = 'e';
	char l = 'l';
	char o = 'o';
	char W = 'W';
	char r = 'r';
	char d = 'd';
	char j = 'j';
	char t = 't';
	char S = 'S';
	char c = 'c';
	char h = 'h';
	char u = 'u';
	char b = 'b';
	int pNum = 4;
	char pSymbol = '4';

	char jt_Schuebel = pSymbol;
	cout << "JT Schuebel " << "Period " << jt_Schuebel << " Hello World!" << endl;
	pause();
}


