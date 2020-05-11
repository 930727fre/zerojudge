#include <iostream>
#include <cstdlib>
using namespace std;
int m,d;
int main(void)
{
while(scanf("%d%d",&m,&d)!=EOF){
	if(((2*m+d)%3)==0){
		cout<<"´¶³q";
	}
	else if(((2*m+d)%3)==1){
		cout<<"¦N";
	}
	else if(((2*m+d)%3)==2){
		cout<<"¤j¦N";
	}
	else{
		cout<<"error";
	}
	cout<<"\n";
	m=0;
	d=0;

}
   return 0;
}



