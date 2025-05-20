// branches_example.c
#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number (1 to 4): ");
    scanf("%d", &number);
    
    if (number == 1) {
        printf("You chose One.\n");
    }
    else if (number == 2) {
        printf("You chose Two.\n");
    }
    
    return 0;
}

