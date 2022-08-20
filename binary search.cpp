#include<iostream>
#include<math.h>
using namespace std;
int binarysearch( int a[], int n, int key) 
{ int mid , i=0 , j=n ;
while( i<=j)
{mid= (i+j)/2;
if (a[mid]==key)
 return mid;
 else if ( a[mid]> key)
 j = mid - 1;
 else
i = mid +1;
 
 }
  return -1;
}


int main()
{ int  n, i , key,  a[n];

cout<< " no of element";
cin>> n;
cout<< " key";
cin>> key;
 for ( i =0; i<= n-1 ; i++ )
     { cin >> a[i];} 
     cout<< binarysearch( a, n , key);
     return 0;

}

    
