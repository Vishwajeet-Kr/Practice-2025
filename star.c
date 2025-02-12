/*
#include<stdio.h>
int main() {
    int rows = 5;
    for(int i=1;i<=rows;i++){
        for(int j = 1;j<=rows;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
    */

/*
#include<stdio.h>
int main() {
    int rows = 5;
    for(int i=1;i<=rows;i++){
        for(int j = 1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
    */

    /*
    #include<stdio.h>
    int main() {
        int rows = 5;
        for(int i=1;i<=rows;i++){
            for(int j = i;j<=rows;j++){
                printf("* ");
            }
            printf("\n");
        }
        return 0;
    }
        */

        // Code for an Equilateral Triangle
       /*
        #include<stdio.h>
        int main() {
            int rows = 10;
            for(int i=1;i<=rows;i++){
                for(int j = 1;j<=rows - i;j++){
                    printf(" ");
                }
                for (int k = 1; k <= i; k++) {
                    printf("* ");
                }
                printf("\n");
            }
            return 0;
        }
            */


        // Code for Two mirrored number sequences
        #include <stdio.h>
        int main() {
            int rows = 4;
            
            for (int i = 1; i <= rows; i++) {
                    // Print first increasing sequence
                for (int j = 1; j <= i; j++) {
                        printf("%d", j);
                    }
            
                    // Print spaces (2 * (rows - i))
                for (int s = 1; s <= 2 * (rows - i); s++) {
                        printf(" ");
                    }
            
                    // Print second decreasing sequence
                for (int j = i; j >= 1; j--) {
                        printf("%d", j);
                    }
            
                    printf("\n");
                }
            
                return 0;
        }
            