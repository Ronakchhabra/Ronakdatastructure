#include<iostream>
#include<math.h>
void fib (int n1);
using namespace std;
int main()
{
	int n ;
	cin>> n;
    fib(n);
	return 0;
}
void fib (int n1)
{ int i , t1 = 0 , t2 = 1;
   int total;
 

for(i=1; i<=n1; i++)
 { cout<< t1<< endl;
   int next= t1+ t2;
   t1=t2;
   t2=next;
}
return;
}
