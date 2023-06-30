#include <stdio.h>
float fahrenheit_to_celsius(float fahrenheit);
int main(){
    float fahrenheit,celsius;
    printf("enter a temperature in fahrenheit:");
    scanf(%f,&fahrenheit);
    celsius=fahrenheit_to_celsius(fahenheit);
    prontf("%.2f fahrenheitis %.2f celsius\n",fahrenheit,celsius);
    return 0;
}
float fahrenheit_to_celsius(float fahrenheit){

return(5.0/9.0) * (fahrenheit -32.0);
