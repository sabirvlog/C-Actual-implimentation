#include<iostream>
#include<stdio.h>
#include<conio.h>
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
		cout<<"element at "<<a<<" index :"<<arry[a]<<endl;
		}
		int up, up_ele; //declare variablefor of index or new value
		cout<<"enter index no which element update :  ";
		cin>>up;
		cout<<"enter updated element : ";
		cin>>up_ele; //update value from user.....
		cout<<"update array"<<endl; //display updated araay.......
		for(int a=0;a<size;a++)
		{
			if(a==up){
				arry[a]=up_ele;
			}
			cout<<"element at "<<a<<" index :"<<arry[a]<<endl;
			}	
			getch();
}
