#include<stdio.h>

// int main() {
//       int num,x,digits,digit,i,p,sum;
//       printf("Enter a number:");
//       scanf("%d",&num);
//       x=num;

//        for(digits=0;x;x=x/10)         //    ( count Digits )
//             digits++;
//              for(x=num,sum=0;x;x=x/10) {   //  ( Calculate Sum of pow(each digit, digits )   //   97 Program
//                   digit=x%10;
//                   for(i=1,p=1;i<=digits;i++)
//                   p=p*digit;
//                   sum=sum+p;
//              }
//               if(sum==num)                    // ( Compare result with num )
//                  printf("Armstrong Number");
//               else
//                  printf("Not a Armstrong number");
//                   return 0;

//  }


// // 5. Writw a program to print all Armstrong number 1000.                                                 // 98 Program


// int main() {
//     int num, original, remainder, result;

//     printf("Armstrong numbers less than 1000 are:\n");          

//     for (num = 1; num < 1000; num++) {
//         original = num;
//         result = 0;

//         while (original != 0) {
//             remainder = original % 10;
//             result += remainder * remainder * remainder;
//             original /= 10;
//         }

//         if (result == num) {
//             printf("%d\n", num);
//         }
//     }

//     return 0;
// }


// 1.
//  int main() {
//       int i,j;
//       for(i=1;i<=5;i++) {
//             for(j=1;j<=5;j++) {
//                   if(j<=i) {             //  99 Program(righta angle in star pattern)  
//                      printf("*");
//                   } else
//                    printf(" ");
//             }
//              printf("\n");
//       }
//        return 0;
//  }


// 2.

//    int main() {
//       int i,j;
//       for(i=1;i<=5;i++) {
//          for(j=1;j<=5;j++) {
//             if(j>=6-i) {
//                   printf("*");  //  100  Program 
//             } else
//              printf(" ");
//          }
//           printf("\n");
//       }
//        return 0;
//    }

// 3.


//   int main() {
//        int i,j;
//        for(i=1;i<=5;i++) {
//           for(j=1;j<=5;j++) {  //  101  Program ( Star Pattern reverse rectangle )
//              if(i<=6-j) {
//                 printf("*");
//              }
//               printf(" ");
//           }
//            printf("\n");
//        }
//         return 0;
//   }


// 4.


// int main() {
//       int i,j;
//       for(i=1;i<=5;i++) {
//          for(j=1;j<=5;j++) {            // 102 Program  
//             if(j>=0+i) {
//               printf("*");
//             } else
//              printf(" ");
//          }
//           printf("\n");
//       }
//        return 0;
// }


// 5.


//  int main() {
//       int i,j,k;
//       for(i=1;i<=5;i++) {            //  103 Program  
//             k=1;
//         for(j=1;j<=5;j++) {
//             if(j<=i) {
//               printf("%d",k);
//                k++;
//             }
//              printf(" ");
//         }
//          printf("\n");
//       }
//        return 0;
 // }


// 6.


//  int main() {
//       int i,j,k;
//       for(i=1;i<=4;i++) {
//             k=1;
//          for(j=1;j<=4;j++) {       //  104  Program
//             if(j<=i) {
//               printf("%d",i-j+1);

//             }
//              printf(" ");

//          }
//           printf("\n");
//       }
//        return 0;
//  }


// 7.


//  int main() {
//       int i,j,k;
//       for(i=1;i<=5;i++) {            //  105 program
//              k='A';
//          for(j=1;j<=5;j++) {
//             if(j>=0+i) {
//               printf("%c",k);
//               k++;
//             } else
//                printf(" ");
//          }
//           printf("\n");
//       }
//        return 0;
 // }


// 8.


//  int main() {
//       int i,j,k=1;
//       for(i=1;i<=4;i++) {
//            for(j=1;j<=4;j++) {
//             if(j<=i) {
//               printf("%d",k++);       //  106 Program
//           }
//              printf(" ");
//          }
//           printf("\n");
//       }
//        return 0;
//  }


// 9.

//  int main() {
//       int i,j,k;
//       for(i=1;i<=5;i++) {  //  107 program
//              k='A'-1+i;
//          for(j=1;j<=5;j++) {
//             if(j>=0+i) {
//               printf("%c",k++);
//             } else
//                printf(" ");
//          }
//           printf("\n");
//       }
//        return 0;
//  }


// 10.


//  int main() {
//       int i,j;
//       for(i=1;i<=5;i++) {
//             for(j=1;j<=5;j++) {                     //  108 Program
//                if(i==1 || i==5 || j==1 || j==5) {
//                   printf("*");
//                } else
//                 printf(" ");
//             }
//              printf("\n");
//       }
//        return 0;
//  }


// // 1.


//  int main() {
//       int i,j;
//       for(i=1;i<=4;i++) {
//          for(j=1;j<=7;j++) {
//             if(j>=5-i&&j<=3+i) {  //  109 Program ( Tirangle in Star Pattern )
//                printf("*");
//             } else
//              printf(" ");
//          }
//            printf("\n");
//       }
//        return 0;
// }


// 2.


//  int main() {
//       int i,j;
//       for(i=1;i<=4;i++) {
//             for(j=1;j<=7;j++) {
//                   if(j>=0+i&&j<=8-i) {  //  110 Program ( Star pattern triangle in reverse order )
//                         printf("*");
//                   } else
//                     printf(" ");
//             }
//               printf("\n");
//       }
//        return 0;
//  }


// 3.


//  int main() {
//       int i,j;
//       for(i=1;i<=4;i++) {
//         for(j=1;j<=4;j++) {
//           if(j>=5-i&&j<=4+i) {  //  111 Program ( Star pattern in revrse ( use without else )
//             printf("*");
//           }
//            printf(" ");
//         }
//          printf("\n");
//       }
//        return 0;
//  }


// 4.


//  int main() {
//       int i,j,k;
//       for(i=1;i<=4;i++) {
//             k=1;
//         for(j=1;j<=7;j++) {
//             if(j>=5-i&&j<=3+i) {   //  112 program
//               printf("%d",k);
//               j<4 ? k++ : k--;
//             } else
//              printf(" ");
//         }
//          printf("\n");
//       }
//        return 0;
//  }
