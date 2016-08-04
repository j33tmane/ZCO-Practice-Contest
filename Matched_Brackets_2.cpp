#include<iostream>
#include <cmath>  
#include<cstdio>
#include <algorithm>
#include <vector>
#define gc getchar
using namespace std;
void scanint(long &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
	long N;
	scanint(N);
	long brackets[N];
	int i,j;
	int dept1=0,maxdept1=0,dept=0,dept2=0,maxdept2=0,maxdept=0;
	int sym1=0,sym2=0;
	int maxsym2=0,maxsym1=0;
	int chance;
	for(i=0;i<N;++i)
	{
		scanint(brackets[i]);
	}
	if(brackets[0]==1)
		chance=1;
	else if(brackets[0]==3)
		chance=3;
	
	for(i=0;i<N;i++)
    {
		switch(brackets[i])
		{
			case 1:
					if(chance==1)
					{
						++dept;
						chance=3;
					}	
					dept1++;
					if(sym2>0)
						sym2++;
					++sym1;
				break;
			case 2:++sym1;
					if(dept1>maxdept1)
					{
						maxdept1=dept1;
					}
					
					if(sym2>0)
						sym2++;
					--dept1;
					if(dept>maxdept)
					{
						maxdept = dept;
					}
	
					dept--;
					chance=1;
							
				
				
				if(dept1==0)
					{
						if(sym1>maxsym1)
							maxsym1=sym1;
						sym1 = 0;
					}			
				break;	
				
				case 3:++sym2;
						dept2++;
					
					if(chance==3)
						{
							++dept;
							chance=1;
						}
						if(sym1>0)
							sym1++;
					break;
				
				case 4:++sym2;
				
					if(dept2>maxdept2)
					{
						maxdept2=dept2;
						
					}
					if(sym1>0)
						sym1++;
					--dept2;
					
					if(dept>maxdept)
					{
						maxdept = dept;
					}
					dept--;
					chance=1;
				if(dept2==0)
					{
						if(maxsym2<sym2)
							maxsym2 = sym2;
						sym2 = 0;
					}		
					break;
					
		}		
		cout<<maxdept<<" "<<maxsym1<<" "<<maxsym2<<endl;
  	}
//   	cout<<maxdept<<" "<<maxsym1<<" "<<maxsym2;
	return 0;
}
