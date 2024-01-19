#include <stdio.h>

int main() {
    int num_elements, i;

    printf("Input number of elements to be stored in array: ");
    scanf("%d", &num_elements);

    int first_array[num_elements];
    int second_array[num_elements];


    printf("Enter elements for the first array:\n");
    for (i = 0; i < num_elements; i++) {
        printf("Element %d: ", i);
        scanf("%d", &first_array[i]);
    }


    for (i = 0; i < num_elements; i++) {
        second_array[i] = first_array[i];
    }

    printf("The elements stored in the first array are: ");
    for (i = 0; i < num_elements; i++) {
        printf("%d ", first_array[i]);
    }
    printf("\n");


    printf("The elements stored in the second array are: ");
    for (i = 0; i < num_elements; i++) {
        printf("%d ", second_array[i]);
    }
    printf("\n");

    return 0;
}

