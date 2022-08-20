#include<iostream>
using namespace std ;
int main()
{
	int i, j , n;
	cin>> n;
	int count=1;
	for( i=1; i<=n; i++)
	{ 

	for(j=1;j<=i;j++)
	 {if(j==i||( i-j)%2==0)
	  count=1;
	  else
	  count=0;
	 cout<<count;
	  } 
	  
	
	   cout<<endl; 
	   }
}
