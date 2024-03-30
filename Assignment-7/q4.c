#include <stdio.h>

int main() {

    int height;

    printf("Height> ");
    scanf("%d", &height);

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
