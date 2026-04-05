#include <stdio.h>
 
int main() {
    char letra;


    for (int i = 1; i <= 30; i++) {
        letra = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c\t", letra);
            letra++;
        }
        printf("\n");
    }
    return 0;
}