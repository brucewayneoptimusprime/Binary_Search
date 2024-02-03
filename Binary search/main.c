#include <stdio.h>

int binsea(int a[], int key, int l, int r)
{

    if(l>r) {return -1;}
    int mid = l+(r-l)/2;
    if(a[mid]==key){return mid;}
    else if(a[mid]>key){return binsea(a,key,l,mid-1);}
    else return binsea(a,key,mid+1,r);
}

int main()
{
    int a[]={1,2,3,4,5,6};
    int key = 4;
    int index = binsea(a,key,0,5);
    printf("It is at position %d", index);
    return 0;
}
