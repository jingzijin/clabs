#include<stdio.h>
void reverse(char s[]){
   int x,j,i=0,k=0;
   while(s[k]!='\0'){
    k++;}
   j=k-(i+1);
   for(i=0;i<j;i++,j--){
        if(i<j)
        x=s[i];
        s[i]=s[j];
        s[j]=x;
   }
}
int main(){
    printf("please int something：");
	char s[100];
    int y = 0;
    s[y] = getchar();
    while(s[y] !='\n'){
        ++y;
        s[y] = getchar();
    }
	reverse(s);
    printf("%s",s);
	return 0 ;
}