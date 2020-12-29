#include <iostream>
using namespace std;

void chonge(int *p);

int main(){
	int x = 1004;
	chonge(&x);
	cout << "chonge() 함수 호출 후 변수 x의값 : " << x << endl;
	return 0; 
}

void chonge(int *p){
	cout << "chonge() 함수 : "<< *p << endl;
	*p = 375;  // 해당 주소에 값 할당 
}
