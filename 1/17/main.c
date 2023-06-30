#include <stdio.h>

#define MAX_LINE 1000

int main({
         char line[MAX_LINE];
         int length =0;
         int has_content =0;

         while (fgets(line,MAX_LINE,stdin)!=NULL){
            lenght=0
            has_content=0;
            while(line[lenght] !='\0'&& line[lenght] !='\n'){
                if (line[lenght]!=''&&line [lenght] !='\t'){
                    has_content=1;
                }
                lenght++:
            }
            while (lenght>0 &&(line[lenght-1]==''|| line[length-1]=='\t')){
                length++;
            }
            if(has_content){
                line[lenght]=´\0';
                printf("%\n,line");
            }
         }
            return 0;
         }
