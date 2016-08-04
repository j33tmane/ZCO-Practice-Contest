#include<iostream>
using namespace std;
int main()
{
	long stack,limit;
	cin>>stack>>limit;
	int boxes[stack];
	int commands[100000];
	int i,no;
	int pos=0,pick=0;
	for(i=0;i<stack;++i)
	{
		cin>>boxes[i];	
	}	
	for(i=0;i>=0;++i)
	{
		cin>>commands[i];
		if(commands[i]==0)
			break;
	}
	for(i=0;commands[i]!=0;++i)
	{
		switch(commands[i])
		{
			case 1:if(pos!=0)
						pos--;
				break;
			case 2:if(pos+1!=stack)
						pos++;
				break;
			case 3:if(boxes[pos]!=0&&pick!=1)
					{
						pick=1;
						boxes[pos]--;
					}
				break;
			case 4:if(boxes[pos]!=limit&&pick!=0)
					{
						pick=0;
						boxes[pos]++;
					}
						
				break;
		}
	}
	for(i=0;i<stack;++i)
		cout<<boxes[i]<<" ";
	
}
