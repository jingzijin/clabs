#include<stdio.h>
int main(){
    char a;
    double x = 0;
    a = getchar();
    while(a !=' '){
        x = x*10+(a-'0');
        a = getchar();
    }
    char b;
    double y = 0;
    b = getchar();
    while(b!=' '){
        y = y*10+(b-'0');
        b = getchar();
    }
    char c;
    double d;
    c = getchar();
    if(c == '+'){
        d =x+y;
        printf("he expression has a value of %.1lf\n",d);
    }
    else if(c == '-'){
        d = x-y;
        printf("he expression has a value of %.1lf\n",d);
    }
    else if(c =='*'){
        d = x*y;
        printf("he expression has a value of %.1lf\n",d);
    }
    else if(c =='/'){
        d = x/y;
        if(y==0){
            printf("Error : cannot divide a number by 0!\n");
        }
        else
        {
            printf("he expression has a value of %.1lf\n",d);
        }
    }
}