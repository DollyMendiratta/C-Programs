#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of elements: ");
    scanf("%d", &n);
    int num[n], i, max, min;

    for (i=0;i<n;i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }

    max= num[0];
    min =num[0];

    for (i=0;i<n;i++)
    {
        if(num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }

    printf("The Maximum Number is: %d\nThe Minimum Number is: %d", max, min);

    return 0;
}