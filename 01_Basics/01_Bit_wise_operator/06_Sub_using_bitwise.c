//6. WAP implements subtraction functionality without using SUB('-') Operator.
/*
Subtraction can be performed using bitwise operators:
XOR (^) → subtract without borrow
AND (&) + left shift (<<) → calculate borrow

Formula
a - b = a XOR b   (partial difference)
borrow = (~a & b) << 1
Repeat until borrow = 0
*/
#include<stdio.h>
#include<stdint.h>
uint32_t sub_two_nums_using_bitwise(uint32_t,uint32_t);
int main(){
    uint32_t num1,num2;
    printf("Enter the two numbers: ");
    scanf("%u%u",&num1,&num2);
    if(num1>num2)
        printf("%u - %u= %u",num1,num2,sub_two_nums_using_bitwise(num1,num2));
    else
        printf("%u - %u= -%u",num1,num2,sub_two_nums_using_bitwise(num2,num1));
    return 0;
}
uint32_t sub_two_nums_using_bitwise(uint32_t num1,uint32_t num2){
    while(num2){
        uint32_t borrow=(~num1 &num2)<<1;
        num1=num1^num2;
        num2=borrow;
    }
    /* 15-7
    a = 1111
    b = 0111
    --------------
 XOR  = 1000
 borrow = (~1111 & 0111) << 1 = 0000
 Result = 8
    */
    return num1;
}