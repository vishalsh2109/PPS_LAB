#include<stdio.h>
int pattern(int o,int n,int c)
{
	printf("%d ",n);
	if(c==1&&n==o){
		return 0;
	}
	if(n<=0){
		c=1;
	}
	if(c==0){
		n=n-5;
		return pattern(o,n,c);
	}
	else{
		n=n+5;
		return pattern(o,n,c);
	}
}
int main()
{
	pattern(16,16,0);
    return 0;
}