// Print Word for a given Numbers

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number (1 to 10): ");
    scanf("%d", &num);

    switch (num) {
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        case 3: printf("Three"); break;
        case 4: printf("Four"); break;
        case 5: printf("Five"); break;
        case 6: printf("Six"); break;
        case 7: printf("Seven"); break;
        case 8: printf("Eight"); break;
        case 9: printf("Nine"); break;
        case 10: printf("Ten"); break;
        default: printf("Out of range");
    }

    return 0;
}