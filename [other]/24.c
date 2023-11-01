#include <stdio.h>

int main()
{
    //----//
    int a, b, tich;
    int temp;
    scanf("%d%d", &a, &b);
    tich = a * b;
    /*printf("\nOUTPUT:\n");
    if (a == 0 && b == 0)
    {
        printf("Khong tim duoc ket qua");
    }*/
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    //----//
    puts("\nOUTPUT:");
    //----//
    printf("UCLN= %d\nBCNN= %d", a, tich / a);
}
