#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 2. Write a function to reverse a stiring.   //   207 Program

//  char* reverse(char str[]) {
//     char ch;
//     int i,l;
//     for(l=0;str[l] != '\0';l++);
//     for(i=0;i<l/2;i++) {
//         ch=str[i];
//         str[i]=str[l-1-i];
//         str[l-1-i]=ch;
//     }
//      return str;
//  }

//   int main() {
//      char arr[50];
//      printf("Enter a string: ");
//           fgets(arr,50,stdin);
//        arr[strcspn(arr,"\n")] = '\0';
//        printf("Reverse string is: %s\n",reverse(arr));
//        return 0;
//   }

// 3. Write a function to compare two strings.   //   208 Program

// int compareStrings(const char str1[], const char str2[]) {
//     int i = 0;
//     while (str1[i] != '\0' && str2[i] != '\0') {
//         if (str1[i] != str2[i]) {
//             return str1[i] - str2[i];  // Return difference at first mismatch
//         }
//         i++;
//     }
//     return str1[i] - str2[i];
// }

// int main() {
//     char a[100], b[100];

//     printf("Enter first string: ");
//     fgets(a, sizeof(a), stdin);

//     printf("Enter second string: ");
//     fgets(b, sizeof(b), stdin);

//     int result = compareStrings(a, b);

//     if (result == 0) {
//         printf("Strings are equal.\n");
//     } else if (result > 0) {
//         printf("First string is greater.\n");
//     } else {
//         printf("Second string is greater.\n");
//     }

//     return 0;
// }

// 4. Write a function to transform string into uppercase.   //   209 Program

// char* upper(char str[]);

// int main() {
//     char arr[50];
//     int i;
//     printf("Enter a string: ");
//     fgets(arr, 50, stdin);
    
//     upper(arr);
//     printf("Upper letter string is: %s\n",arr);                                      
//     return 0;
// }
// char* upper(char str[]) {
//    int i;
//    for(i=0;str[i];i++) {
//       if(str[i] >= 'a' && str[i] <= 'z')
//        str[i]=str[i]-32;
//    }
//     return str;
// }

// 5. Write a function to transform a string into lowercase.   //   210 Program

// char* lower(char str[]);

// int main() {
//     char arr[50];
//     int i;
//     printf("Enter a string: ");
//     fgets(arr, 50, stdin);
    
//     lower(arr);

//     printf("lower case string is: %s\n",arr);                                     
//     return 0;
// }

// char* lower(char str[]) {
//    int i;
//    for(i=0;str[i];i++) {
//       if(str[i] >= 'A' && str[i] <= 'Z')
//        str[i]=str[i]+32;
//    }
//     return str;

// }

// 1. Write a function to count vowels in a given string.   //   211 Program

// int countVowels(const char str[]) {
//     int count = 0;
//     int i = 0;
//     while (str[i] != '\0') {
//         char ch = str[i];

//         // Check for both lowercase and uppercase vowels
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||                // Logic number -- 1
//             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             count++;
//         }

//         i++;
//     }

//     return count;
// }

// int main() {
//     char input[100];

//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     int vowels = countVowels(input);
//     printf("Number of vowels: %d\n", vowels);

//     return 0;
// }



// int countVowels(const char str[]) {
//     int count = 0;
//     int i = 0;
//     while (str[i] != '\0') {
//         switch (str[i]) {
//             case 'a': case 'e': case 'i': case 'o': case 'u':            // Logic number -- 2
//             case 'A': case 'E': case 'I': case 'O': case 'U':
//                 count++;
//                 break;
//         }
//         i++;
//     }

//     return count;
// }

// int main() {
//     char input[100];

//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     int vowels = countVowels(input);
//     printf("Number of vowels: %d\n", vowels);

//     return 0;
// }


// int countVowels(const char str[]) {
//     char vowels[] = "aeiouAEIOU";
//     int count = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         for (int j = 0; vowels[j] != '\0'; j++) {
//             if (str[i] == vowels[j]) {
//                 count++;
//                 break;  // No need to check other vowels          //  Logic number -- 3
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     char input[100];

//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     int vowels = countVowels(input);
//     printf("Number of vowels: %d\n", vowels);

//     return 0;
//}

// 2. Write a function to find a character in a given string retuen index of first occureence of given character, Return -1 if character not found.   //   212 Program

// int findCharIndex(const char str[], char target) {
//     int i = 0;
//     int found = 0;
//     int index = -1;

//     while (str[i] != '\0' && !found) {
//         if (str[i] == target) {
//             index = i;
//             found = 1;
//         }
//         i++;
//     }

//     return index;
// }

// int main() {
//     char input[100], ch;

//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     printf("Enter the character to search: ");
//     scanf(" %c", &ch); 

//     int result = findCharIndex(input, ch);

//     if (result != -1) {
//         printf("Character '%c' found at index %d\n", ch, result);
//     } else {
//         printf("Character '%c' not found in the string\n", ch);
//     }

//     return 0;
// }


// 3. Write a function to find character in a given string between specified indices ( Start index ( inclusive ) and end index ( Exclusive)).   //   213 Program

// int findCharInStringRange(const char str[], char target, int start, int end) {
//     for (int i = start; str[i] != '\0' && i < end; i++) {
//         if (str[i] == target) {
//             return i;  // Found the character
//         }
//     }
//     return -1;  // Not found in range
// }

// int main() {
//     char str[100], ch;
//     int start, end;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("Enter character to search: ");
//     scanf(" %c", &ch);  

//     printf("Enter start index (inclusive): ");
//     scanf("%d", &start);

//     printf("Enter end index (exclusive): ");
//     scanf("%d", &end);

//     int index = findCharInStringRange(str, ch, start, end);

//     if (index != -1) {
//         printf("Character '%c' found at index %d.\n", ch, index);
//     } else {
//         printf("Character '%c' not found in the specified range.\n", ch);
//     }

//     return 0;
// }


// 4. Write a function to swap two character of a given string with specified indices.   //   214 Program

// void swapInString(char str[], int i, int j) {
//     if (str[i] != '\0' && str[j] != '\0') {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     } else {
//         printf("Invalid indices\n");
//     }
// }

// int main() {
//     char str[100];
//     int index1, index2;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("Enter two indices to swap: ");
//     scanf("%d %d", &index1, &index2);

//     swapInString(str, index1, index2);

//     printf("String after swapping: %s\n", str);

//     return 0;
// }

// 5. Write a function to check whether a given string is an alphnumetric string or not ( Alphanumeric string must contain at least one alphabet and one digit).   //   215 Program

// int isAlphanumeric(const char str[]) {
//     int hasAlpha = 0, hasDigit = 0;

//     for (int i = 0; str[i] != '\0'; i++) {
//         if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {       // Check for alphabet using ASCII range
//             hasAlpha = 1;
//         }

//         if (str[i] >= '0' && str[i] <= '9') {               // Check for digit using ASCII range
//             hasDigit = 1;
//         }

//         if (hasAlpha && hasDigit) {
//             return 1;  // Alphanumeric
//         }
//     }

//     return 0;  // Not alphanumeric
// }

// int main() {
//     char input[100];

//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     if (isAlphanumeric(input)) {
//         printf("The string is alphanumeric.\n");
//     } else {
//         printf("The string is NOT alphanumeric.\n");
//     }

//     return 0;
// }


// 1. Write a function to check whether a given string is palindrome or not.   //   216 program

// int isPalindrome(const char str[]) {
//     char reversed[100];
//     int len = strlen(str);

//     if (str[len - 1] == '\n') {
//         len--;
//     }

//     for (int i = 0; i < len; i++) {
//         reversed[i] = str[len - 1 - i];
//     }
//     reversed[len] = '\0';

//     for (int i = 0; i < len; i++) {
//         if (str[i] != reversed[i]) {
//             return 0;  // Not a palindrome                    // Logic --  1
//         }
//     }

//     return 1;  // Is a palindrome
// }

// int main() {
//     char input[100];

//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     if (isPalindrome(input)) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is NOT a palindrome.\n");
//     }

//     return 0;
// }



// int isPalindrome(const char str[]) {
//     int length = 0;

//     while (str[length] != '\0' && str[length] != '\n') {    // Manually calculate string length (excluding newline)
//         length++;
//     }

//     for (int i = 0; i < length / 2; i++) {
//         if (str[i] != str[length - 1 - i]) {
//             return 0;  // Not a palindrome
//         }
//     }

//     return 1;  // Is a palindrome                           //   Logic --  2
// }

// int main() {
//     char input[100];

//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     if (isPalindrome(input)) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is NOT a palindrome.\n");
//     }

//     return 0;
// }

// 2. Write a function to trim a string ( removing leading spaces from both the ends).   //   217 Program

// void trimSpaces(char str[]) {
//     int start = 0, end = strlen(str) - 1;

//     if (str[end] == '\n') {
//         str[end] = '\0';
//         end--;
//     }

//     while (str[start] == ' ') {
//         start++;
//     }

//     while (end >= start && str[end] == ' ') {
//         end--;
//     }

//     int i = 0;
//     for (int j = start; j <= end; j++) {
//         str[i++] = str[j];
//     }
//     str[i] = '\0';  // Null-terminate
// }

// int main() {
//     char input[100];

//     printf("Enter a string with spaces: ");
//     fgets(input, sizeof(input), stdin);

//     trimSpaces(input);

//     printf("Trimmed string: \"%s\"\n", input);

//     return 0;
// }


// 3. Write a function to count words in a given string.   //   218 Program

// int count(char str[]);

// int main() {
//     char arr[30];
//     int i;

//     printf("Enter a string: ");
//     fgets(arr, sizeof(arr), stdin);

//     for (i = 0; arr[i] != '\0'; i++) {
//         if (arr[i] == '\n') {
//             arr[i] = '\0';
//             break;
//         }
//     }

//     int wordCount = count(arr);
//     printf("Number of words: %d\n", wordCount);

//     return 0;
// }

// int count(char str[]) {
//     int i, count = 0;

//     for (i = 0; str[i] != '\0'; i++) {
//         if ((str[i] != ' ' && str[i] != '\t') &&
//             (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t')) {
//             count++;
//         }
//     }

//     return count;
// }


// 4. Write a function reverse a string a string word wise. ( For example if the given string is  "Mysirg Education Services" , then the resulting string should be "Service Education Mysirg".   //   218 Program

// void reverse(char str[], int start, int end) {
//     while (start < end) {                       //  Function to reverse a portion of the string
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }

// void reverseWords(char str[]) {
//     int len = strlen(str);          // Reverse the entire string
//     reverse(str, 0, len - 1);

//     int start = 0;
//     for (int i = 0; i <= len; i++) {      // Reverse each word
//         if (str[i] == ' ' || str[i] == '\0') {
//             reverse(str, start, i - 1);
//             start = i + 1;
//         }
//     }
// }

// int main() {
//     char input[100];

//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     size_t len = strlen(input);
//     if (input[len - 1] == '\n') {
//         input[len - 1] = '\0';
//     }

//     reverseWords(input);

//     printf("Reversed word-wise: \"%s\"\n", input);

//     return 0;
// }


// 5. Write a function to do case insesitive comparision of two strings.   //   219 Program

// int compare_strings_case_insensitive(char str1[], char str2[]) {
//     int i = 0;
//     while (str1[i] != '\0' && str2[i] != '\0') {
//         char ch1 = str1[i];
//         char ch2 = str2[i];

//         if (ch1 != ch2 && ch1 + 32 != ch2 && ch1 - 32 != ch2) {
//             return 0; 
//         }

//         i++;
//     }

//     return str1[i] == '\0' && str2[i] == '\0';
// }

// int main() {
//     char str1[100], str2[100];

//     printf("Enter first string: ");
//     fgets(str1, sizeof(str1), stdin);
//     str1[strcspn(str1, "\n")] = '\0'; 

//     printf("Enter second string: ");
//     fgets(str2, sizeof(str2), stdin);
//     str2[strcspn(str2, "\n")] = '\0'; 

//     if (compare_strings_case_insensitive(str1, str2)) {
//         printf("Strings are equal (case-insensitive).\n");
//     } else {
//         printf("Strings are NOT equal.\n");
//     }

//     return 0;
// }


// 1. Write a function to count frequency of each character of the given string.   //   220 Program

// int main() {
//     char str[200], result[500] = "";
//     int counted[256] = {0};

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0'; 

//     for (int i = 0; str[i] != '\0'; i++) {
//         unsigned char ch = str[i];

//         if (!counted[ch]) {
//             int count = 0;
//             for (int j = 0; str[j] != '\0'; j++) {
//                 if (str[j] == ch) {
//                     count++;
//                 }
//             }

//             counted[ch] = 1;

//             char temp[50];
//             sprintf(temp, "'%c' = %d\n", ch, count);
//             strcat(result, temp);
//         }
//     }

//     printf("\nCharacter frequencies:\n%s", result);

//     return 0;
// }


 // 2. Write a function to find a word in a given string.   //   221 Program

// int findWord(char str[], char word[]);

// int main() {
//     char text[100], search[30];
//     int i;

//     printf("Enter a string: ");
//     fgets(text, sizeof(text), stdin);

//     for (i = 0; text[i] != '\0'; i++) {
//         if (text[i] == '\n') {
//             text[i] = '\0';
//             break;
//         }
//     }

//     printf("Enter the word to search: ");
//     fgets(search, sizeof(search), stdin);

//     for (i = 0; search[i] != '\0'; i++) {
//         if (search[i] == '\n') {
//             search[i] = '\0';
//             break;
//         }
//     }

//     if (findWord(text, search))
//         printf("Word found!\n");
//     else
//         printf("Word not found.\n");

//     return 0;
// }

// int findWord(char str[], char word[]) {
//     char temp[30];
//     int i = 0, j = 0;

//     while (str[i] != '\0') {
//         while (str[i] == ' ' || str[i] == '\t') i++;

//         j = 0;
//         while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
//             temp[j++] = str[i++];
//         }
//         temp[j] = '\0';

//         if (strcmp(temp, word) == 0)
//             return 1;
//     }

//     return 0;
// }


// 3. Write a function to make first charatcter of each word of the string capital.   //   222 Program

// int main() {
//     char text[1000];
//     int i;

//     printf("Enter a string: ");
//     fgets(text, sizeof(text), stdin);

//     for (i = 0; text[i] != '\0'; i++) {
//         if ((i == 0 || text[i - 1] == ' ') && (text[i] >= 'a' && text[i] <= 'z')) {
//             text[i] = text[i] - 32;  
//         }
//     }

//     printf("Capitalized: %s", text);
//     return 0;
//}

// 4. Write a function to make acronym name fron a given name , For exmaple , "Ramesh Chand Tiwan" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta".   //   223 Progra

// void makeAcronymName(const char *fullName, char *acronymName) {
//     int i = 0, j = 0, lastSpace = -1;

//     while (fullName[i] != '\0') {
//         if (fullName[i] == ' ') {
//             lastSpace = i;
//         }
//         i++;
//     }

//     i = 0;
//     if (fullName[i] != ' ') {
//         char ch = fullName[i];
//         if (ch >= 'a' && ch <= 'z') ch = ch - 32;  
//         acronymName[j++] = ch;
//         acronymName[j++] = ' ';
//     }

//     while (fullName[i] != '\0' && i < lastSpace) {
//         if (fullName[i] == ' ' && fullName[i + 1] != ' ') {
//             char ch = fullName[i + 1];
//             if (ch >= 'a' && ch <= 'z') ch = ch - 32;
//             acronymName[j++] = ch;
//             acronymName[j++] = ' ';
//         }
//         i++;
//     }

//     i = lastSpace + 1;
//     while (fullName[i] != '\0') {
//         acronymName[j++] = fullName[i++];
//     }

//     acronymName[j] = '\0';
// }

// int main() {
//     char fullName[100], acronym[100];

//     printf("Enter full name: ");
//     fgets(fullName, sizeof(fullName), stdin);
//     int i = 0;
//     while (fullName[i] != '\0') {
//         if (fullName[i] == '\n') {
//             fullName[i] = '\0';
//             break;
//         }
//         i++;
//     }

//     makeAcronymName(fullName, acronym);
//     printf("Acronym name: %s\n", acronym);

//     return 0;
// }
 
// 5. Write a function to concatenate two strings.   //   224 Program

// void concatenate(char str1[], char str2[]);

// int main() {
//     char str1[100], str2[50];
//     int i;

//     printf("Enter first string: ");
//     fgets(str1, sizeof(str1), stdin);

//     printf("Enter second string: ");
//     fgets(str2, sizeof(str2), stdin);

//     for (i = 0; str1[i] != '\0'; i++) {
//         if (str1[i] == '\n') {
//             str1[i] = '\0';
//             break;
//         }
//     }

//     concatenate(str1, str2);

//     printf("Concatenated string: %s\n", str1);

//     return 0;
// }

// void concatenate(char str1[], char str2[]) {
//     int i = 0, j = 0;

//     while (str1[i] != '\0') {
//         i++;
//     }
//     while (str2[j] != '\0') {
//         str1[i] = str2[j];
//         i++;
//         j++;
//     }

//     str1[i] = '\0';
//  }