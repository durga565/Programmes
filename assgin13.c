#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 1. Write a program to print index of the given string ( Without bultin method ).   //   197 Program

// int main() {
//     char name[30];
//     int i;
//     printf("Enter your name: ");
//     fgets(name,30,stdin);
//     name[strlen(name)-1]='\0';
//     for(i=0;i<name[i];i++) {
//         printf("%d ",i);
//     }
//      return 0;
// }

// 2. Write a program to count the occurance of a given character in a given string.   //   198 Program

// int main() {
//     char str[200];
//     char chStr[10];
//     char ch;
//     int count = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0'; 

//     printf("Enter character to count: ");
//     fgets(chStr, sizeof(chStr), stdin);
//     ch = chStr[0];  

//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             count++;
//         }
//     }

//     printf("\nCharacter '%c' occurs %d times in the string.\n", ch, count);

//     return 0;
// }


// 3. Write a program to count vowels in a given string.   //   199 Program

// void countVowels(char str[]) {
//     char vowels[] = "aeiouAEIOU";
//     int count = 0;

//     for (int i = 0; i < strlen(str); i++) {
//         for (int j = 0; j < strlen(vowels); j++) {
//             if (str[i] == vowels[j]) {
//                 count++;
//                 break; // Stop checking once a match is found
//             }
//         }
//     }

//     printf("Number of vowels: %d\n", count);
// }

// int main() {
//     char input[100];
//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);
//     countVowels(input);
//     return 0;
// }

// 4. Writte a program to convert a given string into uppercase.   //   200 Program

// int main() {
//     char arr[30];
//     printf("Enter a string as lower case: ");
//     scanf("%99s", arr);

//     printf("Upper case: ");
//     for (int i = 0; arr[i] != '\0'; i++)
//         printf("%c", (arr[i] >= 'a' && arr[i] <= 'z') ? arr[i] - ('a' - 'A') : arr[i]);            //          Pending
//     printf("\n");

//     return 0;
//     }


// 1. Write a program to convert a given string into lowercase.   //   201 Program

// int main() {
//     char arr[30];
//     int i;
//     printf("Enter a character: ");
//     scanf("%29s", arr);

//     printf("Lower case: ");
//     for (i = 0; arr[i] != '\0'; i++)
//     printf("%c", (arr[i] >= 'A' && arr[i] <= 'Z') ? arr[i] - ('A' - 'a') : arr[i]);
//     return 0;
// }

// 2. Write a program to reverse a string.   //   202 Program

// void reverseString(char *str) {
//     int len = strlen(str);
//     for (int i = 0; i < len / 2; i++) {
//         char temp = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = temp;
//     }
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     size_t len = strlen(str);
//     if (len > 0 && str[len - 1] == '\n') {
//         str[len - 1] = '\0';
//     }

//     reverseString(str);
//     printf("Reversed string: %s\n", str);

//     return 0;
// }


// 3. Write a program in C to count the total number of alphabets, digits and special charater in a string.   //   203 Program

// int main() {
//     char arr[100];
//     int i, alphabets = 0, digits = 0, specials = 0;

//     printf("Enter a string: ");
//     fgets(arr, sizeof(arr), stdin);

//     for (i = 0; arr[i] != '\0'; i++) {
//         if (isalpha(arr[i]))
//             alphabets++;
//         else if (isdigit(arr[i]))
//             digits++;
//         else if (arr[i] != '\n' && arr[i] != ' ')
//             specials++;
//     }

//     printf("Alphabets: %d\n", alphabets);
//     printf("Digits: %d\n", digits);
//     printf("Special characters: %d\n", specials);

//     return 0;
// }


// 4. Write a program in C to copy one string to another char array.   //   204 Program

// int main() {
//     char arr[50], str[50];
//     int i;

//     printf("Enter a string: ");
//     fgets(arr, sizeof(arr), stdin);

//     for (i = 0; arr[i] != '\0'; i++) {
//         if (arr[i] == '\n') {
//             arr[i] = '\0';
//             break;
//         }
//     }

//     for (i = 0; arr[i] != '\0'; i++) {
//         str[i] = arr[i];
//     }
//     str[i] = '\0'; 

//     printf("Copied string: %s\n", str);

//     return 0;
// }

// 5. Write a program to find first occurrence of a given character in a given string.   //   205 Program

// int main() {
//     char str[100], ch;
//     char *ptr;
//     int position = -1;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("Enter the character to find: ");
//     scanf(" %c", &ch); 

//     ptr = str;
//     while (*ptr != '\0') {
//         if (*ptr == ch) {
//             position = ptr - str; 
//             break;
//         }
//         ptr++;
//     }

//     if (position != -1)
//         printf("First occurrence of '%c' is at index %d.\n", ch, position);
//     else
//         printf("Character '%c' not found in the string.\n", ch);

//     return 0;
// }

// 1. Write a function to calculate length of the string.   //   206 Program

//  int main() {
//      char arr[100];
//      int i,count=0;
//      printf("Enter string: ");
//      fgets(arr,30,stdin);

//       for(i=0;arr[i] !='\0';i++) {
//          if( arr[i] !='\n' && arr[i] != ' ')  // Skip new line also space
//           count++;
//       }
//        printf("Lenght of the string is: %d",count);
//        return 0;
//  }