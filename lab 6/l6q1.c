#include<stdio.h>
#include<stdlib.h>
#include "StackLLFunc.h"

int main(){
    push(1);push(2);
    traverse();
    push(1);push(2);
    push(1);push(2);
    traverse();
    pop();
    pop();
    traverse();
    pop();
    peek();
    traverse();
    return 0;
}
