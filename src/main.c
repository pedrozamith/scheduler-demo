#include <stdio.h>

int main() {
  int a[5];
  int n, i, j, flag_print;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (i=1; i <= n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
	flag_print = 0;
  
	for (j=0; j<5; j++) {
		if (i % a[j] == 0){
			printf("%d", j);
			flag_print = 1;
		}	
	}
	if (flag_print == 0)
		printf("-");
	
	printf("\n");
  }

  return 0;
}
