#include <stdio.h>

void printar(int a[], int n)
{
    for (int i = 0;i < n;i++)
    {
        printf("%d ", a[i]);
    }
}

int partition(int a[], int l, int h) {
    int p = a[l];
    int i = l + 1;
    int j = h;
    int temp;
    do {
        while (a[i] <= p)
        {
            i++;
        }
        while (a[j] > p)
        {
            j--;
        }
        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    temp = a[l];
    a[l] = a[j];
    a[j] = temp;
    return j;


}

void quicksort(int a[], int l, int h) {
    int p;
    if (l < h) {
        p = partition(a, l, h);
        quicksort(a, l, p - 1);
        quicksort(a, p + 1, h);
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
    quicksort(a, 0, n - 1);
    printf("\n");
    printar(a, n);
    return 0;
}