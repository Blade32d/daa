#include <stdio.h>

void printar(int a[], int n)
{
    for (int i = 0;i < n;i++)
    {
        printf("%d ", a[i]);
    }
}

void merge(int a[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int l[n1], right[n2];
    for (int i = 0;i < n1;i++)
        l[i] = a[p + i];
    for (int j = 0;j < n2;j++)
        right[j] = a[q + j + 1];
    int i = 0, j = 0, k = p;
    while (i < n1 && j < n2)
    {
        if (l[i] <= right[j])
        {
            a[k] = l[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = l[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }

}

void m_sort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        m_sort(a, p, q);
        m_sort(a, q + 1, r);
        merge(a, p, q, r);
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
    m_sort(a, 0, n - 1);
    printar(a, n);
}