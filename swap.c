#include <stdio.h>

void swapWithTemp(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("The value of first after swapping is %d\n", a);
    printf("The value of second after swapping is %d\n", b);
}

void swapWithoutTemp(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of first after swapping is %d\n", a);
    printf("The value of second after swapping is %d\n", b);
}

int main() {
    int x, y, choice;
    
    printf("Enter the first and second variables: ");
    scanf("%d %d", &x, &y);
    
    printf("Enter the method you want to use for swapping:\n");
    printf("1. With temporary variable\n");
    printf("2. Without temporary variable\n");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            swapWithTemp(x, y);
            break;
        case 2:
            swapWithoutTemp(x, y);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}


// swap values with temp and without temp