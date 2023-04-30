#include "functions.h"
#include "macros.h"

void input_array(int amount_of_elements, int *array) {
    int input;
    for (int i = 0; i < amount_of_elements; ++i) {
        puts("Enter an element");
        if (scanf("%d", &input)) {
            fflush(stdin);
            array[i] = input;
        } else {
            puts("Error");
            exit(-1);
        }
    }
}

void show_array(int amount_of_elements, int *array) {
    for (int i = 0; i < amount_of_elements; ++i)
        printf("%d ", array[i]);
}

void shell_sort(int *array, int amount_of_elements) {

    int distance = amount_of_elements / 2;

    while (distance >= 1) {
        for (int i = 0; i < (amount_of_elements - distance); ++i) {
            int j = i;
            while (j >= 0) {
                if (array[j] > array[j + distance])
                    swap(int, array[j + distance], array[j])
                j--;
            }
        }
        distance /= 2;
    }
}

char *input_string(char *string) {
    char input;
    for (int i = 0; (input = getchar()) != '\n'; ++i) {
        string = (char *) realloc(string, sizeof(char) * (i + 1));
        string[i] = input;
        string[i + 1] = '\0';
    }
    return string;
}
