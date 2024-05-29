#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

int main(){
    srand(time(NULL)); // set rand seed every time

    printf("What word will be generated? ");
    char word[90];
    scanf("%90s", word);
    int len = strlen(word);
    // printf("%d", len);
    printf("How will it be generated?\n");



    char outString[91];
    for(int i = 0; i < len; i++){
        int value = -1;
        int charAscii = (int) word[i];
        int beginRan;
        int endRan;
        // printf("position: %d, char: %c, value: %d\n", i, word[i], charAscii);
        if(charAscii > 64 && charAscii < 91) {
            beginRan = 65;
            endRan = 90;
        }
        else {
            beginRan = 97;
            endRan = 122;
        }
        while(value != charAscii){
           value = beginRan + rand() % (endRan - beginRan + 1); 
           outString[i] = (char) value;
           outString[i + 1] = '\0'; 
           printf("%s\n", outString);
           Sleep(15);
        }
    }

    return 1;
}