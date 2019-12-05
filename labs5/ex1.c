#include<stdio.h>
#include<string.h>
void reverse(char s[],int a, int b){
    int i;
    int j;
    j = b - (a + 1);
    if(a < j){
        i = s[a];
        s[a] = s[j];
        s[j] = i;
        reverse(s,++a,b);
    }
}
int main(){
    char s;
    char t[100];
    int a = 0;
    int c = 0;
    while((s = getchar()) != '\n'){
        t[a] = s;
        c = ++a;
    }
    reverse(t,0,c);

    a = 0;
    while(a < c){
    printf("%c",t[a]);
    ++a;
    }
}