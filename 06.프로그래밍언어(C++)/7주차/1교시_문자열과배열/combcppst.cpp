#include <iostream>
#include <string>
using namespace std;

int main(){
	string cppStyle;
	char cStyle[256];
	string cppTest;
	
	cout << "문자열을 입력하세요!.\n";
	cin.getline(cStyle , 256);
	
	cout << "문자열을 입력하세요!.\n";
	getline(cin , cppStyle);
	
	cout << "문자열을 입력하세요!.\n";
	getline(cin , cppTest);
	
	cout << cStyle << endl; 
	cout << cppStyle << endl;
	cout << cppTest << endl;
	  
	return 0;
}
