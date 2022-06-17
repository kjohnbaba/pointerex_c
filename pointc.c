#include <stdio.h>
int main(){
   int* pc, c;
   
   c = 66;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 66
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 66
   
   c = 15;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 15
   
   *pc = 3;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 3
   return 0;
}
