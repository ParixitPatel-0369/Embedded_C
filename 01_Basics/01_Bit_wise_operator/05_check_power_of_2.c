//5. WAP whether a number is a power of 2 or not?
#include<stdio.h>
#include<stdint.h>
uint8_t check_power_of_2(const uint32_t);
int main(){
    uint32_t num;
    printf("Enter the number:");
    scanf("%u",&num);
    if(check_power_of_2(num))
        printf("%u is power of 2.\n",num);
    else
        printf("%u is not power of 2.\n",num);
    return 0;
}
uint8_t check_power_of_2(const uint32_t num){
    if(num&(num-1))
        return 0;
    else
        return 1;
}