// char morse_to_ASCII(char* charArr){
//     char chvar = "\0";

//     switch(charArr){
//         case ".-":
//             chVar = "a";
//             break;
//         case "-...":
//             chVar = "b";
//             break;
//         case "-.-.":
//             chVar = "c";
//             break;
//         case "-..":
//             chVar = "d";
//             break;
//         case ".":
//             chVar = "e";
//             break;
//         case "..-.":
//             chVar = "f";
//             break;
//         case "--.":
//             chVar = "g";
//             break;
//         case "....":
//             chVar = "h";
//             break;
//         case "..":
//             chVar = "i";
//             break;
//         case ".---":
//             chVar = "j";
//             break;
//         case "-.-":
//             chVar = "k";
//             break;
//         case ".-..":
//             chVar = "l";
//             break;
//         case "--":
//             chVar = "m";
//             break;
//         case "-.":
//             chVar = "n";
//             break;
//         case "---":
//             chVar = "o";
//             break;
//         case ".--.":
//             chVar = "p";
//             break;
//         case "--.-":
//             chVar = "q";
//             break;
//         case ".-.":
//             chVar = "r";
//             break;
//         case "...":
//             chVar = "s";
//             break;
//         case "-":
//             chVar = "t";
//             break;
//         case "..-":
//             chVar = "u";
//             break;
//         case "...-":
//             chVar = "v";
//             break;
//         case ".--":
//             chVar = "w";
//             break;
//         case "-..-":
//             chVar = "x";
//             break;
//         case "-.--":
//             chVar = "y";
//             break;
//         case "--..":
//             chVar = "z";
//             break;
//     }
// }

// char* ASCII_to_morse(char ch){
//     char morse[10];
//     char *chPtr = morse;

//     switch(ch){
//         case 'a':
//             chPtr = ".-";
//             break;
//         case 'b':
//             chPtr = "-...";
//             break;
//         case 'c':
//             chPtr = "-.-.";
//             break;
//         case 'd':
//             chPtr = "-..";
//             break;
//         case 'e':
//             chPtr = ".";
//             break;
//         case 'f':
//             chPtr = "..-.";
//             break;
//         case 'g':
//             chPtr = "--.";
//             break;
//         case 'h':
//             chPtr = "....";
//             break;
//         case 'i':
//             chPtr = "..";
//             break;
//         case 'j':
//             chPtr = ".---";
//             break;
//         case 'k':
//             chPtr = "-.-";
//             break;
//         case 'l':
//             chPtr = ".-..";
//             break;
//         case 'm':
//             chPtr = "--";
//             break;
//         case 'n':
//             chPtr = "-.";
//             break;
//         case 'o':
//             chPtr = "---";
//             break;
//         case 'p':
//             chPtr = ".--.";
//             break;
//         case 'q':
//             chPtr = "--.-";
//             break;
//         case 'r':
//             chPtr = ".-.";
//             break;
//         case 's':
//             chPtr = "...";
//             break;
//         case 't':
//             chPtr = "-";
//             break;
//         case 'u':
//             chPtr = "..-";
//             break;
//         case 'v':
//             chPtr = "...-";
//             break;
//         case 'w':
//             chPtr = ".--";
//             break;
//         case 'x':
//             chPtr = "-..-";
//             break;
//         case 'y':
//             chPtr = "-.--";
//             break;
//         case 'z':
//             chPtr = "--..";
//             break;
        
//     }
//     return chPtr;
// }

// const char* ASCII_to_morse(char ch) {
//     static const char* morseTable[] = {
//         ".-",   // a
//         "-...", // b
//         "-.-.", // c
//         "-..",  // d
//         ".",    // e
//         "..-.", // f
//         "--.",  // g
//         "....", // h
//         "..",   // i
//         ".---", // j
//         "-.-",  // k
//         ".-..", // l
//         "--",   // m
//         "-.",   // n
//         "---",  // o
//         ".--.", // p
//         "--.-", // q
//         ".-.",  // r
//         "...",  // s
//         "-",    // t
//         "..-",  // u
//         "...-", // v
//         ".--",  // w
//         "-..-", // x
//         "-.--", // y
//         "--.."  // z
//     };

//     if (ch >= 'a' && ch <= 'z') {
//         return morseTable[ch - 'a'];
//     } else if(ch==' ') {
//         return ""; // Return NULL for characters outside 'a' to 'z'
//     }
// }