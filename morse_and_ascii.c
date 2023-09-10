#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char* ASCII_to_morse(char ch) {
    static const char* morseTable[] = {
        ".-",   // a
        "-...", // b
        "-.-.", // c
        "-..",  // d
        ".",    // e
        "..-.", // f
        "--.",  // g
        "....", // h
        "..",   // i
        ".---", // j
        "-.-",  // k
        ".-..", // l
        "--",   // m
        "-.",   // n
        "---",  // o
        ".--.", // p
        "--.-", // q
        ".-.",  // r
        "...",  // s
        "-",    // t
        "..-",  // u
        "...-", // v
        ".--",  // w
        "-..-", // x
        "-.--", // y
        "--..", // z
        "-----", // 0
        ".----", // 1
        "..---", // 2
        "...--", // 3
        "....-", // 4
        ".....", // 5
        "-....", // 6
        "--...", // 7
        "---..", // 8
        "----.", // 9
    };

    ch = tolower(ch);

    // Handle Letters 'a' to 'z'
    if (ch >= 'a' && ch <= 'z') {
        return morseTable[ch - 'a'];
    }

    // Handle numbers '0' to '9'
    if (ch >= '0' && ch <= '9') {
        return morseTable[ch - '0' + 26];
    }

 static const char* specialChars[] = {
        "--..--", // , (comma)
        ".-.-.-", // . (period)
        "..--..", // ? (question mark)
        "-..-.",  // / (slash)
        "-....-", // - (hyphen)
        "-.--.",  // ( (left parenthesis)
        "-.--.-", // ) (right parenthesis)
        ".----.", // ' (apostrophe)
        "-.-.--", // ! (exclamation mark)
        "-...-",  // & (ampersand)
        ".-...",  // + (plus)
    };

    // Handle special characters
    for (int i = 0; i < 11; i++) {
        if (ch == ",.?/-()\'!&+"[i]) {
            return specialChars[i];
        }
    }

    return ""; // Return NULL for unsupported characters
}


char morse_to_ASCII(const char* morseCode) {
    static const char* morseTable[] = {
        ".-",   // a
        "-...", // b
        "-.-.", // c
        "-..",  // d
        ".",    // e
        "..-.", // f
        "--.",  // g
        "....", // h
        "..",   // i
        ".---", // j
        "-.-",  // k
        ".-..", // l
        "--",   // m
        "-.",   // n
        "---",  // o
        ".--.", // p
        "--.-", // q
        ".-.",  // r
        "...",  // s
        "-",    // t
        "..-",  // u
        "...-", // v
        ".--",  // w
        "-..-", // x
        "-.--", // y
        "--..", // z
        "-----", // 0
        ".----", // 1
        "..---", // 2
        "...--", // 3
        "....-", // 4
        ".....", // 5
        "-....", // 6
        "--...", // 7
        "---..", // 8
        "----.", // 9
        "--..--", // ,
        ".-.-.-", // .
        "..--..", // ?
        "-..-.",  // /
        "-....-", // -
        "-.--.",  // (
        "-.--.-", // )
        ".----.", // '
        "-.-.--", // !
        "-...-",  // &
        ".-...",  // +
    };

    // Loop through the Morse table to find a match
    for (int i = 0; i < sizeof(morseTable) / sizeof(morseTable[0]); i++) {
        if (strcmp(morseCode, morseTable[i]) == 0) {
            if (i >= 0 && i < 26) {
                return 'a' + i;
            } else if (i >= 26 && i < 36) {
                return '0' + i - 26;
            } else {
                return '\0';
            }
        }
    }

    // Return '\0' for invalid Morse code
    return '\0';
}


int main(){

    char input_txt[20000];

    for (int i = 0; i < 20000; i++) {
        input_txt[i] = '\0';
    }

    printf("Enter 1 for Text to Morse\n");
    printf("Enter 2 for Morse to Text\n");
    int n;
    scanf("%d", &n);
    char enter;
    scanf("%c", &enter);

    if(n==1){
        scanf("%[^\n]s", input_txt);

        int j=0;
        printf("Morse Code: ");
        while(input_txt[j]!='\0'){
            printf("%s ", ASCII_to_morse(input_txt[j]));
            j++;
        }printf("\n");
    } 
    else if(n==2){
        scanf("%[^\n]s", input_txt);
        printf("%c\n", morse_to_ASCII(input_txt));

        // int j=0;
        // printf("Text: ");
        // while(input_txt[j]!='\0'){
        //     printf("%s ", morse_to_ASCII(input_txt[j]));
        //     j++;
        // }printf("\n");
        
    }
    else{
        printf("Invalid Input!\n");
    }

    return 0;
}