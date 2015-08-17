#include <stdio.h>

int main(void) {
	int t,n,n1,i,rev;
	scanf("%d",&t);
	while(t--){
		rev=i=0;
		scanf("%d",&n);
		n1=n;
		while(n1!=0){
			i=n1%10;
			rev = rev*10 + i;
			n1/=10;
		}
		if(n==rev)
		  printf("wins\n");
		else
		  printf("losses\n");

	}
	return 0;
}
