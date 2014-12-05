#include <stdio.h>

int main(){
	int w, i, sum=0;
	scanf("%d", &w);
	while(w--){
		scanf("%d", &i);
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}