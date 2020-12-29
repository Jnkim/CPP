#include <iostream> 
#include <cstring>
#include <stdlib.h> 

using namespace std;  
int main(){
	int *ip;
	double *dp;
	
	ip = (int *)malloc(sizeof(int));  // sizeof연산자는 class의 메모리 크기를 반환하는 연산자 이다.  
	dp = (double *)malloc(sizeof(double));  // malloc연산자는 형변환(casting) 을 해야 한다.  
	
	// 리턴값을 검사하여 Null Pointer인지 확인하는 루틴을 구현해야 한다. 
	if(ip == NULL || dp == NULL){
		// heap 영역에 원하는 크기의 메모리가 부족하면 Null을 변환 
		cout << "메모리가 부족합니다."<< endl;
		exit(1);
	}
	else {
		*ip = 777;
		*dp = 3.14;
		
		cout << "ip내용 : "<< *ip << endl;
		cout << "dp내용 : "<< *dp << endl;
		cout << "ip주소 : "<< ip << endl;
		cout << "dp주소 : "<< dp << endl; 
	}
	
	free(ip);  // malloc함수로 할당받는 메모리 해제 (free연산자로 메모리를 해제한다. ) 
	free(dp);
	
	int *pt = new int; // new 연산자로 메모리 할당 
	*pt = 200;
	
	cout << "pt 주소 : " << pt << endl; 
	cout << "pt 내용 : " << *pt << endl;
	delete pt; // new 연산자로 만든 메모리 해제 ( delete로 해제 한다. )
	return 0; 
}
