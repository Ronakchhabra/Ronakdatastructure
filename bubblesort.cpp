#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int i, j , n , a[n], temp;
    cout<< " no of element";
    cin>> n;
    
       for ( i =0; i<= n-1 ; i++ )
             { cin >> a[i];} 
             
    
    for(i=0; i<n-1; i++)
       
	   {
		 for(j= 1 ; j<i+1 ; j++)
        {
		   if ( a[i]> a[j])
          {
		 temp = a[i];
          a[i]= a[j];
          a[j]= a[i]; } 
	    }
          }
          for(i=0; i<n; i++)
          cout<< a[i];
          
 }
