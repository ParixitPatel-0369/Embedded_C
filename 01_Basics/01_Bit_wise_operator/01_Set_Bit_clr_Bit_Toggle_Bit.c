//1. Write a program to Set, clear and toggle a particular bit using bit wise operator?
#include<stdio.h>
#include<stdint.h>
void print_binary(const uint32_t);
void set_bit(uint32_t *, uint8_t);
void clear_bit(uint32_t *, uint8_t);
void toggle_bit(uint32_t *, uint8_t);
int main(){
    uint32_t num,bit_pos;
    uint8_t op;
    printf("Enter the number: ");
    scanf("%u",&num);
    printf("Entered num: %u and its binary is: ",num);
    print_binary(num);
    while(1){
        printf("Please select the option:\n1)set the bit\n2)clear the bit\n3)Toggle the bit\n4)Exit\n");
        scanf("%hhu",&op);
        if(op==4)
            break;
        if(op>=1&&op<=3){
            printf("Enter the bit position: ");
            scanf("%u",&bit_pos);
            if(bit_pos<32){
                switch(op){
                    case 1:
                        set_bit(&num,bit_pos);
                        printf("After set bit the number: %u and binary is :",num);
                        print_binary(num);
                        break;
                    case 2:
                        clear_bit(&num,bit_pos);
                        printf("After clr bit the number: %u and binary is :",num);
                        print_binary(num);
                        break;
                    case 3:
                        toggle_bit(&num,bit_pos);
                        printf("After toggle bit the number: %u and binary is :",num);
                        print_binary(num);
                        break;
                    default :
                        break;
                }
            }
            else
                printf("Enter the bit position in between 0 to 31");
        }
   }
    return 0;
}
void print_binary(const uint32_t num){
    int32_t pos;
    for(pos=31;pos>=0;pos--){
        if(num&(1U<<pos))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
void set_bit(uint32_t *num , uint8_t bit_pos){
    *num |= (1U<<bit_pos);
}
void clear_bit(uint32_t *num , uint8_t bit_pos){
    *num &= ~(1U<<bit_pos);
}
void toggle_bit(uint32_t *num , uint8_t bit_pos){
    *num ^= (1U<<bit_pos);
}