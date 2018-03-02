/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
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
#include 

void start_stopwatch()
{
  int msec = 0, trigger = 10; /* 10ms */
  clock_t before = clock();

  do {
    clock_t difference = clock() - before;
    msec = difference * 1000 / CLOCKS_PER_SEC;
    iterations++;
  } while ( msec < trigger );

  printf("Time taken %d seconds %d milliseconds (%d iterations)\n",
    msec/1000, msec%1000, iterations);
}
float elapsed_time()
{

}
void stopwatch()
{


}
