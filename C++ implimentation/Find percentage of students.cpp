#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int marks,  total=1100, percentage;
	cout<<"Enter marks of the student:"<<endl;
	cin>>marks;
	percentage=marks*100/total;
	cout<<"Print the obtained Percentage of a student=  "<<percentage<<endl;
	if(percentage>=80)
	{
		cout<<"Student achieved A+ grade: ";
	}
		else if(percentage>=60)
	{
		cout<<"Student achieved A grade: ";
}
		else if(percentage>=50)
	{
		cout<<"Student achieved B grade: ";
	}
		else if(percentage>=45)
	{
		cout<<"Student achieved C grade: ";
	}
		else if ((percentage>0)&&(percentage<45))
	{
		cout<<"Student is Fail: ";
	}
	getch();
	return 0;
}
