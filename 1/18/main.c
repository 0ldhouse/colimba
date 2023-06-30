#include <stdio.h>
#include <string.h>

#define MAX_LINE 1000
void reverse(char s[]);
int main(){
chr line [MAX_LINE];
while (fgets(line,MAX_LINE,stdin)!=NULL)}
reverse (line);
printf("%s",line);
}
return 0;
}
void reverse (char s[]){
int length = strlen(s);
int i, j ;
char temp;
 for (i=0,j=length-1; i<j;i++,i--){
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    }

 }


