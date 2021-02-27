/*
	Print numbers enter by a user on screen and also add(sum up) those numbers on console screen. 
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5];
	int sum=0;
	int *p,i;     // here only "P" is said to be a pointer and " *P " is called as dereference operator.
    p=arr;     // *p is used for the variable(value) and P pointer is used for address.when we use p++ then 
	//in this case pointer P will print the address like (int=2bytes; char=1bytes; float=four bytes ;etc) while 
	//*p++ will print the variable value like (int arr[5]={1,2.3,4,5} printed  1 2 3 4 5). 
	
	cout<<"\n Numbers are:";
	for( i=0; i<5; i++)
	
{    cin>>arr[i];
	cout<<"\n "<<arr[i];
	sum=sum + arr[i];
	p++;
{




		cout<<"\n Total: "<< sum <<"\n";
	
     }
         }
         	getch();
		return 0;
    }

