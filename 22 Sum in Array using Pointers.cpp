#include <stdio.h>
#include <malloc.h>
int main(){
   int i, n, sum = 0;
   int *ptr;
   printf("Enter size of array :");
   scanf("%d", &n);
   ptr = (int *) malloc(n * sizeof(int));
   for (i = 0; i < n; i++){
      scanf("%d", ptr + i);
   }
   
   for (i = 0; i < n; i++){
      sum = sum + *(ptr + i);
   }
   printf("Sum of all elements in an array is = %d", sum);
   return 0;
}
