#include <stdio.h>

int main(){
	int w, min, max, num;
	scanf("%d", &w), w--;
	scanf("%d", &num), min=num, max=num;
	while(w--){
		scanf("%d", &num);
		num > max ? max = num : num < min ? min = num : 0;
	}
	printf("%d %d\n", min, max);
	return 0;
}
