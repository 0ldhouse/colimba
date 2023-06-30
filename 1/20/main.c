#include <stdio.h>
#define MAX_LINE 1000
#define TAB_WIDTH 8

int main(){
char line [MAX_LINE];
int length =0;
int i,j,k;

while (fgets(line,MAX_LINE,stdin)!=NULL){
    length =0;
    for (i = 0; line[i] != '\0' && line [i] != '\n;i++'){
        if (line)[i] =='\t'){
        for (j=length;j<lengt + TAB_WIDTH -(length % TAB_WIDTH); j++){
            putchar('');
        }
        length=j;
    }else{
    putchar (line[i]);
    }
}
if (line[i] =='\n'){
    putchar(line[i]);
}
}
return 0;
