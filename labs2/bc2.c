#include <stdio.h>
int main()
{
    int count = 0;
    int a = 1;
    char b;
    int c;
    int x = 0;
    while((b = getchar()) != '\n'){
        c = c*10+(b-'0');
    }
    while(a != 0){
        x = c & a;
        a = a<<1;
        if(x !=0){
            count++;
        }
    }
    printf("the amount is %d\n",count);
    return 0;
}