#include <stdio.h>

int main(){
    int num1;
    printf("Enter the number of elements in the first array:\n");
    scanf("%d", &num1);

    int arr1[num1];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < num1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int num2;
    printf("Enter the number of elements in the second array:\n");
    scanf("%d", &num2);

    int arr2[num2];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < num2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int i,j;
    for (i = 0; i < num2; i++)
    {
        for (j = 0; j < num1; j++)
        {
            if (arr2[i]==arr1[j]){
                break;
            }
        }
        if (j == num1)
        {
            printf("The second array caanot be formed from the first array\n");
            return 0;
        }              
    }

    printf("The second array can be formed from the first array\n");
    

    return 0;
}