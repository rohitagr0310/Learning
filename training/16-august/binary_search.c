#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter Array Size:");
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("enter the element - ");
        scanf("%d", &arr[i]);
    }
    
    // selection sort
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Enter Number To Find:");
    int x;
    scanf("%d", &x);
    
    //for binary search
    int high = n - 1, low = 0, mid;

    mid = (high - low) / 2;

    while (low > high)
    {
        if (arr[mid] == x)
        {
            printf("found at %d",mid++);
            break;
        }
        else if (arr[mid] > x)
        {
            low = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(low > high)
    {
        printf("Not found");
    }
    
    return 0;
}