#include <iostream>
using namespace std;

#define PAI        3.1415926
#define root(x)    ((x)) * ((x))
#define ADD(x,y)   (x + y) 
#define OUTTEXT     cout << "Always for you" << endl
#define OUT(message) cout << #message " : " << message << endl


int main(){
	int x = 123;
	int y = 12345;
	cout << "��ũ�λ�� ���" << PAI << endl;
	cout << "5 * 5 = " << root(5) << endl;
	cout << "3 + 5 = " << ADD(3,5) << endl;
	cout << "��ũ�� ����� ���ڿ����� ������� �Ұ� : OUTTEXT" << endl;
	OUTTEXT;
	OUT(x); // #�μ�(�ǸŰ�����)�� ����ϸ� ���ڿ����� ��� ���� 
	OUT(y); // #�μ�(�ǸŰ�����)�� ����ϸ� ���ڿ����� ��� ���� 
	
	
	return 0; 
}
