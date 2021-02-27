#include<iostream>  // preprocessor directives to show path to the function.
using namespace std; // namespace library.
int main() // main function.
 {           // starts body of function.
	int no[3][3],i,j,sum=0; // here we have two-D array first 3 are columns and second three are rows and as we have two dimensional array so we need two for loops and for this purpose we take i and j and after we take sum=0 that is also a variable used to sum the rows atlast. 
	cout<<" Enter nine elements:\n "<<endl; //thats clear from first statement that 3*3=9.so therefore we take nine elements.
	for(i=0; i<3; i++) //outer for loop for rows.
	 { 
	    for(j=0; j<3; j++) //inner for loop for columns.
	   {
	   	
			 cin>>no[i][j]; // input statement used as an insersion operator to store data on console\or display screen.
	   	 
	   	     { 
	   	        cout<<" "<<"\n";  // output statement used as an extraction operator to print the programe on the display screen..
	   	        sum=0;
				}
	   }
	 }
	 
	   
	   	  cout<<"Elements are; "; // output statement used as an extraction operator to print the programe on the display screen.
	   	  for(i=0; i<3; i++)
	   	    {
	   	    	for(j=0; j<3; j++)
	   	    	 {
	   	    	 	cout<<no[i][j]; // output statement used as an extraction operator to print the programe on the display screen.
	   	    	 	 sum=sum+no[i][j];
					}
					  
	   	        cout<<"= "<<sum; // output statement used as an extraction operator to print the programe on the display screen.
	   	        cout<<"\n";
	   	        sum=0; // it's necessary so that we starts each and every time the program from 0.
				}
			
			   return 0;
	   }  // closed body of function.
	  
	   	
 
      
