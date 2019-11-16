#include<stdio.h>
#include<string.h>
int count(char str[]){
     int i = 0;
     while(str[i++]!='\0'){
          ;
     }
     i = i-2;
     return i;
}
int strrindex(char t[], char s[]){
     int a = count(s);
     int b = count(t);

     int i = a;
     while(s[i]!='\0'){
          int k=0;
          int j=i-b;
          while (s[j]!='\0'&&t[k]!='\0'&&s[j]==t[k]){
               if(k==b){
                    i = i-b;
                     return i;
               }
               j++;k++;
          }
          i--;
     }
     return -1;
}
int main(){
     char s[100];
     char t[100];
     scanf("%s %s",t,s);
     printf("%d\n",strrindex(t,s));
}