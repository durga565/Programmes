#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
 
 // 1. Write a function to store strings, take from user to the given 2nd char array.   //   225 Program

// void storeString(char *Tarray) {
//     char ch;
//     int i = 0;

//     printf("Enter a string: ");
//     while ((ch = getchar()) != '\n' && ch != EOF) {
//        Tarray[i++] = ch;
//     }
//     Tarray[i] = '\0'; 
// }

// int main() {
//     char stored[100];

//     storeString(stored);

//     printf("Stored string: %s\n", stored);

//     return 0;
// }


// 2. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken fromt the user.   //    226 Program

// int main() {
//     char str[5][100];  
//     int vowels;

//     printf("Enter 5 strings:\n");

//     for (int i = 0; i < 5; i++) {        // Input string
//         printf("String %d: ", i + 1);
//         fgets(str[i], sizeof(str[i]), stdin);
//         str[i][strcspn(str[i], "\n")] = '\0';
//     }

//     printf("\nNumber of vowels in each string:\n");

//     for (int i = 0; i < 5; i++) {
//         vowels = 0;

//         for (int j = 0; str[i][j] != '\0'; j++) {
//             char ch = str[i][j];
//             if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
//                 ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//                 vowels++;
//             }
//         }

//         printf("String %d (%s): %d vowels\n", i + 1, str[i], vowels);
//     }

//     return 0;
// }

// 3. Write a program to sort 10 city names stored in two dimensional arrays, takenfrom the user.   //   227 Program

// int main() {
//     char cities[10][100]; 
//     char temp[100];         

//     printf("Enter 10 city names:\n");

//     for (int i = 0; i < 10; i++) {
//         printf("City %d: ", i + 1);
//         fgets(cities[i], sizeof(cities[i]), stdin);

//         cities[i][strcspn(cities[i], "\n")] = '\0';
//     }

//     for (int i = 0; i < 9; i++) {
//         for (int j = i + 1; j < 10; j++) {
//             if (strcmp(cities[i], cities[j]) > 0) {
//                 strcpy(temp, cities[i]);
//                 strcpy(cities[i], cities[j]);
//                 strcpy(cities[j], temp);
//             }
//         }
//     }

//     printf("\nCities in alphabetical order:\n");
//     for (int i = 0; i < 10; i++) {
//         printf("%s\n", cities[i]);
//     }

//     return 0;
// }


// 4. Write a function to store each word a string in 2 dimensional char array.   //   228 Program

// void storeWords(char str[], char words[][50], int *count) {
//     int i = 0, j = 0, k = 0;

//     while (str[i] != '\0') {
//         if (!isspace(str[i])) {  
//             words[j][k++] = str[i];
//         } else if (k > 0) {      
//             words[j][k] = '\0';  
//             j++;                 
//             k = 0;
//         }
//         i++;
//     }

//     if (k > 0) { 
//         words[j][k] = '\0';
//         j++;
//     }

//     *count = j; 
// }

// int main() {
//     char str[200];
//     char words[50][50];  
//     int count = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0'; 

//     storeWords(str, words, &count);

//     printf("\nWords in the string:\n");
//     for (int i = 0; i < count; i++) {
//         printf("Word %d: %s\n", i + 1, words[i]);
//     }

//     return 0;
// }

// 5. Write a function to remove duplicate name stored in the list of names in 2d char array.   //   229 Program

// int main() {
//     int n;
//     char **names;
//     char temp[200];

//     printf("Enter number of names: ");
//     scanf("%d", &n);
//     getchar();

//     names = (char **)malloc(n * sizeof(char *));
//     if (names == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     for (int i=0; i<n; i++) {
//         printf("Name %d: ", i + 1);
//         fgets(temp, sizeof(temp), stdin);
//         temp[strcspn(temp, "\n")] = '\0'; 
//         names[i] = (char *)malloc(strlen(temp) + 1);
//         if (names[i] == NULL) {
//             printf("Memory allocation failed!\n");
//             return 1;
//         }
//         strcpy(names[i], temp);
//     }

//     for (int i=0; i<n; i++) {
//         if (names[i] == NULL)
//             continue;

//         for (int j=i+1; j<n; j++) {
//             if (names[j] != NULL && strcmp(names[i], names[j]) == 0) {
//                 free(names[j]);
//                 names[j] = NULL; 
//             }
//         }
//     }

//     printf("\nList after removing duplicates:\n");
//     for (int i=0; i<n; i++) {
//         if (names[i] != NULL) {
//             printf("%s\n", names[i]);
//         }
//     }

//     for (int i=0; i<n; i++) {
//         free(names[i]);
//     }
//     free(names);

//     return 0;
// }


// 1. Write a program to find words ending with a letter 's' and store each such word in a 2d array.   //   230 Program

// int main() {
//     char input[230];
//     char words[50][20]; 
//     int i = 0, j = 0, k = 0;

//     printf("Enter a string: ");
//     fgets(input, sizeof(input), stdin);

//     while (input[i] != '\0') {
//         if (input[i] != ' ' && input[i] != '\n') {
//             words[j][k++] = input[i]; 
//         } else {
//             if (k > 0 && words[j][k - 1] == 's') {
//                 words[j][k] = '\0'; 
//                 j++;                
//             }
//             k = 0; 
//         }
//         i++;
//     }

//     if (k > 0 && words[j][k - 1] == 's') {
//         words[j][k] = '\0';
//         j++;
//     }

//     printf("\nWords ending with 's':\n");
//     for (int x = 0; x < j; x++) {
//         printf("%s\n", words[x]);
//     }

//     return 0;
// }

// 2. Write a function to return the most repeating chacrter in a list of strings.   //   231 Program

// char RepeatingChar(char arr[][100], int n) {
//     int maxCount = 0;
//     char maxChar = '\0';

//     for (int i=0; i<n; i++) {
//         int len = strlen(arr[i]);

//         for (int j=0;j<len; j++) {
//             char ch = arr[i][j];
//             if (isspace(ch)) continue; 

//             int count = 0;

//             for (int x=0; x<n; x++) {
//                 for (int y = 0; arr[x][y] != '\0'; y++) {
//                     if (arr[x][y] == ch)
//                         count++;
//                 }
//             }

//             if (count > maxCount) {
//                 maxCount = count;
//                 maxChar = ch;
//             }
//         }
//     }

//     return maxChar;
// }

// int main() {
//     char strings[10][100];
//     char numStr[10];
//     int n = 0;

//     printf("Enter number of strings: ");
//     fgets(numStr, sizeof(numStr), stdin);

//     for (int i = 0; numStr[i] != '\0'; i++) {
//         if (numStr[i] >= '0' && numStr[i] <= '9') {
//             n = n * 10 + (numStr[i] - '0');
//         }
//     }

//     printf("\nEnter %d strings:\n", n);
//     for (int i=0; i<n; i++) {
//         printf("String %d: ", i + 1);
//         fgets(strings[i], sizeof(strings[i]), stdin);
//         strings[i][strcspn(strings[i], "\n")] = '\0'; 
//     }

//     char result = RepeatingChar(strings, n);
//     printf("\nThe most repeating character is: '%c'\n", result);

//     return 0;
// }

// 3. Write a function to check whether a pair of strings are angram or not, Both the strings are stored in 2d char array.   //   232 Program

// void cleanString(char *str) {
//     int j = 0;
//     for (int i=0; str[i] != '\0'; i++) {
//         if (!isspace(str[i])) {
//             str[j++] = tolower(str[i]);
//         }
//     }
//     str[j] = '\0';
// }

// void sortString(char *str) {
//     int len = strlen(str);
//     for (int i=0; i<len-1; i++) {
//         for (int j=i+1; j<len; j++) {
//             if (str[i] > str[j]) {
//                 char temp = str[i];
//                 str[i] = str[j];
//                 str[j] = temp;
//             }
//         }
//     }
// }

// int areAnagrams(char str1[], char str2[]) {
//     cleanString(str1);
//     cleanString(str2);

//     if (strlen(str1) != strlen(str2))
//         return 0;  

//     sortString(str1);
//     sortString(str2);

//     return (strcmp(str1, str2) == 0);
// }

// int main() {
//     char strings[2][100];

//     printf("Enter first string: ");
//     fgets(strings[0], sizeof(strings[0]), stdin);
//     strings[0][strcspn(strings[0], "\n")] = '\0';  

//     printf("Enter second string: ");
//     fgets(strings[1], sizeof(strings[1]), stdin);
//     strings[1][strcspn(strings[1], "\n")] = '\0';

//     if (areAnagrams(strings[0], strings[1]))
//         printf("\n The strings are anagrams.\n");
//     else
//         printf("\n The strings are not anagrams.\n");

//     return 0;
// } 

// 4. Write a function to store all the words in a given string which are starting from 'a' in a two dimensional char array.   //   233 Program

// void storeAwords(char str[]) {
//     char words[50][100];   
//     char aWords[50][100]; 
//     int i=0,j=0,w=0,count=0;

//     while (1) {
//         if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
//             words[w][j++] = str[i];
//         } else {
//             if (j>0) {
//                 words[w][j] = '\0';
//                 w++;
//                 j=0;
//             }
//         }
//         if (str[i] == '\0') break;
//         i++;
//     }

//     for (int k=0; k<w; k++) {
//         if (tolower(words[k][0]) == 'a') {
//             strcpy(aWords[count], words[k]);
//             count++;
//         }
//     }

//     if (count == 0)
//         printf("\nNo words starting with 'a' found.\n");
//     else {
//         printf("\nWords starting with 'a':\n");
//         for (int k=0; k<count; k++)
//             printf("%s\n", aWords[k]);
//     }
// }

// int main() {
//     char str[500];

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     storeAwords(str);

//     return 0;
// }

// 5. A 2d array is full with 10 email ids. Write a fumction to find how many of them belongs to gmail.com.   //   234 Program

// int countGmail(char emails[][100], int n) {
//     int count = 0;

//     for (int i=0; i<n; i++) {
//         int atIndex = -1;

//         for (int j=0; emails[i][j] != '\0'; j++) {
//             if (emails[i][j] == '@') {
//                 atIndex = j;
//                 break;
//             }
//         }

//         if (atIndex != -1) {
//             if (strcmp(&emails[i][atIndex + 1], "gmail.com") == 0) {
//                 count++;
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     char emails[10][100];
//     int n = 10;

//     printf("Enter 10 email IDs: ");
//     for (int i=0; i<n; i++) {
//         printf("Email %d: ", i + 1);
//         fgets(emails[i], sizeof(emails[i]), stdin);
//         emails[i][strcspn(emails[i], "\n")] = '\0';
//     }

//     int gmailCount = countGmail(emails, n);
//     printf("\nNumber of Gmail IDs: %d\n", gmailCount);

//     return 0;
// }


// 1. Write a function to swap value of two int variable(TSRN).   //   235 Program

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x, y;

//     printf("Enter first integer: ");
//     scanf("%d", &x);

//     printf("Enter second integer: ");
//     scanf("%d", &y);

//     printf("\n x = %d y = %d\n", x, y);

//     swap(&x, &y);  // call with function address

//     printf(" x = %d y = %d\n", x, y);

//     return 0;
// }


// 2. Write a function to search all occurrences of a given character in a given string.
//    result of searchis a list of indices to be stored in the given arr.[ void search_all occurences(char *str, char ch, int* arr );].   //   236 Program

// void search_occurrences(char *str, char ch, int *arr, int *count) {
//     *count = 0; 

//     for (int i=0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             arr[*count] = i;  // store index
//             (*count)++;
//         }
//     }
// }

// int main() {
//     char str[200];
//     char chStr[10];   
//     char ch;
//     int indices[200]; 
//     int count;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0';  

//     printf("Enter character to search: ");
//     fgets(chStr, sizeof(chStr), stdin);
//     ch = chStr[0];  

//     search_occurrences(str, ch, indices, &count);

//     if (count == 0) {
//         printf("\nCharacter '%c' not found in the string.\n", ch);
//     } else {
//         printf("\nCharacter '%c' found at indices: ", ch);
//         for (int i=0; i<count; i++) {
//             printf("%d ", indices[i]);
//         }
//         printf("\nTotal occurrences: %d\n", count);
//     }

//     return 0;
// }

// 3. Write a function to convert a given string into uppercase.   //   237 program

//  int main() {
//     char arr[50];
//     int i;
//     printf("Enter a string: ");
//     fgets(arr,50,stdin);

//     printf("Upper case: ");
//     for(i=0; arr[i] != '\0'; i++) {
//         printf("%c", (arr[i] >= 'a' && arr[i] <= 'z') ? arr[i] - ('a' - 'A') : arr[i]);
//     }
//       return 0;
//  }

// 4. Write a function to convert a given string into lower case.   //   238 Program

//  int main() {
//     char arr[50];
//     int i;
//     printf("Enter a string: ");
//     fgets(arr,50,stdin);

//     printf("Upper case: ");
//     for(i=0; arr[i] != '\0'; i++) {
//         printf("%c", (arr[i] >= 'A' && arr[i] <= 'Z') ? arr[i] - ('A' - 'a') : arr[i]);
//     }
//       return 0;
//  }

// 5. Write a function to extract a substring from a given string eith specified start index ( Inclusive ) and end index ( exclusive ).
//    and store the extracted string in another char array. [ void extract_string(char *str,int start_index,int end_index,char *result)].   //   239 Program

// void extract_string(char *str, int start_index, int end_index, char *result) {
//     int i = start_index;
//     int j = 0;

//     if (start_index < 0 || end_index <= start_index || str[start_index] == '\0') {
//         result[0] = '\0';
//         return;
//     }

//     while (i < end_index && str[i] != '\0') {
//         result[j++] = str[i++];
//     }

//     result[j] = '\0';
// }

// int main() {
//     char str[100];
//     char result[100];
//     int start_index, end_index;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     str[strcspn(str, "\n")] = '\0';

//     printf("Enter start index: ");
//     scanf("%d", &start_index);

//     printf("Enter end index: ");
//     scanf("%d", &end_index);

//     extract_string(str, start_index, end_index, result);
//     printf("Extracted substring: %s\n", result);

//     return 0;
// }

// 1. Write a function to swap strings of two char arrays.   //   240 Program 

// void swap(char arr[]);

// int main() {
//     char str[50];
//     printf("Enter a string: ");
//     fgets(str, 50, stdin);
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == '\n') {
//             str[i] = '\0';
//             break;
//         }
//     }

//     printf("Cleaned string: %s\n", str);
//     return 0;
// }


//  void swap(char arr[]) {
//     int len = strlen(arr);
//     for (int i = 0; i < len / 2; i++) {
//         char temp = arr[i];
//         arr[i] = arr[len - i - 1];
//         arr[len - i - 1] = temp;
//     }
// }

// 2. Write a function to sort an array of int types values. [ void sort(int *ptr,int size)]   //   241 program

// void sort(int *ptr, int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (ptr[j] > ptr[j + 1]) {
//                 int temp = ptr[j];
//                 ptr[j] = ptr[j + 1];
//                 ptr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int size;
//     printf("Enter the number of elements: ");
//     scanf("%d", &size);

//     int arr[size];
//     printf("Enter %d integers:\n", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     sort(arr, size);

//     printf("Sorted array:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// 3. Write a function to merge two arrays in a given array. [ void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)]   //   242 Program

// void merge(int *arr1, int size1, int *arr2, int size2, int *arr3) {
//     memmove(arr3, arr1, size1 * sizeof(int));
//     memmove(arr3 + size1, arr2, size2 * sizeof(int));
// }

// int main() {
//     char input[256];
//     int size1, size2;
//     printf("Enter size of first array: ");
//     fgets(input, sizeof(input), stdin);
//     size1 = atoi(input);

//     int arr1[size1];
//     printf("Enter %d elements for first array : ", size1);
//     fgets(input, sizeof(input), stdin);

//     char *ptr = strtok(input, " ");
//     for (int i = 0; i < size1 && ptr != NULL; i++) {
//         arr1[i] = atoi(ptr);
//         ptr = strtok(NULL, " ");
//     }

//     printf("Enter size of second array: ");
//     fgets(input, sizeof(input), stdin);
//     size2 = atoi(input);

//     int arr2[size2];
//     printf("Enter %d elements for second array : ", size2);
//     fgets(input, sizeof(input), stdin);

//     ptr = strtok(input, " ");
//     for (int i = 0; i < size2 && ptr != NULL; i++) {
//         arr2[i] = atoi(ptr);
//         ptr = strtok(NULL, " ");
//     }

//     int arr3[size1 + size2];
//     merge(arr1, size1, arr2, size2, arr3);

//     printf("Merged array:\n");
//     for (int i = 0; i < size1 + size2; i++) {
//         printf("%d ", arr3[i]);
//     }
//     printf("\n");

//     return 0;
// }

// 4. Write a functionto move first value of the array to position where all smaller values will be the left and greater values will be in the right.      //      243 Program

// int main() {
//     int n;
//     int arr[100];

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", arr + i);

//     int pivot = *arr;            // first element as pivot
//     int *left = arr;             // start pointer
//     int *right = arr + n - 1;    // end pointer

//     while (left < right) {
//         while (left < right && *right >= pivot)
//             right--;

//         if (left < right) {
//             *left = *right;      // move smaller element to left 
//             left++;
//         }

//         while (left < right && *left <= pivot)       // Move left pointer rightward until a larger element is found
//             left++;

//         if (left < right) {
//             *right = *left;      // move larger element to right hole
//             right--;
//         }
//     }

//     *left = pivot;   // pivot in correct position

//     printf("\nArray after partition:\n");
//     for (int *p = arr; p < arr + n; p++)
//         printf("%d ", *p);

//     printf("\nPivot positioned at index %d (value %d)\n", left - arr, *left);

//     return 0;
// }


// 5. There are five classes with different number of students in the. Five arrayscontaing marks of students of each class,
//    Write a functionto receive an address of an arry of pointers to access marks of all the student. The job of function is to find the highest marks among all the classes.   //   244 Program

// int find_highest_marks(int *classes[], int num_students[], int num_classes) {
//     int max = classes[0][0];

//     for (int i = 0; i < num_classes; i++) {
//         for (int j = 0; j < num_students[i]; j++) {
//             if (classes[i][j] > max) {
//                 max = classes[i][j];
//             }
//         }
//     }

//     return max;
// }

// int main() {
//     int num_classes = 5;
//     int num_students[5];
//     int *classes[5];

//     for (int i = 0; i < num_classes; i++) {
//         printf("Enter number of students in class %d: ", i + 1);
//         scanf("%d", &num_students[i]);

//         classes[i] = (int *)malloc(num_students[i] * sizeof(int));

//         printf("Enter marks for class %d:\n", i + 1);
//         for (int j = 0; j < num_students[i]; j++) {
//             printf("  Student %d: ", j + 1);
//             scanf("%d", &classes[i][j]);
//         }
//     }

//     int highest = find_highest_marks(classes, num_students, num_classes);
//     printf("\nHighest mark among all classes: %d\n", highest);

//     for (int i = 0; i < num_classes; i++) {
//         free(classes[i]);
//     }

//     return 0;
// }

// 1. Define a structure Employee with member variables id, name,salary.   //   245 Program

// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };

// int main() {
//     struct Employee emp;

//     printf("Enter employee ID: ");
//     scanf("%d", &emp.id);

//     printf("Enter employee name( With out space ): ");
//     scanf("%s",emp.name);

//     printf("Enter employee salary: ");
//     scanf("%f", &emp.salary);

//     printf("\nEmployee Details: ");
//     printf("ID: %d\n", emp.id);
//     printf("Name: %s\n", emp.name);
//     printf("Salary: %.2f\n", emp.salary);

//     return 0;
// }

// 2. Write a function to take input employee data from the user.[ Refer structure from question 1].   //   246 Program

// struct Employee {
//     int id;
//     char name[100];
//     int age;
//     float salary;
// };

// void inputEmployee(struct Employee *emp) {
//     printf("Enter Employee ID: ");
//     scanf("%d", &emp->id);
//     getchar(); 

//     printf("Enter Employee Name: ");
//     fgets(emp->name, sizeof(emp->name), stdin);
//     size_t len = strlen(emp->name);
//     if (len > 0 && emp->name[len - 1] == '\n') {
//         emp->name[len - 1] = '\0';
//     }

//     printf("Enter Employee Age: ");
//     scanf("%d", &emp->age);

//     printf("Enter Employee Salary: ");
//     scanf("%f", &emp->salary);
// }

// int main() {
//     struct Employee emp;

//     inputEmployee(&emp);

//     printf("\n\n--- Employee Details ---\n\n");

//     printf("ID: %d\n", emp.id);
//     printf("Name: %s\n", emp.name);
//     printf("Age: %d\n", emp.age);
//     printf("Salary: %.2f\n", emp.salary);

//     return 0;
//   }
    
// 3. Write a function to display employee data. [ Refer structure from question 1 ].   //   247 Program

// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };

// void displayEmployee(struct Employee e) {
//     printf("\nEmployee ID: %d", e.id);
//     printf("\nEmployee Name: %s", e.name);
//     printf("\nEmployee Salary: %.2f\n", e.salary);
// }

// int main() {
//     struct Employee e;

//     printf("Enter Employee ID: ");
//     scanf("%d", &e.id);
//     getchar(); 

//     printf("Enter Employee Name: ");
//     fgets(e.name, sizeof(e.name), stdin);
//     e.name[strcspn(e.name, "\n")] = '\0';

//     printf("Enter Employee Salary: ");
//     scanf("%f", &e.salary);

//     displayEmployee(e);
//     return 0;
// }

// 4. write a function to find the highest salary employee from a given arry of 10 employee. [ Refer structure from question 1].   //   248 Program

// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };

// struct Employee findHighestSalary(struct Employee emp[], int n) {
//     int i, index = 0;
//     for (i=1; i<n; i++) {
//         if (emp[i].salary > emp[index].salary) {
//             index = i;
//         }
//     }
//     return emp[index];
// }

// int main() {
//     struct Employee emp[5];
//     int i;

//     printf("Enter details of 5 employees:\n");
//     for (i=0; i<5; i++) {
//         printf("\nEmployee %d\n", i + 1);
//         printf("ID: ");
//         scanf("%d", &emp[i].id);
//         printf("Name: ");
//         scanf("%s", emp[i].name);
//         printf("Salary: ");
//         scanf("%f", &emp[i].salary);
//     }

//     struct Employee highest = findHighestSalary(emp, 5);

//     printf("\nEmployee with Highest Salary:\n");
//     printf("ID: %d\nName: %s\nSalary: %.2f\n", highest.id, highest.name, highest.salary);

//     return 0;
// }

// 5. Write a function to sort employee according to their salaries. [ Refer structure from question 1 ].   //   249 Program

// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };

// void sortBySalary(struct Employee emp[], int n) {
//     int i, j;
//     struct Employee temp;

//     for (i = 0; i < n - 1; i++) {
//         for (j = i + 1; j < n; j++) {
//             if (emp[i].salary > emp[j].salary) {
//                 temp = emp[i];
//                 emp[i] = emp[j];
//                 emp[j] = temp;
//             }
//         }
//     }
// }

// int main() {
//     struct Employee emp[10];
//     int i;

//     printf("Enter details of 10 employees:\n");
//     for (i = 0; i < 10; i++) {
//         printf("\nEmployee %d\n", i + 1);
//         printf("ID: ");
//         scanf("%d", &emp[i].id);
//         printf("Name: ");
//         scanf("%s", emp[i].name);
//         printf("Salary: ");
//         scanf("%f", &emp[i].salary);
//     }

//     sortBySalary(emp, 10);

//     printf("\nEmployees sorted by salary:\n");
//     for (i = 0; i < 10; i++) {
//         printf("ID: %d\tName: %s\tSalary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
//     }

//     return 0;
// }


// 6. Write a function to sort employee according to their names. [ Refer structure from question 1].   //   250 Program

// struct Employee {
//     int id;
//     char name[50];
//     float salary;
// };

// void sortByName(struct Employee emp[], int n) {
//     int i, j;
//     struct Employee temp;

//     for (i = 0; i < n - 1; i++) {
//         for (j = i + 1; j < n; j++) {
//             if (strcmp(emp[i].name, emp[j].name) > 0) {
//                 temp = emp[i];
//                 emp[i] = emp[j];
//                 emp[j] = temp;
//             }
//         }
//     }
// }

// int main() {
//     struct Employee emp[10];
//     int i;

//     printf("Enter details of 10 employees:\n");
//     for (i = 0; i < 10; i++) {
//         printf("\nEmployee %d\n", i + 1);
//         printf("ID: ");
//         scanf("%d", &emp[i].id);
//         printf("Name: ");
//         scanf("%s", emp[i].name);
//         printf("Salary: ");
//         scanf("%f", &emp[i].salary);
//     }

//     sortByName(emp, 10);

//     printf("\nEmployees sorted by name:\n");
//     for (i = 0; i < 10; i++) {
//         printf("ID: %d\tName: %s\tSalary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
//     }

//     return 0;
// }


// 1. Write a function to calculate the difference between two time periods.   //   251 Program

// struct Time {
//     int hours;
//     int minutes;
//     int seconds;
// };

// int main() {
//     int n;
//     char buffer[100];   

//     printf("Enter number of time period pairs: ");
//     if (!fgets(buffer, sizeof(buffer), stdin)) {
//         printf("Error reading input.\n");
//         return 1;
//     }
//     sscanf(buffer, "%d", &n);

//     for (int i = 1; i <= n; i++) {
//         struct Time start, stop, diff;

//         printf("\n--- Time Period %d ---\n", i);
//         printf("Enter start time (hh mm ss): ");
//         if (!fgets(buffer, sizeof(buffer), stdin)) {
//             printf("Error reading input.\n");
//             return 1;
//         }
//         if (sscanf(buffer, "%d %d %d", &start.hours, &start.minutes, &start.seconds) != 3) {
//             printf("Invalid format! Please enter time as hh mm ss.\n");
//             return 1;
//         }

//         printf("Enter stop time (hh mm ss): ");
//         if (!fgets(buffer, sizeof(buffer), stdin)) {
//             printf("Error reading input.\n");
//             return 1;
//         }
//         if (sscanf(buffer, "%d %d %d", &stop.hours, &stop.minutes, &stop.seconds) != 3) {
//             printf("Invalid format! Please enter time as hh mm ss.\n");
//             return 1;
//         }

    
//         if (start.hours < 0 || start.hours > 23 || stop.hours < 0 || stop.hours > 23 ||
//             start.minutes < 0 || start.minutes > 59 || stop.minutes < 0 || stop.minutes > 59 ||
//             start.seconds < 0 || start.seconds > 59 || stop.seconds < 0 || stop.seconds > 59) {
//             printf("Invalid time entered! Please enter valid times.\n");
//             return 1;
//         }

//         if (stop.seconds < start.seconds) {
//             stop.seconds += 60;
//             stop.minutes--;
//         }
//         diff.seconds = stop.seconds - start.seconds;

//         if (stop.minutes < start.minutes) {
//             stop.minutes += 60;
//             stop.hours--;
//         }
//         diff.minutes = stop.minutes - start.minutes;

//         if (stop.hours >= start.hours)
//             diff.hours = stop.hours - start.hours;
//         else
//             diff.hours = (24 - start.hours) + stop.hours;

//         printf("Time Difference for Period %d: %02d:%02d:%02d\n", i, diff.hours, diff.minutes, diff.seconds);
//     }

//     return 0;
// }
 
// 2. Write a program to store information of 10 students and display them using structure.   //   252 Program

// struct Student {
//     int roll;
//     char name[50];
//     float marks;
// };

// int main() {
//     struct Student s[10]; 
//     int i;

//     printf("Enter information of 10 students:\n");

//     for (i = 0; i < 10; i++) {
//         printf("\nEnter details of student %d\n", i + 1);
//         printf("Roll Number: ");
//         scanf("%d", &s[i].roll);
//         getchar(); 

//         printf("Name: ");
//         fgets(s[i].name, sizeof(s[i].name), stdin);

//         for (int j = 0; s[i].name[j] != '\0'; j++) {
//             if (s[i].name[j] == '\n') {
//                 s[i].name[j] = '\0';
//                 break;
//             }
//         }

//         printf("Marks: ");
//         scanf("%f", &s[i].marks);
//     }

//     printf("\n\nDisplaying Information of Students:\n");
//     printf("Roll No.\tName\t\tMarks\n");
//     printf("----------------------------------------------------\n");

//     for (i = 0; i < 10; i++) {
//         printf("%d\t\t%-15s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
//     }

//     return 0;
// }


// 3. Write a program to store information of n students and display them using structure.   //   253Program

// struct Student {
//     int roll;
//     char name[50];
//     float marks;
// };

// int readInt(const char *prompt) {
//     char str[50];
//     int value;

//     while (1) {
//         printf("%s", prompt);
//         if (!fgets(str, sizeof(str), stdin))
//             continue;

//         str[strcspn(str, "\n")] = '\0';

//         int valid = 1;
//         for (int i = 0; str[i] != '\0'; i++) {
//             if (!isdigit(str[i]) && str[i] != '-') {
//                 valid = 0;
//                 break;
//             }
//         }

//         if (sscanf(str, "%d", &value) == 1 && valid)
//             return value;

//         printf("Invalid input Please enter a valid integer.\n");
//     }
// }

// float readFloat(const char *prompt) {
//     char str[50];
//     float value;

//     while (1) {
//         printf("%s", prompt);
//         if (!fgets(str, sizeof(str), stdin))
//             continue;

//         str[strcspn(str, "\n")] = '\0';

//         if (sscanf(str, "%f", &value) == 1)
//             return value;

//         printf("Invalid input! Please enter a valid number.\n");
//     }
// }

// int main() {
//     int n, i;
//     struct Student *s;

//     n = readInt("Enter the number of students: ");
//     if (n <= 0) {
//         printf("Number of students must be greater than zero.\n");
//         return 1;
//     }

//     s = (struct Student *)malloc(n * sizeof(struct Student));
//     if (s == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     printf("\nEnter information for %d students:\n", n);

//     for (i = 0; i < n; i++) {
//         printf("\n--- Student %d ---\n", i + 1);

//         s[i].roll = readInt("Roll Number: ");

//         printf("Name: ");
//         fgets(s[i].name, sizeof(s[i].name), stdin);
//         s[i].name[strcspn(s[i].name, "\n")] = '\0'; 

//         s[i].marks = readFloat("Marks: ");
//     }

//     printf("\n\n Student Information:\n");
//     printf("------------------------------------------------------\n");
//     printf("Roll No.\tName\t\tMarks\n");
//     printf("------------------------------------------------------\n");
//     for (i = 0; i < n; i++) {
//         printf("%d\t\t%-15s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
//     }

//     free(s);
//     return 0;
// }

// 4. Write a program to enter the marks of 5 students in Chemistry,Mathmatics and Physics
//    ( Each out 0f 100 ) using a structure named Marks having elements rool no, name , chem_marks,math_marks and display phy_marks and then display the percentage of each dtudent.      //   254 Program

// struct Marks {
//     int roll_no;
//     char name[50];
//     float chem_marks;
//     float math_marks;
//     float phy_marks;
// };

// int main() {
//     struct Marks students[5];
//     char str[50];  
//     int i;
//     float total, percentage;

//     printf("Enter information for 5 students:\n");

//     for (i = 0; i < 5; i++) {
//         printf("\n--- Student %d ---\n", i + 1);

//         printf("Enter Roll Number: ");
//         fgets(str, sizeof(str), stdin);
//         sscanf(str, "%d", &students[i].roll_no);

//         printf("Enter Name: ");
//         fgets(students[i].name, sizeof(students[i].name), stdin);
//         students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

//         printf("Enter Chemistry Marks (out of 100): ");
//         fgets(str, sizeof(str), stdin);
//         sscanf(str, "%f", &students[i].chem_marks);

//         printf("Enter Mathematics Marks (out of 100): ");
//         fgets(str, sizeof(str), stdin);
//         sscanf(str, "%f", &students[i].math_marks);

//         printf("Enter Physics Marks (out of 100): ");
//         fgets(str, sizeof(str), stdin);
//         sscanf(str, "%f", &students[i].phy_marks);
//     }
//     printf("\n\n Student Marks and Percentage:\n");
//     printf("-----------------------------------------------------------------------\n");
//     printf("Roll No.\tName\t\tChem\tMath\tPhys\tPercentage\n");
//     printf("-----------------------------------------------------------------------\n");

//     for (i = 0; i < 5; i++) {
//         total = students[i].chem_marks + students[i].math_marks + students[i].phy_marks;
//         percentage = total / 3.0;

//         printf("%d\t\t%-15s\t%.1f\t%.1f\t%.1f\t%.2f%%\n",
//                students[i].roll_no,
//                students[i].name,
//                students[i].chem_marks,
//                students[i].math_marks,
//                students[i].phy_marks,
//                percentage);
//     }

//     return 0;
// }

// 1. Define a function to input variable length string and store it in an arry without memory wastage.   //   255 Program

// int main() {
//     char size_str[10];
//     int size = 0;
//     char *str;
//     int length = 0;

//     printf("Enter maximum possible length of the string: ");
//     fgets(size_str, sizeof(size_str), stdin);

//     for (int i = 0; size_str[i] != '\0'; i++) {
//         if (size_str[i] >= '0' && size_str[i] <= '9') {
//             size = size * 10 + (size_str[i] - '0');
//         }
//     }

//     if (size <= 0) {
//         printf("Invalid size entered!\n");
//         return 1;
//     }

//     str = (char *)malloc((size + 1) * sizeof(char));
//     if (str == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     printf("Enter a string: ");
//     fgets(str, size + 1, stdin);
//     str[strcspn(str, "\n")] = '\0';

//     for (int i = 0; str[i] != '\0'; i++) {
//         length++;
//     }

//     printf("\nYou entered: %s", str);
//     printf("\nLength of the string: %d\n", length);

//     free(str);
//     return 0;
// }



// 2. Write a program to ask the user to input a number of data values he would like to enter the create an array dynamically
//    the data values. Now take the input from the user and display the average of data values.   //   256 Program

// int main() {
//     char input[50];
//     int n = 0;

//     printf("Enter number of values: ");
//     fgets(input, sizeof(input), stdin);

//     for (int i=0; input[i] != '\0'; i++) {
//         if (input[i] >= '0' && input[i] <= '9') {
//             n = n * 10 + (input[i] - '0');
//         }
//     }

//     if (n <= 0) {
//         printf("Invalid number of values.\n");
//         return 1;
//     }

//     int *arr = (int *)malloc(n * sizeof(int));
//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     for (int i=0; i<n; i++) {
//         char valStr[50];
//         printf("Enter value %d: ", i + 1);
//         fgets(valStr, sizeof(valStr), stdin);
//         arr[i] = atoi(valStr);  
//     }

//     for (int i=0; i<n-1; i++) {
//         for (int j=0; j<n-i-1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("\nSorted values (ascending): ");
//     for (int i=0; i<n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     free(arr); 
//     return 0;
// }

// 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.   //   257 Program

// int stringToInt(char *str) {
//     int num=0,sign=1,i=0;

//     if (str[0] == '-') {       // Negative number handle
//         sign = -1;
//         i = 1;
//     }

//     for (; str[i] != '\0' && str[i] != '\n'; i++) {
//         if (str[i] >= '0' && str[i] <= '9') {
//             num = num * 10 + (str[i] - '0');
//         } else {
//             break;
//         }
//     }

//     return num * sign;
// }

// int main() {
//     char input[50];
//     int n=0;

//     printf("Enter number of elements: ");
//     fgets(input, sizeof(input), stdin);

//     n = stringToInt(input);

//     if (n <= 0) {
//         printf("Invalid number of elements.\n");
//         return 1;
//     }

//     int *arr = (int *)malloc(n * sizeof(int));
//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     for (int i=0; i<n; i++) {
//         char numStr[50];
//         printf("Enter number %d: ", i + 1);
//         fgets(numStr, sizeof(numStr), stdin);
//         arr[i] = stringToInt(numStr);
//     }

//     int sum=0;
//     for (int i=0; i<n; i++) {
//         sum += arr[i];
//     }

//     printf("\nSum is: %d\n", sum);

//     free(arr);

//     return 0;
// }

// 4. Write a function to merge two array and store in dynamically created array, Return address of the dynamically created array.   //   258 Program

// int* mergeArrays(int arr1[], int n1, int arr2[], int n2, int *mergedSize) {
//     *mergedSize = n1 + n2;

//     int *merged = (int *)malloc((*mergedSize) * sizeof(int));
//     if (merged == NULL) {
//         printf("Memory allocation failed!\n");
//         return NULL;
//     }

//     for (int i = 0; i < n1; i++) {
//         merged[i] = arr1[i];
//     }

//     for (int i = 0; i < n2; i++) {
//         merged[n1 + i] = arr2[i];
//     }

//     return merged;

// }

// int stringToInt(char *str) {
//     int num = 0, sign = 1, i = 0;
//     if (str[0] == '-') {
//         sign = -1;
//         i = 1;
//     }
//     for (; str[i] != '\0' && str[i] != '\n'; i++) {
//         if (str[i] >= '0' && str[i] <= '9') {
//             num = num * 10 + (str[i] - '0');
//         } else {
//             break;
//         }
//     }
//     return num * sign;
// }

// int main() {
//     char input[50];
//     int n1, n2;

//     printf("Enter size of first array: ");
//     fgets(input, sizeof(input), stdin);
//     n1 = stringToInt(input);

//     int arr1[n1];
//     for (int i = 0; i < n1; i++) {
//         char numStr[50];
//         printf("Enter element %d of first array: ", i + 1);
//         fgets(numStr, sizeof(numStr), stdin);
//         arr1[i] = stringToInt(numStr);
//     }

//     printf("Enter size of second array: ");
//     fgets(input, sizeof(input), stdin);
//     n2 = stringToInt(input);

//     int arr2[n2];
//     for (int i=0; i<n2; i++) {
//         char numStr[50];
//         printf("Enter element %d of second array: ", i + 1);
//         fgets(numStr, sizeof(numStr), stdin);
//         arr2[i] = stringToInt(numStr);
//     }

//     int mergedSize;
//     int *mergedArray = mergeArrays(arr1, n1, arr2, n2, &mergedSize);

//     if (mergedArray != NULL) {
//         printf("\nMerged array: ");
//         for (int i=0; i<mergedSize; i++) {
//             printf("%d ", mergedArray[i]);
//         }
//         printf("\n");

//         free(mergedArray);
//     }

//     return 0;
// }
