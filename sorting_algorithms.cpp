/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdlib.h>
#include <stdio.h>
#include "sorting_algorithms.h"
#include "stopwatch.h"

void init_random(int * arr, int size)
{
for (int i = 0; i < size; i++)
{
  arr[i] = rand() % 10;
}
}
void bubble_sort(int * arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (arr[j] < arr[i])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
void insertion_sort(int * arr, int size)
{
  int key;
  for (int i = 1; i < size; i++)
   {
       key = arr[i];
       int j = i-1;

       while (j >= 0 && arr[j] > size)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
