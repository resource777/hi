#include<stdio.h>
#include<fcntl.h>
#include "get_next_line.h"

int main(){
char * temp;
int fd;

fd = open("test.txt",O_RDONLY);
while((temp = get_next_line(fd)))
{
    printf("%s\n",temp);
    free(temp);
}
    printf("%s\n",temp);
    free(temp);
    close(fd);
    return 0;
}
