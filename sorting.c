// Online C compiler to run C program online
#include <stdio.h>

void bubbleSort (int arr[], int len) {
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - 1 - i; j++ ){
            if( arr[j] > arr[j + 1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insetionSort (int arr[], int len){
    for(int i = 1; i < len; i++){
        int temp = arr[i];
        int j;
        for(j = i; j > 0 && temp < arr[j - 1]; j--){
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
}