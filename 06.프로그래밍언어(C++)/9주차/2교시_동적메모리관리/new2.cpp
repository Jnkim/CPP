#include <iostream> 
#include <cstring>
#include <stdlib.h> 

using namespace std;  
int main(){
	int *ip;
	double *dp;
	
	ip = (int *)malloc(sizeof(int));  // sizeof�����ڴ� class�� �޸� ũ�⸦ ��ȯ�ϴ� ������ �̴�.  
	dp = (double *)malloc(sizeof(double));  // malloc�����ڴ� ����ȯ(casting) �� �ؾ� �Ѵ�.  
	
	// ���ϰ��� �˻��Ͽ� Null Pointer���� Ȯ���ϴ� ��ƾ�� �����ؾ� �Ѵ�. 
	if(ip == NULL || dp == NULL){
		// heap ������ ���ϴ� ũ���� �޸𸮰� �����ϸ� Null�� ��ȯ 
		cout << "�޸𸮰� �����մϴ�."<< endl;
		exit(1);
	}
	else {
		*ip = 777;
		*dp = 3.14;
		
		cout << "ip���� : "<< *ip << endl;
		cout << "dp���� : "<< *dp << endl;
		cout << "ip�ּ� : "<< ip << endl;
		cout << "dp�ּ� : "<< dp << endl; 
	}
	
	free(ip);  // malloc�Լ��� �Ҵ�޴� �޸� ���� (free�����ڷ� �޸𸮸� �����Ѵ�. ) 
	free(dp);
	
	int *pt = new int; // new �����ڷ� �޸� �Ҵ� 
	*pt = 200;
	
	cout << "pt �ּ� : " << pt << endl; 
	cout << "pt ���� : " << *pt << endl;
	delete pt; // new �����ڷ� ���� �޸� ���� ( delete�� ���� �Ѵ�. )
	return 0; 
}
