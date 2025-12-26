//2. WAP whether a number is ODD or EVEN using bitwise.
#include<stdio.h>
#include<stdint.h>
uint8_t check_odd(const uint32_t );
int main(){
    uint32_t num;
    printf("Enter the number: ");
    scanf("%u",&num);
    if(check_odd(num))
        printf("%u is ODD\n",num);
    else
        printf("%u is EVEN\n",num);
    return 0;
}
uint8_t check_odd(const uint32_t num){
    uint8_t odd;
    if(num&1)
        return 1;
    else
        return 0;
}