#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(void)
{
double nm,n,m;
while(scanf("%g%g",&n,&m)){
	if(n==0&&m==0){
		break;
	}
	else{
	nm=pow(n,m);
	cout<<nm<<"\n";}
	n=0;m=0;
	}
	return 0;
}
