
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stat.h>
#include <io.h>
#include <string.h>

int main(void)
{
   int handle;
   char string[40];
   int length, res;

   /*
    Create a file named "TEST.$$$" in the current directory and write
    a string to it.  If "TEST.$$$" already exists, it will be overwritten.
   */

   if ((handle = open("TEST.txt", O_WRONLY | O_CREAT | O_TRUNC,
			 S_IREAD | S_IWRITE)) == -1)
   {
      printf("Error opening file.\n");
      exit(1);
   }
    for(int i=0;i<10;i++){
   strcpy(string, "Hello, world!\n");
   length = strlen(string);

   if ((res = write(handle, string, length)) != length)
   {
      printf("Error writing to the file.\n");
      exit(1);
   }
   printf("Wrote %d bytes to the file.\n", res);
			  }
   close(handle);
   return 0;
}

