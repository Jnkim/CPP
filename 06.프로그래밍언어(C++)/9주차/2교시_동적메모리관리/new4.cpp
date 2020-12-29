#include <iostream>
using namespace std;

int main(){
	const int size = 10;
	
	int *arr = new int[size];
	
	// 필요한 만큼 동적 메모리를 할당한다. 
	for(int i = 0; i < size; ++i){
		arr[i] = i + 1;
	}
	
	// 합과 평균을 계산하고 출력한다.
	int sum = 0;
	for(int i = 0; i < size; ++i) {
		sum += arr[i];
	} 
	
	float avg = (float) sum / (float) size;
	cout << "합 = "<< sum << " , 평균 = "<< avg << endl;
	
	// 사용한 메모리를 해제한다. (new 연산자로 만든 메모리는 delet 연산자로 해제) 
	delete[] arr;
	return 0;
	
}
