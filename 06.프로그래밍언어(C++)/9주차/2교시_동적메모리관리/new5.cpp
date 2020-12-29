#include <iostream>
#include <cstring>

using namespace std;

char *ReverseString( const char* src , int len){
	// �������� ��ȯ�� ���ڿ��� ������ ���� �޸𸮸� �Ҵ��Ѵ�. 
	char *reverse = new char[len + 1];
	
	// ���ڿ��� �������� �����Ѵ�.
	for(int i = 0 ; i < len; ++i){
		reverse[i] = src[len -i -1];
	};
	// �������� �� ���ڿ��� ���� NULL ���ڸ� �־� ���ڿ��� �������Ѵ�.  
	reverse[len] = NULL;
	
	// �������� �� ���ڿ��� ��ȯ�Ѵ�. 
	return reverse;	 
} 

int main(){
	
	// ���� ���ڿ��� �غ��Ѵ�. 
	char old[] = "I can do it." ;
	char *rev = ReverseString(old , strlen(old) );  // strlen �Լ��� ����Ϸ��� #include <cstring> ���̺귯�� �ʿ� 
	
	cout << old << endl; // ���� ���ڿ� ��� 
	cout << rev << endl; // ���� ���ڿ� ��� 
	
	
	delete[] rev;  // �Ҵ�� ���� �޸� ����
	rev = NULL;    // �����͸� �ʱ�ȭ �Ѵ�.
	
	return 0; 
} 
