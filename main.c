#include <stdio.h>
#include <stdlib.h>

void ArrayItemDel(int arr[], int index, int size)
{
    if(index >= size)
    {
        printf("Please enter the correct index number");
    }
    else
    {
        for(int i = index; i < size + 1; i++)
        {
            arr[i]=arr[i+1];
        }
        printf("The element in the array has been deleted successfully...\n");

        for(int i=0; i<size-1; i++)
        {
            printf("%d\t",arr[i]);

        }
    }
}

int main()
{

    int size,index;
    printf("How Many Will Be Produced?: ");
    scanf("%d",&size);
    int array[size];
    srand(time(0));
    for(int i=0; i<size; i++)
    {
        array[i]=rand()%100+1;
        printf("%d\t",array[i]);

    }
    printf("\n\n");
    printf("Enter the Sequence Number of the Value to be deleted from the array: ");
    scanf("%d", &index);
    ArrayItemDel(array,index - 1,size);

    return 0;
}
