#include <iostream>
using namespace std;
int main ()
{
   int marks;
   cout<<"Enter the  marks."<<endl;
   cin>>marks;
   if(marks>=75&& (marks<85))
   {
   	cout<<"Grade A";
   }
   else if(marks>=65&&marks<75)
   {
   	cout<<"Grade B";
   }
   
   
   if(marks>=55 && marks<65)

   {
   	cout<<"Grade C";
   }
   else if   
    (marks>=45 && marks<55)
   {
   	
   	cout<<"Grade D";
   	
	  }
	  else if(marks>=33 && marks<45)
	  {
	  	
	  	cout<<"Grade E";
	
		 }
		 else
		 {
		 	
		 	cout<<"Fail";
	
			 }
		 
		 	return 0;
			  


}

