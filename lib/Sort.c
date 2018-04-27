#include <stdio.h>

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

void selectionSort(int array[], int amountNumbers)
{
  int min;
  int swap;

  for (int i = 0; i < amountNumbers - 1; i++)
    {
      min = i;

      for (int j = i + 1; j < amountNumbers; j++)
        {
          if (array[min] > array[j])
            {
              min = j;
            }
        }

      swap = array[i];
      array[i] = array[min];
      array[min] = swap;
    }
}
