#include <stdio.h>
#include <string.h>


int main() {
    //------//
    int i;
    char a[20];
    scanf ("%s", a);
    size_t l = strlen(a);
    if (l % 2 == 0)
    {
        return 0;
    }
    //-----//
    puts ("\nOUTPUT:");
    //----//
	if (l > 5 && l % 2 == 0 && l < 20)
    {
        return 0;
    }
    else 
    {
    	for (i = (l/2 - 1) - 1; i < (l/2+1)+2; i++)
        {
            printf ("%c", a[i]);
        }
	}
}
