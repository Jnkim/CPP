#include <iostream>
#include <string>
using namespace std;

int main(){
	string cppStyle;
	char cStyle[256];
	string cppTest;
	
	cout << "���ڿ��� �Է��ϼ���!.\n";
	cin.getline(cStyle , 256);
	
	cout << "���ڿ��� �Է��ϼ���!.\n";
	getline(cin , cppStyle);
	
	cout << "���ڿ��� �Է��ϼ���!.\n";
	getline(cin , cppTest);
	
	cout << cStyle << endl; 
	cout << cppStyle << endl;
	cout << cppTest << endl;
	  
	return 0;
}
