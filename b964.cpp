#include <iostream>
#include <cstdlib>
using namespace std;
	
int score[20],m,i;
void bubblesort(void);
void searchhigh(void);
void searchless(void);
int main(void)
{
cin>>m;
for(i=0;i<m;i++)
{
	cin>>score[i];
}
bubblesort();
searchhigh();
searchless();
   return 0;
}

void bubblesort()
{
	int j,k,stay;
	for(j=0;j<m-1;j++){
		for(k=0;k<m-1;k++)
		{
			if(score[k]>score[k+1])
			{
				stay=score[k+1];
				score[k+1]=score[k];
				score[k]=stay;
			}
		}
	}
	for(k=0;k<m;k++){
	cout<<score[k];	
	if(k!=(m-1)){
		cout<<" ";
	}
	}
	cout<<"\n";
}

void searchhigh(){
	int x=0,i=0;
	if(score[0]>=60){
		cout<<"best case";
		x=69;
	}
	while(score[i]<60){
		i++;
		if(score[i]==0){
			cout<<score[i-1];
			x=69;
			break;
		}
	}
	if(x!=69){
		cout<<score[i-1];
	}
	cout<<"\n";
	}
	

void searchless(){
	int x=0;
	if(score[m-1]<60){
		cout<<"worst case";
	}
	else {
		while(score[x]<60){
			x++;
		}
		cout<<score[x];
	} 
}





