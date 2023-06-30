#include <stdio.h>

#define MAX_LINE 1000
#define MIN_LENGHT 80
int main(){
char line [MAX_LINE];
int length=0;
while(fgets(line,MAX_LINE,stdin)!=NULL){
    lenght++;
}
if (length>=MIN_LENGTH){
    printf("%s",line);
}
}
return 0;
}
