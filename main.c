//Selection Sort
#include <stdio.h>

void citireArray(int arr[], int n) {
    printf("Introduceti elementele in array:\n");
    for(int i=0; i < n; i++) {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
}

void afisareArray(int arr[], int n) {
    for(int i=0; i < n; i++) {
        printf("arr[%d]= %d\n", i, arr[i]);
    }
}

void selectionSort(int arr[], int n) {
    for (int i=0; i < n-1; i++) {
        int min= i;
        for(int j= i+1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min=j;
            }
        }
        int swap= arr[min];
        arr[min]= arr[i];
        arr[i]= swap;
    }
}

int main() {
    int arr[100];
    int n;
    
    printf("Cate elemente doriti sa contina array-ul: ");
    scanf("%d", &n);
    
    citireArray(arr, n);
    
    printf("Elemnetele array-ului inainte sa fie sortate:\n");
    afisareArray(arr, n);
    printf("Elemnetele dupa sortare:\n");
    selectionSort(arr, n);
    afisareArray(arr, n);
}
    

