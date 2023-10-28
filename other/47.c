#include <stdio.h>
#include <string.h>

int main ()
{
    //------//
    char a[3];
    int i, j;
    scanf("%2s", a);
    //------//
    puts("\nOUTPUT:");
    //------//
    for(i = 0; i < 2; i++) {
        for(j = 7; j >= 0; j--) {
            printf("%d", (a[i] & (1 << j)) ? 1 : 0);
        }
    }
}   
