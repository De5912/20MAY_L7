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
    else if (number == 3) {
    printf("You chose Three.\n");
    }
    else if (number == 4) {
    printf("You chose Four.\n");
    }
    else {
    printf("Invalid choice. Please enter a number between 1 and 4.\n");
}
    return 0;
}

