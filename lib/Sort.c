#include <stdio.h>

void bubbleSort(int array[], int amountNumbers)
{
  int left, right;

  for (int i = 0; i < amountNumbers; i++)
    {
      for (int j = amountNumbers - 1; j > 0; j--)
        {
          left = array[j-1];
          right = array[j];

          if (left > right)
            {
              array[j] = left;
              array[j-1] = right;
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

void insertionSort(int array[], int amountNumbers)
{
  int swap;

  for (int i = 0; i < amountNumbers; i++)
    {
    for (int j = 0; j < amountNumbers - 1; j++)
      {
        if (array[j] > array[j+1])
          {
            swap = array[j];
            array[j] = array[j+1];
            array[j+1] = swap;
          }
      }
    }
}
