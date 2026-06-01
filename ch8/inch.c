//took help from AI

#include <stdio.h>

int main(){
    char str[100], ch;
    int i = 0;

    while (1){
        scanf("%c", &ch);
        if (ch == '\n') break;  // stop before storing \n
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  // null terminate the string
    printf("%s", str);
}
