#include <iostream> 
#include <cstring>
using namespace std;
 
void usingArray(const char arr[] , int n); // �迭�� �μ��� ���� �Լ��� ���� 

int main(){
   char str[] = "Hello KJN";
   usingArray(str , strlen(str));  // strlen(str)�� ����Ϸ���  #include <cstring> ���̺귯���� �����ؾ� �Ѵ�. 
   cout << "In Main() : "<< str << "\n";
   return 0;
}

void usingArray(const char arr[] , int n){  // const  (��������� �����Ͽ� ������ ���� �����Ҽ�����. ) 
	
	//arr[1] = 'Q'; // �Ű������� const�� �����߱⶧���� ���� �����Ϸ��ϸ� compile��� �߻�   
	for(int i = 0 ; i < n ; i++){ 
		cout << arr[i];
		cout << endl;
	} 
}
