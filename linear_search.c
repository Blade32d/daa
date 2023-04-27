#include <stdio.h>

void linears(int a[], int n, int key)
{
    for (int i = 0;i < n;i++)
    {
        if (a[i] == key)
        {
            printf("found key at %d index", i);
            return;
        }
    }
    printf("Element not found");
}

void main()
{
    int n, key;
    printf("enter n ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements ");
    for (int i = 0;i < n;i++) {
        scanf("%d", &a[i]);
    }
    printf("enter key to search ");
    scanf("%d", &key);
    linears(a, n, key);
}