/*
  (void*)realloc(void* ptr,size_t size);
    void *ptr =address of block to resize:
    size_t size=size of new block:

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int capacity=5,*stack;

    stack=(int*) calloc(capacity,sizeof(int));
    capacity ++;

    stack=(void*)realloc(stack,capacity*sizeof(int));
    

}*/
