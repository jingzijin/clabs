#include<stdio.h>
#include<string.h>
int count1(char str[]){
     int i = 0;int x = 0;
     while(str[i]!='\n'){
         if(str[i]=='a'){
             x++;
         }
         i++;
     }
     return x;
}
int count2(char str[]){
    int i = 0;int x = 0;
    while(str[i]!='\n'){
        if(str[i]=='0'){
            x++;
        }
        i++;
    }
    return x;
}
int count3(char str[]){
    int i = 0;int x = 0;
    while(str[i]!='\n'){
        if(str[i]=='A'){
            x++;
        }
        i++;
    }
    return x;
}
int main(){
    char c[100];
    int i = 0;
    c[i] = getchar();
    while (c[i] !='\n'){
        i++;
        c[i] = getchar();
    }
    printf("the number of a is:");
    printf("%d\n",count1(c)+count3(c));
    printf("the number of 0 is:");
    printf("%d\n",count2(c));
}