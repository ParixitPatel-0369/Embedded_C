//4. WAP to count the bits set (bit value 1) in an integer? Find out and compare different possibilities?
#include<stdio.h>
#include<stdint.h>
void print_binary(const uint32_t);
uint8_t count_set_bits_method_1(const uint32_t);
uint8_t count_set_bits_method_2(uint32_t); 
int main(){
    uint32_t num;
    printf("Enter the number:");
    scanf("%u",&num);
    print_binary(num);
    printf("%u number has %u set bits(method::1).\n",num,count_set_bits_method_1(num));
    printf("%u number has %u set bits(methos::2).\n",num,count_set_bits_method_2(num));
    return 0;
}
void print_binary(const uint32_t num){
    int32_t pos;
    for(pos=31;pos>=0;pos--){
        if (num&(1<<pos))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
uint8_t count_set_bits_method_1(const uint32_t num){
    uint8_t count=0;
    int32_t pos;
    for(pos=31;pos>=0;pos--){
        if(num&(1<<pos))
            count++;
    }
    return count;
}
uint8_t count_set_bits_method_2(uint32_t num){
    uint8_t count=0;
    while(num){
        num &=(num-1);//clears the lowest set bit
        count++;
    }
    /*29 (11101)
    11101 → 11100
    11100 → 11000
    11000 → 10000
    10000 → 00000
    4 iterations = 4 set bits
    Time Complexity
    O(number of set bits)
    Faster than method 1*/
    return count;
}