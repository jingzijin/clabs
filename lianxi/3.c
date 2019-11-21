#include <stdio.h>

int main()
{
unsigned long long int a = 1;
unsigned long long int b = 0;
unsigned long long int c = 0-1;
unsigned long long int d = c+1;
while (a != 0){
    a = a <<1;
    b = b + 1;
}
printf("the max is %llu\n",c);
printf("the min is %llu\n",d);
printf("unsigned long long int is size of%lld\n",b);
}