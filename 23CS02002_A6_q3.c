#include <stdio.h>

int reverse_array(int arr[], int left_ele, int right_ele)
{   
    int num_ele= right_ele+1;
    if (left_ele == right_ele || (right_ele==num_ele/2 && num_ele!=2))
    {
        return 0;
    }

    int temp = arr[right_ele];
    arr[right_ele] = arr[left_ele];
    arr[left_ele] = temp;

    reverse_array(arr, left_ele + 1, right_ele - 1);
}

int main()
{
    int num_ele;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &num_ele);

    if (num_ele > 0)
    {
        int arr[num_ele];
        printf("Enter the elements of the array:\n");
        for (int i = 0; i < num_ele; i++)
        {
            scanf("%d", &arr[i]);
        }

        if (num_ele > 1)
        {
            reverse_array(arr, 0, num_ele - 1);
        }
        printf("After reversing, array becomes:\n");
        for (int i = 0; i < num_ele; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    else
    {
        printf("Invalid input");
    }
    return 0;
}