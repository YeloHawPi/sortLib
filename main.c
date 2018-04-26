#include <stdio.h>
#include "lib/Array.h"
#include "lib/Sort.h"

int arr[50], amountNumbers;

int main(void)
{
  printf("\n");

  printf("Enter amount of numbers: ");
  scanf("%d", &amountNumbers);

  printf("\n");

  inputArray(&arr[50], amountNumbers);

  printf("--- Before Sorting ---\n");
  printArray(&arr[50], amountNumbers);

  printf("\n");

  bubbleSort(&arr[50], amountNumbers);

  printf("--- After Bubble Sorting ---\n");
  printArray(&arr[50], amountNumbers);

  printf("\n");

  return 0;
}
