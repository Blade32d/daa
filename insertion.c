#include <stdio.h>

void printar(int a[], int n)
{
    for (int i = 0;i < n;i++)
    {
        printf("%d ", a[i]);
    }
}

void insertion(int a[], int n)
{
    for (int i = 1;i < n;i++)
    {
        int t = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > t)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
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
    insertion(a, n);
    printf("\n");
    printar(a, n);
    return 0;
}