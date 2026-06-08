#include<stdio.h>

void intcon(int src1[], int size1,int src2[], int size2,int dst[])
{
    int k = 0;

    for(int i = 0; i < size1; i++)
    {
        dst[k++] = src1[i];
    }

    for(int i = 0; i < size2; i++)
    {
        dst[k++] = src2[i];
    }
}

int main()
{
    int src1[] = {1,2,3};
    int src2[] = {4,5,6};

    int size1 = 3;
    int size2 = 3;

    int dst[size1 + size2];

    intcon(src1, size1, src2, size2, dst);

    for(int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", dst[i]);
    }

    return 0;
}