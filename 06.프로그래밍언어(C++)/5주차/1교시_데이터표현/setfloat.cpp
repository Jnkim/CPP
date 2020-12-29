#include <iostream>
using namespace std;
#include <iomanip>

int main(){
	
   cout.setf(ios::fixed, ios::floatfield); // 부동소수점 출력 
   //cout.setf(ios::left, ios::adjustfield); // 왼쪽정렬 
   cout.setf(ios::right, ios::adjustfield); // 오른쪽정렬 
   cout.setf(ios::showpos); // + 기호를 붙여서 출력 
   //cout.precision(3); // 정밀도 3자리(소수부 3자리) 
   cout.precision(8); // 정밀도 8자리(소수부 8자리) 
   
   double d = 10.0 / 3.0;
   cout.width(30); // 자릿수 30칸 지정
   
   cout << d << endl; 
	
	return 0; 
	
}
