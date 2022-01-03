#include <iostream>
#include <Windows.h>
#include <shellapi.h>
#include <stdlib.h>
#include <time.h>  
using namespace std;
string a1[10] = { "0", "1","2","3","4","5", "6", "7","8", "9" };
string a2[30] = { "a", "b", "c", "d", "e", "f", "g","h", "i", "j", "k", "l", "m", "n","o", "p", "q", "r", "s", "t", "u","v", "w", "x", "y", "z" };
//No need to comment, i think you are smart enought to figure out what it does
void screenshot() {
	srand(time(NULL));
	string h1 = a2[rand() % 11];
	string h12 = a2[rand() % 11];
	string h2 = a1[rand() % 31];
	string h21 = a1[rand() % 31];
	string h22 = a1[rand() % 31];
	string h23= a1[rand() % 31];
	string cast1 = "https://prnt.sc/";
	string cast2 = h1 + h12 + h2 + h21 + h22+ h23;
	string dwnld_URL = cast1 + cast2;
	ShellExecuteA(NULL, "open", dwnld_URL.c_str(), NULL, NULL, SW_SHOWNORMAL);
}

int main()
{
	for (;;) {
		screenshot();
		Sleep(5000);
	}
}
