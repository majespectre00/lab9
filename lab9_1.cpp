#include<iostream>
using namespace std;

int main(){
	char grade;
	int n = 1;
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student ["<<n<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		n++;
		if(grade =='A') // if grade is A
			count[0] +=1;
		else if(grade =='B') // if grade is B
			count[1] +=1;
		else if(grade =='C')
			count[2] +=1;
		else if(grade =='D')
			count[3] +=1;
		else if(grade =='F')
			count[4] +=1;
		else if(grade =='0'){
			n-=2;
			break;}
		else{
			cout <<"Wrong input. Please input again."<<endl;
			n--;}
	}while(true);	
	cout << "In total "<<n<<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];		
	return 0;
}
