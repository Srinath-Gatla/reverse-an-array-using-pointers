#include <stdio.h>
void reverse_array(int *ptr, int n) 
{
    // Your logic here
    int temp;
    int * start , * end;
    for(start=ptr,end=ptr+n-1;start<end;start++,end--)
    {
        temp=*start;
        *start=*end;
        *end=temp;
    }
}
int main() 
{
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    reverse_array(arr, n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d", arr[i]);
        if(i < n-1)
        {
            printf(" ");
        }
    }
    return 0;
}
