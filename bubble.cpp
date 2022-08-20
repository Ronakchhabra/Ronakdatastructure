#include<bits/stdc++.h>
using namespace std;
int main()
{   int i, j , n , a[n], temp;
    cout<< " no of element";
    cin>> n;
    
       for ( i =0; i<= n-1 ; i++ )
             { cin >> a[i];} 
             
    int counter = 1;
    while(counter<n){
    for(i=0; i<n-counter; i++){
	if ( a[i]> a[i+1])
          {
		 temp = a[i];
          a[i]= a[i+1];
          a[i+1]= a[i]; } 
	    }counter ++; 
		  }
          for(i=0; i<n; i++)
          cout<< a[i];
          return 0;
 }
