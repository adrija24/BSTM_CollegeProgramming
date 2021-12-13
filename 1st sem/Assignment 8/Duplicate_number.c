#include <stdio.h>
int main()
{
    int i=0,num=0,j=0,flag=0;
    printf("Enter the array size:");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements: \n");
    for ( i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        for ( j=i+1; j < num; j++)
        {
            if (arr[i]== arr[j])
            {
                flag=1;
                break;
            }
            
        }
        
    }
    if (flag==1)
    {
        printf("Duplicate\n");
    }
    else
    {
        printf("No duplicate");
    }
}