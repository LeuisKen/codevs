#include <stdio.h>

int main(){
	int t=12, s, sum=0, sum1=0;
	while(t--){
		scanf("%d", &s);
		sum += 300-s;
		if(sum > 100){
			sum1+=sum/100;
			sum=sum%100;
		}else if(sum < 0){
			printf("-%d\n", 12-t);
			return 0;
		}
	}
	printf("%d" ,sum1*120+sum);
	return 0;
}