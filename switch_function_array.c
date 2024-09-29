#include <stdio.h>

int process_array(int array[], int size, int operation); // Function declaration

int main() {
    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int op;
    printf("\nChoose an operation:\n");
    printf("1. Print the array\n");
    printf("2. Sum of the elements in the array\n");
    printf("3. Maximum element in the array\n");
    printf("Enter your choice: ");
    scanf("%d", &op);


    int result = process_array(arr, size, op);

    if (op == 2) {
        printf("Sum of array elements: %d\n", result);
    } else if (op == 3) {
        printf("Maximum element in the array: %d\n", result);
    }

    return 0;
}


int process_array(int array[], int size, int operation) {
    int i, res = 0;

    switch (operation) {
        case 1: 
            printf("Array elements: ");
            for (i = 0; i < size; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            return 0; 

        case 2: 
            for (i = 0; i < size; i++) {
                res += array[i]; 
            }
            return res; 

        case 3: 
            res = array[0]; 
            for (i = 1; i < size; i++) {
                if (array[i] > res) {
                    res = array[i]; 
                }
            }
            return res; 

        default: 
            printf("Invalid operation!\n");
            return -1; 
    }
}
