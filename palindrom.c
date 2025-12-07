#include<stdio.h>
#include<string.h>
int main(){
char s[100],rev[100];
printf("enter a string");
scanf("%s",&s);
strcpy(rev,s);
strrev(rev);
if(strcmp(s,rev)==0){
    printf("palindrom\n");
}
    else{
        printf("not palindrom\n");
    }


return 0;
}
