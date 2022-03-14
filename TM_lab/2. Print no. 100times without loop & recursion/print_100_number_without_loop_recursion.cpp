#include <stdio.h>
#include <setjmp.h>
jmp_buf buf;
main() {
   int x = 1;
   setjmp(buf); //set the jump position using buf
   printf("1 "); // Prints a number
   x++;
   if (x <= 100)
   {
   
      longjmp(buf, 1); // Jump to the point located by setjmp
}
}

