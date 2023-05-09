#include "functions.h"

int main() {

    puts("Task1\n"
         "Enter the amount of elements");

    int amount_of_elements;

    if (scanf("%d", &amount_of_elements)) {

        fflush(stdin);

        int *array = (int *) malloc(sizeof(int) * amount_of_elements);
        input_array(amount_of_elements, array);

        shell_sort(array, amount_of_elements);

        show_array(amount_of_elements, array);

        free(array);

    } else puts("Incorrect amount of elements");

    puts("\n\nTask2\n"
         "Input your string here:");

    char *string = NULL;

    fflush(stdin);

    string = input_string(string);
    if (string != NULL) {
        puts("This is your string:");
        printf("%s", string);
    } else puts("Sting is empty");

    free(string);

    return 0;
}
