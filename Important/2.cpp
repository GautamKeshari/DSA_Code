#include <iostream> 
#include <string> 
using namespace std; 
int main() 
{ 
	int x=1e9;
  int y=1e5;
  long long z=1e14;
  if(1ll * x * y == z) cout<<1<<endl;  // if (product of integer) cross the integer range we simply multiply it with long long to make it comes into long long range. 
  else cout<<0<<endl;
	return 0; 
} 
