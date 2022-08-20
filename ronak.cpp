#include<iostream>
#include<math.h>
bool prime (int n1);
using namespace std;
int main()
{
	int a=10 , b=20, i ;
	
	for(i=a; i<=b; i++)
	{ if(prime(i))
{
	cout<< i;	}
	}
	return 0;
}
bool prime(int n1)
{ int j;
for(j=2; j<=n1; j++)
 {
   if(n1%j==0)
    return false; 
}
return true;
}