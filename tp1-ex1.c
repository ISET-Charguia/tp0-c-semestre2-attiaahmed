#include <stdio.h>
#include <stdlib.h>

void fact(int n){
int res=1;int i;
	for(i=1;i<=n;i++)
		res=res*i;
	printf("fact=%d",res);





}
int factrec(int n){

	if(n==1||n==0)
return 1;
	else return n*factrec(n-1);



}

int factrecu(int n, int res){

	if(n==1||n==0)
return res;
	else return factrecu(n-1,res*n);



}
int main(void) {
	int x,n,a;int res=1;
	do{
		prinf("x");
	scanf("%d",&x);
	}while(x<0);
		n=factrec (x);
	printf("%d",n);
	puts("");
	fact(x);
	puts("");
	a=factrecu (x,res);
	printf("%d",a);
	return 0;
}

