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
