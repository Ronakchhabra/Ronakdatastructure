#include<iostream>
using namespace std ;
int main()
{
	int i, j , n;
	cin>> n;
	int count=1;
	for( i=1; i<=n; i++)
	{ 
    count=1;
	for(j=1;j<=n-i;j++)
	 cout<< " ";
	
		for(j=1;j<=i;j++)
		 cout<< count++<< " ";
		
	
	   cout<<endl; 
	   }
}
