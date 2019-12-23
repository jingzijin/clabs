#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int a[100];
int i=1;
int j=0;
for(i=1;i<argc;i++,j++)
{
     a[j]=atof(argv[i]);
}
    int k;
    int min=a[0];
     for(k=0;k<argc;k++)
     {
if(a[k]<min)
{
min=a[k];
}
     }
printf("%d\n",min);
}