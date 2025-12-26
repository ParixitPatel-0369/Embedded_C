/* 3. Write a printbinary(int , int ) function consists of 2 integer variables. First one is the
value of the variable and the second one is the size of the variable.
Example:
char x=5;
printbinary(x,sizeof(x));
output: 00000101
*/
#include<stdio.h>
#include<stdint.h>
void printbinary(uint32_t,long);
int main(){
    uint32_t num;
    printf("Enter the number: ");
    scanf("%u",&num);
    printbinary(num,sizeof(num));
    char ch=15;
    printbinary(ch,sizeof(ch));
    return 0;
}
void printbinary(uint32_t num ,long size){
    long pos;
    for(pos=(size*8)-1;pos>=0;pos--){
        //printf("%ld\n",pos);
        if(num&(1<<pos))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}