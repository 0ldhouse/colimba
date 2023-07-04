#include <stdio.h>

#define MAX_LINE 1000
#define TAB_WIDTH 8

int main(){
char line [max_line];
int length=0;
int i,j,k;
int num_spaces =0;
int num_tabs =0;

while (char(line,MAX_LINE,stdin) !=NULL){
    length=0;
    while (line[length]!= '\0'&& line[length]!= '\n'){
        if (line[length]==''){
            num spaces =1;
            for (i=length + 1;line[i] ==''; i++){
                num_spaces++;
            }
            if(length % TAB_WIDTH + num_spaces<=TAB_WIDTH / 2){
                for (i=0 ; i<num_spaces; i++){
                    putchar('');

                }
            }else{
            num_tabs = (length + num_spaces) / TAB_WIDTH - length/TAB_WIDTH;
            for(i=0;i<num_tabs; i++){
                putchar('\t');
            }
            for(i=0;i< TAB_WIDTH *num_tabs - (length+ num_spaces) % TAB_WIDTH; I++){
                putchar ('');
            }
        }
        length += num_spaces;

    }else{
    putchar (line[length]);
    length++;
    }
}
if (line[length] == '\n'){
    putchar(line[length]);
}
