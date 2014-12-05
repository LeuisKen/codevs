#include <stdio.h>

int main(){
	double a, b, c;
	scanf("%lf%lf", &a, &b);
	if(a<=b){
		c=b-a;
	}else{
		c=a-b;
	}
	c < 0.00000001 ? printf("yes\n") : printf("no\n");
	return 0;
}
