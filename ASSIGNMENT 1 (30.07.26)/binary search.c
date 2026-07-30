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

int binarysearch(int arr[], int size,int element){
    int low ,mid,high;
    low= 0;
    high = size -1;


    while (low<=high){
        mid =(low+high)/2;
        if(arr[mid]==element){
            return mid;

        }
        if (arr[mid]<element){
            low=mid +1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}




int main(){
    int arr[]={2,8,9,16,18,26,38,48,51,95};
    int size= sizeof(arr)/sizeof(int);
    int element =26;
    int searchIndex= binarysearch(arr,size,element);
    printf("The element %d was found at index %d \n" ,element ,searchIndex );



    return 0;





}


