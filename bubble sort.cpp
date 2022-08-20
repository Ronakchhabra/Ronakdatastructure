#include<iostream>
using namespace std;
int main()
{   int n=5;

  
    int a[5] ={ 1, 2, 6,7,8};
    
             
    
    for(int i=0; i<n-1; i++)
       
	   {
		 for(int j= 1 ; j<i+1 ; j++)
        {
		   if ( a[i]> a[j])
          {
		 int temp = a[i];
          a[i]= a[j];
          a[j]= a[i]; } 
	    }
          }
          for(int i=0; i<n; i++)
          cout<< a[i];
          
 }
