// Strings
#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Programming";
    char str2 []="C-";
    printf("str = %s,\nstr2 = %s\n",str,str2);
    strcat(str2,str);
    printf("The str2 has now become \n%s", str2);
    return 0;
    
}