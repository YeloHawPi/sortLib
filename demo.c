#include <stdio.h>
#include "lib/Array.h"
#include "lib/Sort.h"

int arr[50], amountNumbers;

void sortingType();

int main(void)
{
  printf("\n");

  printf("Enter amount of numbers: ");
  scanf("%d", &amountNumbers);

  printf("\n");

  inputArray(&arr[50], amountNumbers);

  printf("\n");

  sortingType();

  printf("\n");

  return 0;
}

void sortingType()
{
  unsigned char select;
  printf("Select a sorting type\n\n[1] Bubble Sort\t [2] Selection Sort\t Insertion Sorting [3]\n");
  printf("=> ");
  scanf("%s", &select);
  printf("\n");

  if (select == '1')
    {
      printf("--- Before Sorting ---\n");
      printArray(&arr[50], amountNumbers);
      printf("\n");
      printf("--- After Bubble Sorting ---\n");
      bubbleSort(&arr[50], amountNumbers);
      printArray(&arr[50], amountNumbers);
      printf("\n");
    }

  if (select == '2')
    {
      printf("--- Before Sorting ---\n");
      printArray(&arr[50], amountNumbers);
      printf("\n");
      printf("--- After Selection Sorting ---\n");
      selectionSort(&arr[50], amountNumbers);
      printArray(&arr[50], amountNumbers);
      printf("\n");
    }

  if (select == '3')
    {
      printf("--- Before Sorting ---\n");
      printArray(&arr[50], amountNumbers);
      printf("\n");
      printf("--- After Insertion Sorting ---\n");
      insertionSort(&arr[50], amountNumbers);
      printArray(&arr[50], amountNumbers);
      printf("\n");
    }
}
