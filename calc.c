#include <stdio.h>
#include <string.h>

void calculation(double number1, double number2, double *result);

main()
{
  double number1;
  double number2;
  double result;
  /*double result;*/
  printf("enter your number: ");
  scanf("%lf", &number1);
  printf("enter another number: ");
  scanf("%lf", &number2);
  calculation(number1, number2, &result);
  printf("Result: %lf\n", result);
  for (;;) {
    char exit[6]; 
    printf("type exit to quit: ");
    scanf("%s", exit);
    if (strcmp(exit, "exit") == 0) {
      break;
    }
  }
}


 void calculation(double number1, double number2, double *result) 
{
  char operator;
  printf("choose an operator (+, -, x, /): ");
  scanf(" %c", &operator);
  switch (operator) {
    case '+':
      *result = number1 + number2;
      break;
    case '-':
      *result = number1 - number2;
      break;
    case 'x':
      *result = number1 * number2;
      break;
    case '/':
      if (number2 == 0) {
        printf("Error: Division By Zero");
        return;
      }
      *result = number1 / number2;
      break;
    default:
      printf("Invalid Operator");
      return;
  }
}
