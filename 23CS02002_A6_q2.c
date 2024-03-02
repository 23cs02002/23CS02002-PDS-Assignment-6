#include <stdio.h>

int nosGreaterThanAvg(int arr[1000], int num_ele)
{
    float avg = 0;
    for (int i = 0; i < num_ele; i++)
    {
        avg += (float) arr[i] / num_ele;
    }

    for (int i = 0; i < num_ele; i++)
    {
        if (arr[i] > avg)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int num_ele, arr[1000];
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &num_ele);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < num_ele; i++)
    {
        scanf("%d", &arr[i]);
    }

    nosGreaterThanAvg(arr, num_ele);

    return 0;
}
