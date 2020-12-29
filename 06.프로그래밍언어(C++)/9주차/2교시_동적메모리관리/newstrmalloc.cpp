#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main(){
	string cppStyle;
	char *cStyle[2];
	char temp[256];
	
	cout << "문자열을 입력하세요! \n";
	cin.getline( temp , 256 ) ; // #include <stdlib.h> 라이브 머리 필요 
	
	cStyle[0] = (char *)malloc( strlen(temp) + 1 ); // 메모리 할당  (  #include <cstring> 라이브러리 필요)
	
	strcpy( cStyle[0], temp);
	cout << cStyle[0] << endl;
	free(cStyle[0]);  // malloc으로 할상된 메모리는 free로 해제한다. 
	
	cout << "문자열을 입력하세요! \n";
	getline ( cin , cppStyle );
	
	cout << cppStyle << endl;
	
	// 동적 할당된 메모리에 연결할 포인터 배열
	long *pt = new long[10];
	*pt = 135792468;
	cout << "pt 주소 = " << pt << endl;
	cout << "pt = " << *pt << endl;
	
	delete[] pt; // 메모리를 해제한다.
	pt = NULL;  // 해제된 메모리 값에 null을 지정한다. 
	
	// pt에 보관된 주소값을 확인한다.
	cout << "pt = " << pt << endl; // null일 경우 기본값으로 0이 할당된다. ㅏ
	delete[] pt;
	pt = NULL;
	
	return 0; 
}
