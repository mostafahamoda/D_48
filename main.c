#include <stdio.h>
#include <stdlib.h>


/*0000001 ==> 6422296
00000010 ==> 6422297
00000000 ==> 642229
00000000 ==> 6422299*/

//xxxxxxxx ==> 6422300
// Passing pointers value by reference to functions
// void pointers
void* malloc_Amit(int size){

    void* ptr = malloc(size);

    return ptr;
}
/*xxxxxxx ==>
xxxxxxx ==>
xxxxxxx ==>
xxxxxxx ==>**/
void print_Bytes(void* x,int size){
    char* ptr = (char*)x;
    for(int i=0;i<size;i++){
        printf("%d\n",*ptr);
        ptr++;
    }
}
//6422299
//==> RTOS ==> pointer to void
/*00001100
00000010
00000000
00000000*/

#define ValueOfX (*((char*)6422299))
int main()
{
    int x = 512+12;
    int y=5;
    int* ptr = &x;
    print_Bytes(ptr,4);
    return 0;
}



