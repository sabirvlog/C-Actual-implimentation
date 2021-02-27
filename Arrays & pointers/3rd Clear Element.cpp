#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
using namespace std;
main()
{
	int size=5;
	int arry[size]={1,2,3,4,5};
	cout<<"old array"<<endl;
	for(int a=0;a<size;a++)
	{
		cout<<"element at "<<a<<" index : "<<arry[a]<<endl;
	}
	for(int a=0;a<size;a++)
	{
		arry[a]=0;
	}
	cout<<"array is clear.... "<<endl;
	for(int a=0;a<size;a++)
	{
		cout<<"element at "<<a<<" index : "<<arry[a]<<endl;
	}
	//array size is equal the array is clear...
	getch();
}
//array size is equal the arry is clear.....

