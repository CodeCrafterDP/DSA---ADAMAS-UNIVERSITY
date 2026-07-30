#include <stdio.h>

int linearsearch(int arr[], int size,int element){
    for (int i =0 ; i<size; i++)
    {
        if (arr[i]== element){
            return i;

        }
    }
    return -1;
} 
int main(){
    int arr[]={101,20,49,385,210,620,85,921,12,206};
    int size= sizeof(arr)/sizeof(int);
    int element =465;
    int searchIndex= linearsearch(arr,size,element);
    printf("The element %d was found at index %d \n" ,element ,searchIndex );



    return 0;





}


