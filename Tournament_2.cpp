#include<iostream>
#include <cmath>  
#include<cstdio>
#define gc getchar

using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int strn[1001];
int main()
{
	int no;
	scanint(no);
	long long r,total_revn=0;
	int i,j,tmp;
	for(i=0;i<no;++i)
	{
		scanint(tmp);
		strn[tmp]++;
	}
	for(i=1;i<1000;++i)
	{
		if(strn[i]){
			r = 0;
			for(j=i+1;j<1001;++j)
			{
				if(strn[j])
					r+=(j-i)*strn[j];
			}
			total_revn += r*strn[i];
		}	
	}
	cout<<total_revn;
	return 0;
}
