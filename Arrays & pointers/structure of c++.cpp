#include <iostream>
using namespace std;
struct student
{
	int roll,marks;
	char name[20],section[10];
	

};
	
int main() 
{
	 struct student stu;
	 cout<<"Enter Nmae of a student: ";
	 cin.getline ( stu.name , 20 );
	 cout<<"Enter Roll No. of a student: ";
	 cin>> stu.roll;
	 cout<<"Enter Marks of a student: ";
	 cin>> stu.marks;
	 cout<<"Enter Section of a student: ";
	 cin>>stu.section;
	 cout<<"Name of a Student: "<<stu.name<<endl;
	 cout<<"Roll No.of a Student: "<<stu.roll<<endl;
	 cout<<"Marks of a Student: "<<stu.marks<<endl;
	 cout<<"Section of a Student: "<<stu.section<<endl;
	return 0;
}

