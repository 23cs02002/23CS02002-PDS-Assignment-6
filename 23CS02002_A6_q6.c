#include <stdio.h>

int calcAvgTemp(int arr[][7], int num_cities)
{
    for (int i = 0; i < num_cities; i++)
    {
        float avg_temp = 0;

        printf("Enter the temperature of city %d for the whole week:\n", i + 1);
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &arr[i][j]);
            avg_temp += (float)arr[i][j] / 7;
        }

        printf("Average temperature for city %d for the whole week is: %.2f\n", i + 1, avg_temp);
    }
}

int main()
{
    int num_cities;
    printf("Enter the number of cities:\n");
    scanf("%d", &num_cities);

    int arr[num_cities][7];

    calcAvgTemp(arr, num_cities);

    return 0;
}