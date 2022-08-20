#include<iostream>
#include<math.h>
using namespace std;
int main()
{ int  n , max , min , i, a[n];
cin>> n;
int x;
     for ( i =0; i<= n-1 ; i++ )
    { cin >> a[i];
    } 
   max = a[0];
   min= a[0];
   for ( i= 0 ; i<n ; i++)
    {
	if ( max<a[i])
    max= a[i];
  
    else if ( min > a[i])
    min= a[i];}
    
       cout<<max<< endl << min;
     return 0;
}

