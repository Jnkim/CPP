#include <iostream> 
using namespace std;

bool isCalRange(int year, int month); 
bool isYoonYear(int year);
void displayCalendar(int year,int month); 
int monthCalc(int year,int month);
int yearCalc(int year);    
int monthOfLastday[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
int main()
{
    int year, month, i;
    char answer;
    string monthNm[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};  
    char week[7][6] = {{"Sun"},{"Mon"},{"Tue"},{"Wed"},{"Thu"},{"Fri"},{"Sat"}}; 
 
    do{
        cout << "1980����� 2030����� ���� ������� �Է��ϼ���. (��: 2003 5) ";   
        cin >> year >> month;
        
        if(isCalRange(year , month)){ 
        	cout << "�Է��� ���ڰ� �߸��Է� �Ǿ����ϴ�. \n�ٽ��Է��Ͻðڽ��ϱ�?"; 
        	cin >> answer ;
        } else { 
        
        	cout << "�Է��Ͻ� ���� "<<year<<"�� "<<month<<"�� �Դϴ�."<<endl; //* ���α׷� ��� ù �ٿ� �Է¹��� �⵵�� ���� Ȯ���ϴ� ������ ��Ÿ����. 
        
        	if(isYoonYear(year)){  
	        	monthOfLastday[1]=29; // 2������ 29�Ϸ� ���� (���޼���) 
	        } 
	        else {
	        	monthOfLastday[1]=28;	
	        }
			 
	        cout << "      <"<<year<<"  "<<monthNm[month -1]<<" >      "<<endl;  // * ���α׷� ��� ��° �ٿ� ��Ÿ���� �Է¹��� �⵵�� ���� �������� ��Ÿ����. 
	        cout << "==============================" << endl;  
            for( i = 0; i < 7; i++ ){ 
            	cout << week[i] << " "; // * �޷��� ����κ��� ������ �������ڷ� ǥ���Ѵ�.
            } 
	 
	        cout << endl; 
	        //cout << "printcalendar year : "<<year<<" , month <<"<<month<<endl;
	        displayCalendar(year,month);        //calendar ����Լ�
	        cout << "\n==============================" << endl;
	        cout << "�ٽ� �Է��Ͻðڽ��ϱ�?(Y/N): "; 
	        cin >> answer ;
        }     
    }while(answer == 'y' || answer == 'Y' );
    return 0;
}
 
void displayCalendar(int year, int month) // �޷��� ����ϴ� �Լ�
{
    int startday, enter;
     
    int space = (yearCalc(year) + monthCalc(year,month)) % 7;
    enter = space;                        // enter ������ ���� space ������ ���̴�
    
     
    for (startday = 0 ; startday < space ; startday++){ 
    	    cout << "    ";
    }    
    
    for (startday = 1 ; startday <= monthOfLastday[month-1] ; startday++){            
        if (startday < 10){
        	cout << " 0" << startday << " " ;  
        }else { 
        	cout << " " << startday << " " ;
        } 
		                    
        if (enter == 6){
			cout << endl;                        
            enter = 0;                            
        }
        else { 
        	enter++;
        }                            
    }
}

int yearCalc(int year)                            
{
    int basic = 4; 
    for (int y = 2000; y >= year; y--){
        basic += 6;                                
        if (isYoonYear(y)){ 
        	basic += 6;
        }                                
    }    basic %= 7;                
 
    return basic;    
    
}

int monthCalc(int year,int month) // �ش���� ������ ���ϴ� �Լ�
{ 
    int allday = ((year-1)+(year-1)/4-(year-1)/100+(year-1)/400);
    int i;
    for(i=0; i < month; i++){
		  if(i==1 && ((year%4==0 && year%100 !=0) || year%400==0)){
		   monthOfLastday[1]+=1;  
		  }
	  	allday += monthOfLastday[i];
   }
   
   allday -= monthOfLastday[i-1]; 
   return ( allday + 2) % 7; 
    
}

bool isCalRange(int year , int month){  // ����ڰ� �Է��� ��(���)�� ��ȿ���� ���� �Լ� 
   if((year < 1980) || (year > 2030)){  
   	   return true;
   }else {  
   	  if ((month < 1) || (month > 12)){ 
   	  	return true;	
   	  }  
   } 
   return false;
}

bool isYoonYear(int year){ // ������ ����ϴ� �Լ� 
	return !(year % 4 != 0) || (year % 100 != 0) || (year % 400 == 0) ;
}

