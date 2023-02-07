#include <stdio.h>
int main() {
  double x, result;
  int n;
  int choice;
  printf("Enter the value of x: ");
  scanf("%lf", &x); 
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Enter your choice:\n");
  printf("1. Pow(x,n)\n");
  printf("2. Add(x,n)\n");
  printf("3. Sub(x,n)\n");
  printf("4. Mul(x,n)\n");
  printf("5. Div(x,n)\n");
  scanf("%d", &choice);
  switch (choice) {
    case 1:
      result = 1;
      for (int i = 0; i < n; i++) {
        result *= x;
      }
      printf("Pow(%.2lf, %d) = %.2lf\n", x, n, result);
      break;
    case 2:
      result = x + n;
      printf("Add(%.2lf, %d) = %.2lf\n", x, n, result);
      break;
    case 3:
      result = x - n;
      printf("Sub(%.2lf, %d) = %.2lf\n", x, n, result);
      break;
    case 4:
      result = x * n;
      printf("Mul(%.2lf, %d) = %.2lf\n", x, n, result);
      break;
    case 5:
      result = x / n;
      printf("Div(%.2lf, %d) = %.2lf\n", x, n, result);
      break;
    default:
      printf("Invalid choice.\n");
  }
  return 0;
}
