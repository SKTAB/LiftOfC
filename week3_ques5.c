#include <stdio.h>
int largest(int array[] ,int size)
{int largest = array[0];

        for (int i = 1; i < size; i++)
        {
            if (largest < array[i])
            largest = array[i];
        }
	return largest;
}
int main()
{
	int size, i;
   printf("\n Enter the size of the array: ");
        scanf("%d", &size);
        int array[size];

        printf("\n Enter %d elements of  the array: \n", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &array[i]);
        }
    int max = largest(array, size);
        printf("largest element is %d", max) ;
}
