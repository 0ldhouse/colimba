#include <stdio.h>
#include <stdio.h>
/*1.8*/
int main()
{
    int c,blanks,tabs,n1;
    blanks=tabs=n1;
    while ((c=getchar()) !=EOF){
         if(c =="")

        ++blanks;
        else if (c=='\t')
        ++tabs;
        else if (c=='\n')
        ++n1;
}
printf ("Blanks: %d\n", blanks);
printf ("Tabs:%d\n",tabs);
printf ("Newlines:%d\n",n1);
return 0;
}
