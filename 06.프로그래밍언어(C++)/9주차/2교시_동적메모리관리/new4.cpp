#include <iostream>
using namespace std;

int main(){
	const int size = 10;
	
	int *arr = new int[size];
	
	// �ʿ��� ��ŭ ���� �޸𸮸� �Ҵ��Ѵ�. 
	for(int i = 0; i < size; ++i){
		arr[i] = i + 1;
	}
	
	// �հ� ����� ����ϰ� ����Ѵ�.
	int sum = 0;
	for(int i = 0; i < size; ++i) {
		sum += arr[i];
	} 
	
	float avg = (float) sum / (float) size;
	cout << "�� = "<< sum << " , ��� = "<< avg << endl;
	
	// ����� �޸𸮸� �����Ѵ�. (new �����ڷ� ���� �޸𸮴� delet �����ڷ� ����) 
	delete[] arr;
	return 0;
	
}
