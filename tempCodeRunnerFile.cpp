#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i=1;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<"\n";
	do{
		cout << "Student [" << i << "] : ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A')// if grade is A
		{
			count[0]++;
		} 
		else if(grade=='B') // if grade is B
		{
			count[1]++;
		}
		else if(grade=='C') // if grade is c
		{
			count[2]++;
		}
		else if(grade=='D') // if grade is D
		{
			count[3]++;
		}
		else if(grade=='F') // if grade is F
		{
			count[4]++;
		}
		else
		{ // grade is wrong input
			cout<<"Wrong input. Please input again."<<"\n";
			i--;
		} 
		i++;
	}while(grade!='0');
	
	i--;
	cout << "In total " <<i<< " students."<<"\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
