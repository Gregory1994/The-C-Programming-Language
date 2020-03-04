#include <stdio.h>
#include <stdlib.h>

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0; // 序号从0开始
    high = n - 1;
    while (low <= high){
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;        
    }
    return -1;
}

int main()
{
    int x = 9;
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;

    int y = binsearch(x, v, n);
    printf("%d\n", y);
    system("pause");
}