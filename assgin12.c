#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//1. Write a function to find the greatest number from the given array of any size(TSRS).   //   178 Program

// int greatest(int arr[],int size);

//  int greatest(int arr[],int size) {
//     if(size<=0) {
//         return -1;
//     }
//  int max=arr[0];
//  for(int i=0;i<size;i++) {
//     if(arr[i] > max) {
//         max=arr[i];
//     }
//  }
//   return max;
//  }

//   int main() {
//      int s1;
//      printf("Enter size of array: ");
//      scanf("%d",&s1);
//       if(s1 <= 0) {
//         printf("Invalid array\n");
//         return 1;
//       }

//       int arr[s1];
//       for(int i=0;i<s1;i++) {
//         printf("Enter elment: %d\n",i+1);
//         scanf("%d",&arr[i]);
//       }
//        int great=greatest(arr,s1);
//        printf("Greatest number is: %d\n",great);
//        return 0;
//   }

// 2. Write a function to find the smallest number from the given array of any size(TSRS).   //   179 Program

//  int smallest(int ar[],int size);

//  int main() {
//     int i,s1;
//     printf("Enter nuber of array; ");
//     scanf("%d",&s1);

//      if(s1<=0) {
//         printf("Invalid array\n");
//         return 1;
//      }

//       int arr[s1];
//       for(int i=0;i<s1;i++) {
//         printf("Enter element: %d\n", i+1);
//         scanf("%d",&arr[i]);
//       }
//        int small=smallest(arr,s1);
//        printf("Smallest number is: %d\n",small);
//        return 0;
//  }
//   int smallest(int arr[],int size) {
//       if(size<=0) {
//         return -1;
//       }
//       int min=arr[0];
//      for(int i=1;i<size;i++) {
//         if(arr[i] < min) {
//             min=arr[i];
//         }
//      }
//       return min;
//     }

// 3. Write a function to sort an array of any size (TSRN).   //   180 Program

//  void sort(int a[],int size);

//  void sort(int a[],int size) {
//      int i,j,temp;

//      for(i=0;i<size-1;i++) {
//         for(j=0;j<size-i-1;j++) {
//             if(a[j] > a[j+1]) {
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//          }
//       }
//    }

//   int main() {
//     int size;
//      int arr[100];

//      printf("Enter number of elements: ");
//      scanf("%d",&size);

//      printf("Enter elemnts of array: ");
//      for(int i=0;i<size;i++) {
//         scanf("%d",&arr[i]);
//       }
//      sort(arr,size);

//      printf("Sort array is:  ");
//      for(int i=0;i<size;i++) {
//         printf("%d ", arr[i]);
//         }
//         return 0;
//     }

// 4. write a function to rotate an array by n position in d different. The d is an indicative value for left or right. ( For example, if array of size 5 is [32,29,40,12,70], n is 2 and d is left, then resulting array after left rotation 2 times is [40,12,70,32,29].   //   180 Program

//  void rotate(int arr[],int size,int n,int d);

// void rotate(int arr[], int size, int n, int d);     // Prototype

// int stringToInt(char *str) {
//     int num=0, sign=1, i=0;
//     if (str[0] == '-') {
//         sign = -1;
//         i=1;
//     }

//     for (; str[i] != '\0' && str[i] != '\n'; i++) {
//         if (str[i] >= '0' && str[i] <= '9') {
//             num = num * 10 + (str[i] - '0');
//         }
//     }

//     return num * sign;
// }

// int main() {
//     char input[50];
//     int size, n, d;
//     int arr[100];

//     printf("Number of elements: ");
//     fgets(input, sizeof(input), stdin);
//     size = stringToInt(input);

//     printf("Enter %d elements:\n", size);
//     for (int i = 0; i < size; i++) {
//         fgets(input, sizeof(input), stdin);
//         arr[i] = stringToInt(input);
//     }

//     printf("Number of positions to rotate: ");
//     fgets(input, sizeof(input), stdin);
//     n = stringToInt(input);

//     printf("Enter direction (0 for left, 1 for right): ");
//     fgets(input, sizeof(input), stdin);
//     d = stringToInt(input);


//     rotate(arr, size, n, d);

//     printf("Rotated array is: ");
//     for (int i=0; i<size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// void rotate(int arr[], int size, int n, int d) {
//     int rotation[100];
//     n = n % size; 

//     if (d == 0) { 
//         for (int i=0; i<size; i++) {
//             rotation[i] = arr[(i + n) % size];
//         }
//     } else { 
//         for (int i=0; i<size; i++) {
//             rotation[i] = arr[(i - n + size) % size];
//         }
//     }

//     for (int i=0; i<size; i++) {
//         arr[i] = rotation[i];
//   }
// }


// 5. Wrie a function to find the first occurance of adjacent duplicate values in the array function has return the value of the element.   //   181 Program

// int firstAdjacentDuplicate(int arr[], int size) {
//     for (int i=0; i<size-1; i++) {
//         if (arr[i] == arr[i + 1]) {
//             return arr[i]; 
//         }
//     }
//     return -1;
// }

// int stringToInt(char *str) {
//     int num=0, sign=1, i=0;
//     if (str[0] == '-') {
//         sign = -1;
//         i=1;
//     }
//     for (; str[i] != '\0' && str[i] != '\n'; i++) {
//         if (str[i] >= '0' && str[i] <= '9') {
//             num = num * 10 + (str[i] - '0');
//         }
//     }
//     return num * sign;
// }

// int main() {
//     char input[50];
//     int size;

//     printf("Enter size of array: ");
//     fgets(input, sizeof(input), stdin);
//     size = stringToInt(input);

//     int arr[size];

//     printf("Enter %d elements:\n", size);
//     for (int i = 0; i < size; i++) {
//         fgets(input, sizeof(input), stdin);
//         arr[i] = stringToInt(input);
//     }

//     int result = firstAdjacentDuplicate(arr, size);

//     if (result != -1) {
//         printf("First adjacent duplicate element: %d\n", result);
//     } else {
//         printf("No adjacent duplicate elements found.\n");
//     }

//     return 0;
// }



// 1. Write a function to swap two elements of given array with specified indices.   //   182 Program

// void swapElements(int arr[], int index1, int index2) {
//     arr[index1] = arr[index1] + arr[index2];
//     arr[index2] = arr[index1] - arr[index2];
//     arr[index1] = arr[index1] - arr[index2];
// }

// int main() {
//     int arr[100], n;
//     int i, index1, index2;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter two indices to swap: ");
//     scanf("%d %d", &index1, &index2);

//     if (index1 >= 0 && index1 < n && index2 >= 0 && index2 < n) {          
//         swapElements(arr, index1, index2);

//         printf("Array after swapping:\n");
//         for (i = 0; i < n; i++) {
//             printf("%d ", arr[i]);
//         }
//     } else {
//         printf("Invalid indices!\n");
//     }

//     return 0;
// }

// 2. Write a function to count a total number of duplicate elements in array ( Means elements that oocurs 2 times in array).   //   183 Program

// int countDuplicates(int arr[], int n) {
//     int count = 0;

//     int visited[n];
//     for (int i=0; i<n; i++) {
//         visited[i] = 0;
//     }

//     for (int i=0; i<n; i++) {
//         if (visited[i] == 1) continue; 

//         int dupCount = 1;
//         for (int j=i+1; j<n; j++) {
//             if (arr[i] == arr[j]) {
//                 dupCount++;
//                 visited[j] = 1; 
//             }
//         }

//         if (dupCount > 1) {
//             count += dupCount; 
//         }
//     }

//     return count;
// }

// int stringToInt(char *str) {
//     int num=0,sign=1,i=0;
//     if (str[0] == '-') {
//         sign = -1;
//         i = 1;
//     }
//     for (; str[i] != '\0' && str[i] != '\n'; i++) {
//         if (str[i] >= '0' && str[i] <= '9') {
//             num = num * 10 + (str[i] - '0');
//         }
//     }
//     return num * sign;
// }

// int main() {
//     char input[50];
//     int n;

//     printf("Enter size of array: ");
//     fgets(input, sizeof(input), stdin);
//     n = stringToInt(input);

//     int arr[n];

//     for (int i=0; i<n; i++) {
//         char numStr[50];
//         printf("Enter element %d: ", i + 1);
//         fgets(numStr, sizeof(numStr), stdin);
//         arr[i] = stringToInt(numStr);
//     }

//     int totalDuplicates = countDuplicates(arr, n);
//     printf("\nTotal number of duplicate elements: %d\n", totalDuplicates);

//     return 0;
// }



// 3. Write a function to print all uniqiue elements in an array.   //   184Program

// int main() {
//     char input[500];
//     int arr[100], size = 0;

//     printf("Enter the elements: ");
//     fgets(input, sizeof(input), stdin);

//     char *str = input;
//     while (*str) {
//         while (*str && isspace(*str)) str++;
//         if (*str && isdigit(*str) || (*str == '-' && isdigit(*(str + 1)))) {
//             arr[size++] = strtol(str, &str, 10); 
//         } else {
//             while (*str && !isspace(*str)) str++; 
//         }
//     }

//     printf("Unique elements: ");
//     for (int i = 0; i < size; i++) {
//         int count = 0;
//         for (int j = 0; j < size; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if (count == 1) {
//             printf("%d ", arr[i]);
//         }
//     }

//     return 0;
// }


// 4. Write a function to merge two arrays of the same size sorted in descending order.   //   185 Program

// void mergeDescending(int arr1[], int arr2[], int merged[], int n1, int n2) {
//     int i = 0, j = 0, k = 0;
//     while (i < n1 && j < n2) {
//         if (arr1[i] >= arr2[j]) {
//             merged[k++] = arr1[i++];
//         } else {
//             merged[k++] = arr2[j++];
//         }
//     }
//     while (i < n1) merged[k++] = arr1[i++];
//     while (j < n2) merged[k++] = arr2[j++];
// }

// int main() {
//     int n1, n2;
//     char input[300]; 

//     printf("Enter size of the first array: ");
//     fgets(input, sizeof(input), stdin);
//     n1 = atoi(input);

//     printf("Enter size of the second array: ");
//     fgets(input, sizeof(input), stdin);
//     n2 = atoi(input);

//     int arr1[n1], arr2[n2], merged[n1 + n2];

//     printf("Enter elements of the first array: ");
//     fgets(input, sizeof(input), stdin);
//     char *str = strtok(input, " ");
//     for (int i = 0; i < n1 && str != NULL; i++) {
//         arr1[i] = atoi(str);
//         str = strtok(NULL, " ");
//     }

//     printf("Enter elements of the second array: ");
//     fgets(input, sizeof(input), stdin);
//     str = strtok(input, " ");
//     for (int i = 0; i < n2 && str != NULL; i++) {
//         arr2[i] = atoi(str);
//         str = strtok(NULL, " ");
//     }

//     mergeDescending(arr1, arr2, merged, n1, n2);

//     printf("\nMerged array in descending order:\n");
//     for (int i = 0; i < n1 + n2; i++) {
//         printf("%d ", merged[i]);
//     }
//     printf("\n");

//     return 0;
// }


// 5. Write a function to count the frequency of each element of an array.   //   186 Program

// int readNumbers(int arr[]) {
//     char line[300];
//     int n = 0;

//     printf("Enter integers separated by spaces: ");
//     if (fgets(line, sizeof(line), stdin) != NULL) {
//         int i = 0, num = 0, sign = 1, inNumber = 0;

//         while (1) {
//             char c = line[i];

//             if (c == '-') {
//                 sign = -1;
//             } else if (c >= '0' && c <= '9') {
//                 num = num * 10 + (c - '0');
//                 inNumber = 1;
//             } else if ((c == ' ' || c == '\n' || c == '\0') && inNumber) {
//                 arr[n++] = num * sign;
//                 num = 0;
//                 sign = 1;
//                 inNumber = 0;
//                 if (c == '\0' || c == '\n')
//                     break;
//             }

//             if (c == '\0')
//                 break;

//             i++;
//         }
//     }

//     return n; 
// }

// void countFrequency(int arr[], int n) {
//     int unique[300], count[300];
//     int uniqueCount = 0;

//     for (int i = 0; i < n; i++) {
//         int found = 0;
//         for (int j = 0; j < uniqueCount; j++) {
//             if (unique[j] == arr[i]) {
//                 count[j]++;
//                 found = 1;
//                 break;
//             }
//         }
//         if (!found) {
//             unique[uniqueCount] = arr[i];
//             count[uniqueCount] = 1;
//             uniqueCount++;
//         }
//     }

//     printf("\nElement Frequencies:\n");
//     for (int i = 0; i < uniqueCount; i++) {
//         printf("%d: %d\n", unique[i], count[i]);
//     }
// }

// int main() {
//     int arr[300];
//     int n = readNumbers(arr);
//     countFrequency(arr, n);
//     return 0;
// }


// 1. Write a program to calculate the sum of two matrices each of order 3X3.   //   187 Program

//  int main() {
//      int A[3] [3],B[3] [3],c[3] [3],i,j,k,sum;

//      printf("Enter 9 number of first matrics: ");
//      for(i=0;i<3;i++)
//       for(j=0;j<3;j++)
//       scanf("%d",&A[i][j]);

//       printf("Enter 9 number of second matrics: ");
//       for(i=0;i<3;i++)
//        for(j=0;j<3;j++)
//         scanf("%d",&B[i][j]);

//          for(i=0;i<3;i++) {
//        for(j=0;j<3;j++) {
//          sum=0;
//             for(k=0;k<3;k++)
//              sum=sum+A[i] [k] * B[k] [j];
//               c[i] [j] =sum;
//        }
//     }
//         for(i=0;i<3;i++)
//          for(j=0;j<3;j++)
//           printf("Matrics is: %d\n", c[i] [j]);
//           return 0;
//  }

// 2. Write a function to caculate the product of two matrices each of order 3X3.   //   188 Program

// void product(int A[3][3], int B[3][3], int C[3][3]) {
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++) {
//             C[i][j] = 0;
//             for (int k = 0; k < 3; k++)
//                 C[i][j] += A[i][k] * B[k][j];
//         }
// }

// int main() {
//     int A[3][3], B[3][3], C[3][3];

//     printf("Enter first 9 elements:\n");
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             scanf("%d", &A[i][j]);

//     printf("Enter second 9 elements: ");
//     for (int i = 0; i < 3; i++)
//         for (int j = 0; j < 3; j++)
//             scanf("%d", &B[i][j]);

//     product(A, B, C);   // Function call

//     printf("Product of the matrices: ");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++)
//             printf("%d\n", C[i][j]);
//     }
//     return 0;
// }

// 3. Write a program to print the tranpose of a given matrix.   //    189 Program

// 4. Four players are playing a tournament of chess with round robin method ( each player with play with every other player ), Each win has 2 points, draw has 1 point and loose has 0 points, Declare a score_board two dimensional arrray to store the scores of the players again each player.   //   190 Program

// 5.  For que-4, define a function to update score board after each match result.   //   191 Program

// 6.  For que-4, define a function to display score board.   //   192 Program

// 7. For que-4, define a function which returns the score of a specifier.   //   193 Program

// 8. For que-4, define a function to find the winner of the tournament.   //   194 Program

// 9. For que-4, define a function to display rank of the players.   //   195 Program

// 10. For que-4, deifne a function to run tournament, in which user has to enter result of each game update score board using score_board function.   //   196 Program

// #define PLAYERS 4

// int score_board[PLAYERS][PLAYERS] = {0};

// // Function to update score board after each match
// void update_score_board(int p1, int p2, int result) {
//     if (result == 1) {
//         score_board[p1][p2] = 2;
//         score_board[p2][p1] = 0;
//     } else if (result == -1) {
//         score_board[p1][p2] = 0;                        // 191 Program ( Solution )
//         score_board[p2][p1] = 2;
//     } else {
//         score_board[p1][p2] = 1;
//         score_board[p2][p1] = 1;
//     }
// }

// // Function to display score board
// void display_score_board() {
//     printf("\nScore Board:\n");
//     for (int i = 0; i < PLAYERS; i++) {
//         printf("Player %d: ", i);
//         for (int j = 0; j < PLAYERS; j++) {                    // 192 Program
//             printf("%d ", score_board[i][j]);
//         }
//         printf("\n");
//     }
// }

// // Function to get total score of a player
// int get_player_score(int player) {                      // 193 Program
//     int total = 0;
//     for (int j = 0; j < PLAYERS; j++) {
//         total += score_board[player][j];
//     }
//     return total;
// }

// // Function to find winner
// void find_winner() {
//     int max_score = -1;
//     int winners[PLAYERS], count = 0;

//     for (int i = 0; i < PLAYERS; i++) {
//         int score = get_player_score(i);              //   194 Program
//         if (score > max_score) {   
//             max_score = score;
//             count = 0;
//             winners[count++] = i;
//         } else if (score == max_score) {
//             winners[count++] = i;
//         }
//     }

//     printf("\nWinner(s): ");
//     for (int i = 0; i < count; i++) {
//         printf("Player %d ", winners[i]);
//     }
//     printf("with %d points\n", max_score);
// }

// // Function to display rankings
// void display_rankings() {
//     int scores[PLAYERS], ranks[PLAYERS];                     //   195 Program

//     for (int i = 0; i < PLAYERS; i++) {
//         scores[i] = get_player_score(i);
//         ranks[i] = i;
//     }

//     // Sort scores and ranks using bubble sort
//     for (int i = 0; i < PLAYERS - 1; i++) {               //   196 Program
//         for (int j = i + 1; j < PLAYERS; j++) {
//             if (scores[i] < scores[j]) {
//                 int temp = scores[i]; scores[i] = scores[j]; scores[j] = temp;
//                 int temp_r = ranks[i]; ranks[i] = ranks[j]; ranks[j] = temp_r;
//             }
//         }
//     }

//     printf("\nPlayer Rankings:\n");
//     for (int i = 0; i < PLAYERS; i++) {
//         printf("%d. Player %d - %d points\n", i + 1, ranks[i], scores[i]);
//     }
// }

// // Function to run the tournament
// void run_tournament() {
//     int result;
//     printf("Enter match results:\n");                 //   190 Program
//     for (int i = 0; i < PLAYERS; i++) {
//         for (int j = i + 1; j < PLAYERS; j++) {
//             printf("Player %d vs Player %d (1 = P%d wins, -1 = P%d wins, 0 = Draw): ", i, j, i, j);
//             scanf("%d", &result);
//             update_score_board(i, j, result);
//         }
//     }
// }

// int main() {
//     run_tournament();
//     display_score_board();
//     find_winner();
//     display_rankings();
//     return 0;
// }


