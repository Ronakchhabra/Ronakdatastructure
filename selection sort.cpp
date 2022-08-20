#include<iostream>
#include<math.h>
using namespace std ;
int main()
{ 
   int  n, i ,  a[n], j , temp;

    cout<< " no of element";
    cin>> n;
    
       for ( i =0; i<= n-1 ; i++ )
             { cin >> a[i];} 
      for ( i= 0 ; i< n-1 ; i++)
       {
	      for ( j= i+ 1 ; j<n ; j++)
          if ( a[i]> a[j])
          {
		 temp = a[i];
          a[i]= a[j];
          a[j]= a[i]; } 
		  }
           for ( i = 0 ; i < n ; i ++)
            cout<< a[i];
            return 0;
}
