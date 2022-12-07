#include <stdio.h>

int main()
{
    int n, s=0;
    int a[n];

    printf("\nWrite how many time you enter any number - ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number - ");
        scanf("%d",&a[i]);

        s=s+a[i];
    }
    
    printf("Sum of the array is %d",s);

    return 0;
}