//
//  main.c
//  baekjoon10828
//
//  Created by 이승섭 on 2018. 12. 3..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

void process_stack() {
    
    int cnt = 0;
    int i, j;
    char op[10];
    
    int stack[100];
    int stack_length = 0;
    FILE *fp = fopen("input.txt","r");
    
    fscanf(fp, "%d", &cnt);
    printf("%d\n", cnt);
    
    
    for(i=0;i<cnt;i++){
        
        //handle input here
        fscanf(fp, "%s", op);
        int result = strcmp("push", op);
        int value = 0;
        printf("%s ", op);
        
        if(strcmp("push", op) == 0) { // if op is "push"
            fscanf(fp, "%d", &value);
            printf("%d", value);
        }
        printf("\n");
        
        
        // process stack operation
        if(strcmp("push", op) == 0 ){
            stack[stack_length] = value;
            stack_length++;
        }
        
        if(strcmp("pop", op) == 0 ){
            if(stack_length > 0){
                printf("%d\n", stack[stack_length-1]);
                stack_length--;
            }else if(stack_length == 0){
                printf("-1\n");
            }
            
        }
        
        if(strcmp("top", op) == 0 ){
            if(stack_length > 0){
                printf("%d\n", stack[stack_length-1]);
            }else if(stack_length == 0){
                printf("-1\n");
            }
        }
        
        if(strcmp("size", op) == 0 ){
            printf("%d\n", stack_length);
        }
        
        if(strcmp("empty", op) == 0 ){
            if(stack_length == 0){
                printf("1\n");
            }else{
                printf("0\n");
            }
        }
        printf("-------- stack result ---------\n");
        for(j=0;j<stack_length;j++){
            printf("%d ", stack[j]);
        }
        printf("\n");
    }
    
    
    //printf("%s\n", op);
    
    fclose(fp);
    
}


int main(void)
{
    //stack_problem();
    process_stack();
    return 0;
}



//
//#include "ArrayBaseStack.h"
//
//
//void stack_problem() {
//    Stack stack;
//    StackInit(&stack);
//    int N, i, num;
//    char str[6];
//
//    scanf("%d\n", &N);
//
//    if(1 <= N && N <= 10000)
//    {
//        for(i = 0; i < N; i++)
//            scanf("%s", str);
//
//        if(!strcmp(str, "push"))
//        {
//            sscanf(str, "%s %d", str, &num);
//            SPush(&stack, num);
//        }
//
//        if(!strcmp(str, "pop"))
//        {
//            printf("%d \n", SPop(&stack));
//        }
//
//        if(!strcmp(str, "size"))
//        {
//            printf("%d \n", Size(&stack));
//        }
//
//        if(!strcmp(str, "empty"))
//        {
//            printf("%d \n", SIsEmpty(&stack));
//        }
//
//        if(!strcmp(str, "top"))
//        {
//            printf("%d \n", SPeek(&stack));
//        }
//
//    }
//}
