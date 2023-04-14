#include <stdio.h>
 
int main()
{
    int i, j, input[20] = {0}, size, count[20] = {0}, num = 0, n = 1, lim = 0, freq;
     
    printf("Enter the limit : "); scanf("%d", &size);
    printf("Enter the set of numbers\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &input[i]);
    }
    for (i = 0; i < size - 1; i++)
    {
        freq = 0;
        for (j = i + 1; j < size; j++)
        {
            if (input[i] == input[j]) {
                freq++;
            }
        }
        if ((freq > lim) && (freq != 0)) {
            num = 0;
            lim = freq;
            count[num] = input[i];
            num++;
        }
        else if (freq == lim) {
            count[num] = input[i];
            num++;
        }
    }
    for (i = 0; i < size; i++)
    {
        if (input[i] == count[i]) 
            n++;
        }
        if (n == size)
            printf("No mode");
        else
        {
            printf("\nMode\t= ");
            for (i = 0; i < num; i++)
                printf("%d ",count[i]);
        }
        return 0;
    }
