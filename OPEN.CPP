/*
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	printf("welcome");
	getch();
	return 0;
}
*/


 #include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <dos.h>

int main(void)
{
  int handle;
  unsigned nbytes;
  char msg[] = "Hello world\n";
 if( _dos_creatnew("tcfile.txt",O_RDWR,&handle)!=0)
 {perror("unable to create new file tcfile.txt");
 return 1;
 }

  if (_dos_write(handle, msg, strlen(msg),&nbytes) != 0)
    perror("Unable to write to tcfile.txt");
  printf("%u bytes written to tcfile.txt\n",nbytes);
  _dos_close(handle);

  return 0;
}

