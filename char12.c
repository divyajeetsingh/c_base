#include<stdio.h>
#include<string.h>
void main(){
char ch[100] = "google";
char gh[100] = "data is here";
strncpy(ch,gh,7);
printf("the copied string is %s",ch);

}
//strchr ("multinational",'n');
//output is national
//strrchr("multinational",'n'); 
//output is    --   nal
