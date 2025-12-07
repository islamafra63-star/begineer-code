#include<stdio.h>
#include<string.h>
int main(){
char name[30];
gets(name);
printf("%s %d",name,strlen(name));
return 0;

}
