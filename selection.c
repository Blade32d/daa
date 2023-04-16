#include <stdio.h>

void printar(int a[], int n)
{
    for (int i = 0;i < n;i++)
    {
        printf("%d ", a[i]);
    }
}

void selection(int a[], int n)
{
    int min;
    for (int i = 0;i < n;i++)
    {
        min = i;
        for (int j = i + 1;j < n;j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

int main() {
    int n;
    printf("enter n ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements ");
    for (int i = 0;i < n;i++) {
        scanf("%d", &a[i]);
    }
    printar(a, n);
    selection(a, n);
    printf("\n");
    printar(a, n);
    return 0;
}