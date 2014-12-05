#include <stdio.h>

#define MAX_SIZE 100+10

int main(){
	char ch[MAX_SIZE];
	int i=0;
	while((ch[i]=getchar())!=EOF) i++;
	while(i--) printf("%c", ch[i]);
	printf("\n");
	return 0;
}