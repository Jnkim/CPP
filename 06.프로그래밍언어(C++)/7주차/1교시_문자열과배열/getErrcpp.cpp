#include <iostream>
#include <string>
using namespace std;

int main(){
	char cStyle[256];
	cout << "문자열을 입력하세요! \n";
	cin.get(cStyle , 256); // 한라인을 읽고 개행 문자는 입력스트림에 남긴다.
	cout << cStyle << endl;
	
	cin.ignore(256,'\n');
	cout << "문자열을 입력하세요! \n";
	cin.getline(cStyle,256);
	cout << cStyle << endl;
	
	return 0;
	
}
