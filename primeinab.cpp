#include<iostream>
using namespace std ;
int main()
{ 
 int a , b , n , i , j;
cin>> a>>b;
for(i=a; i<=b; i++)
    {
	  for(j=2 ; j<i ; j++)
     { if(i%j==!0)
	   cout<< i<<endl;
	   break;
    }
}
}
