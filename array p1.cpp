#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ int arr[]= { 1, 3, 4 , 5, 6};
 int i, j;
 cin>>j;
 int mx = 0;
  for ( i= 0 ; i<j ; i++)
     {
	 mx = max (arr[i],arr[i+1]);
     cout<<mx; }
     return 0;
	
	
	
}
