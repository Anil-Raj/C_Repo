#include <stdio.h>
#include <io.h>
#include <alloc.h>
#include <fcntl.h>
#include <process.h>
#include <stat.h>
#include<conio.h>
#include<string.h>

int main(void)
{
   char *buf;
   int handle, bytes;
   char str[50];
   buf =(char *)malloc(10);

/*
   Looks for a file in the current directory named TEST.$$$ and attempts
   to read 10 bytes from it. To use this example you should create the
   file TEST.$$$
*/
   if ((handle =
      open("TEST.cpp", O_RDONLY | O_BINARY, S_IWRITE | S_IREAD)) == -1)
   {
      printf("Error Opening File\n");
      exit(1);
   }
   if ((bytes = read(handle, buf, 10)) == -1) {
      printf("Read Failed.\n");
      exit(1);
   }

   else {
      printf("Read: %d bytes read.\n", bytes);
   }
   strcpy(str, buf);
   for(int i=0;i<bytes;i++)
   printf("%c",str[i]);
   getch();
   return 0;
}

