#include <iostream>
#include <cstdlib>
using namespace std;
int input[20][20],largest[20];
int j,k,n,m,index=0,sum;
int fc(void),fc2(void);
int main(void)
{
cin>>n>>m;
for(j=0;j<n;j++)
{
	for(k=0;k<m;k++)
	{
		cin>>input[j][k];
	}
}
fc();
fc2();
   system("pause");
   return 0;
}

int fc(void){
	index=0;
	for(n=0;n<j;n++)
	{
		for(m=0;m<k;m++)
		{	if(largest[n]<input[n][m])
			{largest[n]=input[n][m];
			}
		}
		sum+=largest[n];
	}
	cout<<sum;
	return 0;
}

int fc2(void){
	index=0;
	int token;
	for(index=0;index<n;index++)
	{
		if((sum%largest[index])==0)
		{cout<<largest[index]<<" ";
		token++;
		}
	}
	if(token==0){
		cout<<"-1";
	}
}
	
	
