#include <stdio.h>

int main(){
	int w;
	double sum1=0, sum2=0, a, b;
	scanf("%d", &w);
	while(w--){
		scanf("%lf%lf", &a, &b);
		sum1+=a*b;
		sum2+=a;
	}
	printf("%.2f", sum1/sum2);
	return 0;
}
