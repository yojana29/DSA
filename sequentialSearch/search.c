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
 int sequentialSearch(int arr[], int n , int key){
    for(int i = 0 ; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
 }
 int main(){
    int n , key , maxvalue; 
    printf("Enter the size of array");
    scanf("%d",&n);

    printf("Enter the maxvalue of randomnumbers generated");
    scanf("%d",&maxvalue);

    printf("Enter the number you want to search");
    scanf("%d",&key);


    int arr[n];

    generateRandomNumbers(arr , n , maxvalue);
    printArray(arr , n );

    int result = sequentialSearch(arr , n , key);
    if(result == -1){
        printf("Element %d is not found! in the given array",key);
    }
    else{
        printf("Element %d is found in the position %d",key , result);
    }
 }