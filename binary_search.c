#include <stdio.h>

int binarys(int a[], int low, int high, int key)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == key)
            return mid;
        if (a[mid] > key)
            return binarys(a, low, mid - 1,key);
        else
            return binarys(a, mid + 1, high,key);
    }

    return -1;
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
    int c = binarys(a, 0, n - 1, key);
    if (c == -1)
        printf("Not found \n");
    else
        printf("Element found at %d index", c);
}