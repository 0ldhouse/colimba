#include <stdio.h>
#include <stdlib.h>

/*1.10*/
int main()
{
    int c;
    while ((c=getchar()) !=EOP){
        if (c == '\t'){
            putchar ('\\');
            putchar ('t');
        } else if (c== '\b'){
        putchar('\\');
        putchar ('b');
        } else if (c=='\\'){
        putchar ('\\');
        putchar('\\');
        }else {
        putcher(c);
        }
    }
        return 0;
}
