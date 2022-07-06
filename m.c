#include <stdio.h>

int main()
{
    int no, c=1;
    float sum, avg;

    while (c<=10)
    {
        printf("Enter a number : ");
        scanf("%d" ,&no);

        sum =(float) sum + no;

        c++;
    }

    avg = (float) sum /10;

    printf("Average is %.2f", avg);
}
