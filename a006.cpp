#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(void)
{
	int a,b,c,rootn,rootp,sqr;
	cin >>a>>b>>c;
	sqr = sqrt(b*b-4*a*c);
	rootp = (-b+sqr)/(2*a);
	rootn = (-b-sqr)/(2*a);
	if(rootn == rootp)
	cout <<"Two same roots x="<<rootp;
	else if(rootn != rootp)
	cout <<"Two different roots x1="<<rootp<<", x2="<<rootn;
	else
	cout <<"No real root";

   system("pause");
   return 0;
}



