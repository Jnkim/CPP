#include <iostream> 
#include <cstring> 
using namespace std;

void usingArray(const char *arr, int n);

int main(){
	char *str = "Hello";  // ������ ������ ������ ���� 
	usingArray(str , strlen(str));	// ������ �����͸� �Ű� ������ �����Ѵ�.  
	cout << "In Main() : "<< str << "\n";
	return 0;
}

void usingArray(const char *arr, int n){   

	// *arr[1] = 'Q'; // �Ű������� const�� �����߱⶧���� ���� �����Ϸ��ϸ� compile��� �߻�  
	for(int i = 0 ; i < n ; i++){
		cout << arr[i];
		cout << endl;
	}
}
