#include <stdio.h>
#include <string.h>
/*thisisamessage isamess*/
int main(void){
	char parent[100], child[100];
	int i, j, k;
	scanf("%s %s", parent, child);

	for(i = 0; i < strlen(parent); i++){
		for(j = 0; j < strlen(child); j++){
			if(parent[i] == child[j]){
				i++;
			}else{
				i -= j;
				break;
			}
		}
		if(j == strlen(child)) break;
	}
	printf("%d\n", i - j + 1);
	return 0;
}
