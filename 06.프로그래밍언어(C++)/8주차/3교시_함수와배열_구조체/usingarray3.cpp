#include <iostream>
using namespace std;

void usingArray(int arr[][3]); // 2차원 배을을 인수로 갖는 함수의 원형 

int main(){
	int js[2][3] = {{10,20,30},{40,50,60}};
	usingArray(js);
	return 0;
} 

void usingArray(int arr[][3]){ // 주소 값을 전달 : 보통 2차원 배열의 형태는 첫번째 1차원배열의 index는 선언하지 않는다.  
  for(int i = 0 ; i < 2; i++){ 
   	for(int j = 0; j < 3; j++){
   		cout << "arr["<<i<<"]["<<j<<"] : "<< arr[i][j]<< "\n";
   	}
  }
}
