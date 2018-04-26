#include <stdio.h>

void inputArray(int array[], int amountNumbers)
{
  int inputNumbers;

  for (int i = 0; i < amountNumbers; i++)
    {
      printf("Enter the %d number: ", i+1);
      scanf("%d", &inputNumbers);
      array[i] = inputNumbers;
    }

  printf("\n");
}

void printArray(int array[], int amountNumbers)
{

  for (int i = 0; i < amountNumbers; i++)
    {
      printf("[%d] ", array[i]);
    }

  printf("\n");
}

void bubbleSort(int array[], int amountNumbers)
{
  int left, right;

  for (int i = 0; i < amountNumbers; i++)
    {
      for (int i = amountNumbers - 1; i > 0; i--)
        {
          left = array[i-1];
          right = array[i];

          if (left > right)
            {
              array[i] = left;
              array[i-1] = right;
            }
        }
    }
}