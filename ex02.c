#include <stdio.h>

int main(int argc,char *argv[])
{
    int i;
    i=argc;
    while(i!=0){
    printf("%s\n",argv[i]);
    i--;
    }

    return 0;
}
