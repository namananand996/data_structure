#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n, int ar_size, int* ar) {
    // Complete this function
    int largest,i,x=0;
                     //for (i = 0; i < n; i++)
        //scanf("%d", &array[i]);
    largest = ar[0];
    for (i = 1; i < ar_size; i++)
    {
        if (largest < ar[i])
            largest = ar[i];
    }
   //	 printf("\n largest element present in the given array is : %d", largest);
    
    for(i=0;i< ar_size; i++)
    {
    	if(ar[i] == largest)
    	{
    		x++;
		}
	}
	return x;
    
}

int main() {
    int n,ar_i; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}
