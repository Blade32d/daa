#include <stdio.h>

void printar(int a[], int n)
{
    for (int i = 0;i < n;i++)
    {
        printf("%d ", a[i]);
    }
}

void maxheap(int a[], int n, int i)
{
    int lnf = i;
    int l = (2 * i) + 1;
    int r = (2 * i) + 2;
    while (l<n && a[l]>a[lnf])
    {
        lnf = l;
    }
    while (r<n && a[r]>a[lnf])
    {
        lnf = r;
    }
    if (lnf != i)
    {
        int temp;
        temp = a[lnf];
        a[lnf] = a[i];
        a[i] = temp;
        maxheap(a, n, lnf);
    }
}

void heap(int a[], int n)
{
    for (int i = n / 2 - 1;i >= 0;i--)
        maxheap(a, n, i);
    for (int i = n - 1;i >= 0;i--)
    {
        int temp;
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        maxheap(a, i, 0);
    }
}

void main()
{
    int n;
    printf("enter no of elements\n");
    scanf("%d", &n);
    int a[n];
    printf("enter value of elements\n");
    for (int i = 0;i < n;i++)
    {
        scanf("%d", &a[i]);
    }
    printar(a, n);
    printf("\n");
    heap(a, n);
    printar(a, n);
}