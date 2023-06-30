#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 1000
#define FOLD_WIDTH 80
int main(){
char line [MAX_LINE];
char folded_line[MAX_LINE];
int length= 0;
int i,j,k;

while (fgets(line,MAX_LINE, stdin) !NULL){
    length=0;
    while(line[length] !='\0'&& line [length] != '\n')
        length++;

    if (length>FOLD_WIDTH){
        i=FOLD_WIDTH - 1;
        while (i>0 && line[i] != ''&& line [i] != '\t'){
            i--;
        }
        if (i==0) {
            i= FOLD_WIDTH -1;
        }
        for (j=0;j<i;j++){
            folded_line[j]= line[j];
        }
        while (line[i] != ''|| line[i] == 't'){
            i++;
        }
        while (line[i] !='\0' && line[i] != ''n){
            length--;
        putchar(line[line]);
        i++;
        }


    }else {
        printf("%s",line);
    }
    }
    return 0;
}
