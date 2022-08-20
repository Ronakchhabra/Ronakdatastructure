#include<iostream>
#include<math.h>
using namespace std;
int main()
{ int  n, i , key, a[n];

cout<< " no of element";
cin>> n;
cout<< " key";
cin>> key;
bool flag=0;

     for ( i =0; i<= n-1 ; i++ )
    { cin >> a[i];
    } 

     for ( i =0; i<= n-1 ; i++ )
    {if ( a[i]== key)
    {
cout<<" element found at" <<i+1;
flag=1;
    break; } }
    if ( flag==0)
    cout<< " not found";
}
    
