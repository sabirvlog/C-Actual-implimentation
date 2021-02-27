#include<iostream>  
using namespace std; 
int main() 
 {           
	int no[3][3],i,j,sum=0; 
	cout<<" Enter nine elements:\n "<<endl; 
	for(i=0; i<3; i++) 
	 { 
	    for(j=0; j<3; j++) 
	   {
	   	
			 cin>>no[i][j]; 
	   	 
	   	     { 
	   	        cout<<" "<<"\n";  
	   	        sum=0;
				}
	   }
	 }
	 
	   
	   	  cout<<"Elements are; "; 
	   	  for(i=0; i<3; i++)
	   	    {
	   	    	for(j=0; j<3; j++)
	   	    	 {
	   	    	 	cout<<no[i][j]; 
	   	    	 	 sum=sum+no[i][j];
					}
					  
	   	        cout<<"= "<<sum; 
	   	        cout<<"\n";
	   	        sum=0;
				}
			
			   return 0;
	   }  
	  
	   	
 
      
