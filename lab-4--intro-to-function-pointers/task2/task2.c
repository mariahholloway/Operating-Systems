// help from shane and youtube 

#include <stdio.h>
#include <stdlib.h>

//array of function pointers 
int (*operation_ptrs[5]) (int a, int b);

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int end(int a, int b);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int operation;
  int op1, op2;
  int (*operation_ptrs[]) (int, int) = {add, subtract, multiply, divide, end};
  
  while (1){
    printf("Operand 'a': ");
    scanf("%d", &op1);
    printf("Operand 'b': ");
    scanf("%d", &op2);
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
    scanf("%d", &operation);
    printf("Result = %d\n", ((*operation_ptrs[operation]) (op1, op2)));
  }
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) {
  printf("Adding 'a' and 'b'\n"); 
  return a + b; 
}

int subtract (int a, int b) {
  printf("Subtracting 'a' and 'b'\n");
  return a - b;
}

int multiply (int a, int b) {
  printf("Multiplying 'a' and 'b'\n");
  return a * b;
}

int divide (int a, int b) {
  printf("Dividing 'a' and 'b'\n");
  return a / b;
}

int end(int a, int b) {
  exit(0);
}
