#include <stdio.h>
#include "function_pointer.h"
void print_name(char *name, void (*f)(char *)) {
    f(name);
}

void print_normal(char *name) {
    printf("Name: %s\n", name);
}

void print_reversed(char *name) {
    int i;
    for (i = 0; name[i] != '\0'; i++);
    for (i--; i >= 0; i--) {
        printf("%c", name[i]);
    }
    printf("\n");
}

int main() {
    char name[] = "John Doe";
    
    printf("Printing normal:\n");
    print_name(name, print_normal);
    
    printf("Printing reversed:\n");
    print_name(name, print_reversed);
    
    return 0;
}

