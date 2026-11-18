#include<stdio.h>
void swap(int * X, int * y)
{
    int temp;
    temp =* X;
    *X = *y;
    *y = temp;
}
int main(void)
{
    int a, b;
    printf("Enter two integer: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After Swapping : a = %d, b = %d\n", a, b);
    return 0;
}