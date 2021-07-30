//Despoina zografidou 321/2016041

#include<stdio.h>

int A[]= {1,3,5,7,9,11,15,17};

int BinarySearch(int left,int right,int key)
{
    int middle=(left+right)/2;

if(left<= right)
{

    if(key > A[middle])
        return BinarySearch(middle+1,right,key);

    if(key < A[middle])
        return BinarySearch(left,middle-1,key);

    if (key == A[middle])
        return middle;

}
else
        return -1;
}


int main()
{
    int key;
    int pos;

    printf("Give me an element (integer): ");
    scanf("%d",&key);

    pos=BinarySearch(0,7,key);

    if (pos!=-1)
        printf("The element is in the position = %d \n",pos);
    else
        printf("The element is not exist !!!\n");
}
