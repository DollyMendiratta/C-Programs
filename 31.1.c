#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of elements: ");
    scanf("%d", &n);
    int num[n], i;

    for (i=0;i<n;i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }

    int s;
    printf("Enter the elements you wanna search:");
    scanf("%d",&s);
    
    for (i=0;i<n;i++)
    {
        if(num[i]==s)
        {
        	printf("Found the number at index %d\n",i);
		}
    }

    return 0;
}