#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//generate random numbers
void generateRandomNumbers(int arr[], int n, int maxvalue){
    srand(time(0));//	Seeds with current time, so each run is different and generate new numbers everytime
    for(int i = 0 ;i < n;i++){
        arr[i] = rand() % maxvalue;
    }
 }

 //printing the generated random numbers
void printArray(int arr[], int n){
    printf("The generated arrays are:");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//swaping the array elements

void swapElements(int *a, int *b){
    int c;
     c = *a;
    *a = *b;
    *b = c;
}

void bubbleSort(int arr[], int n){
   
    for(int round = 0; round < n; round++){
        for(int pass = 0; pass < n-round-1; pass++){
            if(arr[pass] > arr[pass+1]){
                swapElements(&arr[pass],&arr[pass+1]);
            }
        }
    }
    printf("\n");
}

int main(){
    int n , maxvalue;
    printf("Enter the size of array");
    scanf("%d",&n);

    printf("Enter the maxvalue of generated random numbers");
    scanf("%d",&maxvalue);

    int arr[n];
    generateRandomNumbers( arr, n , maxvalue);
    printArray(arr , n);

    bubbleSort(arr, n);

    printf("The sorted array are:");
    printArray(arr, n);
    return 0;
    


}