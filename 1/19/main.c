#include <stdio.h>

#define MAX_LINE 1000
int main(){
char line [MAX_LINE]
int length = 0;
int has_content =0;
while (fgets(line,MAX_LINE,stdin) !=NULL){
    lenght = 0
    has_content = 0;
    while (line[length] !='\0' && line [length] != '\n'){
        if (line[length] != '' && line [length] != '\t'){
            has_content =1;
        }
        length++;
    }
    while (length >0&&(line[length -1]=='' || line [length -1]=='\t')){

    }
    if(has_content){
        line[length] ='\0 ;
        printf("%s\n, line);'
    }
}
return 0;

}
