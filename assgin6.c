#include<stdio.h>

// 3. Write a program to calculate sum of first N natural numbers.

// int main() {
//    int n,i=1,num,count=0;
//    printf("Enter a numbers: ");  //  81 Programs 9 Using while loop)
//    scanf("%d",&n);
//    while(i<=n) {
//      printf("%d ",i*2-1);
//       i++;
//       count++;

//    }  printf("\n\nSum of first %d Odd natural number is: %d",n,count*count);
//     return 0;
// }


// 2. Write a program to calculate sum of first evevn natural numbers.

//  int main() {
//      int n,i,count=0;
//      printf("Enter a numbers: ");  // ( Using for loop )
//      scanf("%d",&n);
//      for(i=1;i<=n;i++) {
//           printf("%d ",2*i);
//           count++;
//      }
//        printf("\n\nSum of first %d even natural number is: %d",n,count*count+count); // 82 program

//        return 0;
//  }


// int main() {
//     int i=1,n,s=0;
//     printf("Enter a numbers: ");  // 83 Program (Sum of natural numbers)
//     scanf("%d",&n);
//     while(i<=n) {
//         s=s+i;
//         i++;
//     }
//      printf("Sum is %d",s);

//      return 0;
// }
                        

// 1.  Write a Program to calculate factorial of a number.

// int main() {
//       int n,i=1,f=1;
//       printf("Enter a number: ");  // 84 Program ( Calculate factorial of a number )
//       scanf("%d",&n);
//       for(i;i<=n;i++) {
//         f=f*i;

//       } printf("Factorial of %d is: %d",n,f);
//        return 0;
// }

// Alternative of 1 Question

//  int main() {
//      int f,n,i;
//      printf("Enter a numbers: ");    //   Alternative of Question 1
//      scanf("%d",&n);
//      for(f=1,i=1;i<=n;i++) {
//        f=f*i;
//        printf("\nFactorial is %d",f);
//      }
//       return 0;
//    }


// 2. Write a program to count digit in a given number.

//  int main() {
//     int n,i,count=0;
//     printf("Enter a numbers: ");  //  85 Program ( Count a digit ina given number )
//     scanf("%d",&n);
//     for(i=1;i<=n;i++) {
//        count++;

//     }
//      printf("%d", count);
//      return 0;
//  }


// 3. Write a prohram to check the given number is prime or not.

//  int main() {
//       int n,i;
//       printf("Enter a number: ");  // 86 Program
//       scanf("%d",&n);
//       for(i=2;i<=n;i++) {
//             if(n%i==0) {
//                   break;
//             } if(i==n) {
//                   printf("Prime\n");
//             } else
//              printf("Not Prime\n");
//       }
//        return 0;
//  }

// 4. Write a program to calculate LCM of two numbers.

//  int main() {
//        int a,b,i;
//        printf("Enter two numbers: ");  //  87 Program
//        scanf("%d %d",&a,&b);
//        for(i=1;i<=a*b;i++)
//             if(i%a==0 && i%b==0)
//                   break;

//              printf("LCM is :%d ",i);

//         return 0;

//  }

// 5. Write a program to reverse a number.

//  int main() {
//       int n,i=0;
//       printf("Enter a numbers: ");  //  88 Program
//       scanf("%d",&n);
//        while(n) {
//           i=i*10+n%10;
//           n=n/10;
//        }
//         printf("%d\n",i);

//        return 0;
//  }

// 1. Write a program to print all Prime numbers under 100.

//  int main() {
//     int n, i, isPrime;

//     for (n = 2; n < 100; n++) {
//         isPrime = 1; 
//         for (i = 2; i <= n / 2; i++) {
//             if (n % i == 0) {
//                 isPrime = 0; 
//                 break;
//             }
//         }
//         if (isPrime)
//             printf("%d ", n);
//     }

//     return 0;
// }


// 2. Wrie a program to print all prime numbers between two given numbers.

//  int main() {
//       int n,i,a,b;
//       printf("Enter a numbers: ");
//       scanf("%d %d",&a,&b);
//       for(n=a+1;n<b;n++) {
//          for(i=2;i<=n-1;i++) {  //  90 Program
//             if(n%i==0)
//              break;
//          }
//           if(i==n)
//            printf("%d ",n);
//       }
//  }


// 3. Write a program find next Prime number of a given number.

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);  

//     int Next = n+1;

//     while (1) {
//         int isPrime = 1;  

//         if (Next <= 1) isPrime=0;

//         for (int i=2; i*i<=Next; i++) {
//             if (Next%i ==0) {
//                 isPrime=0;
//                 break;
//             }
//         }

//         if (isPrime) break;  
//         Next++;
//     }

//     printf("Next prime after %d is %d\n", n, Next);
//     return 0;
// }


// 4. Write a program to calculate HCF of two numbers.

//  int main() {
//        int a,b,H;
//        printf("Enter two numbers: ");
//        scanf("%d %d",&a,&b);
//         for(H=a>b?b:a;H>=1;H--)                                                                                   
//             if(a%H==0&&b%H==0)
//                 break;
//                 printf("HCF is: %d",H);  //  92 Program

//          return 0;
//  }


// 5. Write a program to check whether two given numbers are co-prime numbers are not.


//  int main() {
//       int a,b,h;
//       printf("Enter two numbers: ");
//       scanf("%d %d",&a,&b);
//        for(h=a>b?b:a;h>=1;h--)
//            if(a%h==0 && b%h==0)
//               break;
//                if(h==1)
//                   printf("Co-Prime numbers\n");  //  93 Program
//                else
//                   printf("Not Co-Prime numbers\n");
                         
//                         return 0; 
//   }


// 1. Write a program to find the Nth term of the Fibonacci series.

// int main() {
//       int a = -1, b = 1, c, n;
//       printf("Enter a number "); //  94 Program
//       scanf("%d", &n);
//       while (n)
//       {
//             c = a + b;
//             a = b;
//             b = c;
//             n--;
//       }
//       printf("%d", c);
//       return 0;
// }


// 2. Write a program to print first N th terms of Fibonacci series.

//  int main() {
//       int a=-1,b=1,c,n;
//       printf("Enter a number: ");  //  95 Program
//       scanf("%d",&n);
//        while(n) {
//       c=a+b;
//       printf("%d ",c);
//       a=b;
//       b=c;
//       n--;
//     }
//      return 0;
//  }


// 3. Write a program to check the whether a given number is there in the Fibonacci series or not.       //     96 Program

// int main() {
//     int a = -1, b = 1, c, num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while (1) {
//         c = a + b;
//         if (c == num) {
//             printf("\n%d is in the Fibonacci series", num);
//             break;
//         }
//         if (c > num) {
//             printf("\n%d is not in the Fibonacci series", num);
//             break;
//         }
//         a = b;
//         b = c;
//     }
//     return 0;
// }


//  int main() {
//     int a = -1, b = 1, c, num;

//     printf("Enter a number: ");
//     if (scanf("%d", &num) != 1) {
//         printf("Invalid input. Please enter an integer.\n");    //   ( Alternatives )
//         return 1;
//     }

//     while (1) {
//         c = a + b; 
//         if (c == num) {
//             printf("\n%d is in the Fibonacci series.\n", num);
//             return 0; 
//         }
//         if (c > num) {
//             printf("\n%d is not in the Fibonacci series.\n", num);
//             return 0; 
//         }

//         a = b;
//         b = c;
//     }

//     return 0;
//   }
