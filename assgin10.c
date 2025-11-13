#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//4. write a function to find the next prime number of a given number. ( Take something return nothing ).   //   142 Program
// While(!is_prime(++n));

// int isPrime(int num) {
//     if (num <= 1)
//         return 0;
//     for (int i = 2; i * i <= num; i++) {           // Prime check function
//         if (num % i == 0)
//             return 0;
//     }
//     return 1;
// }


// void nextPrime(int n) {
//     int next = n + 1;
//     while (1) {
//         if (isPrime(next)) {
//             printf("Next prime number after %d is %d\n", n, next);
//             break;
//         }
//         next++;
//     }
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     nextPrime(num);

//     return 0;
// }

// 5. Write a function to print first N prime numbers. ( Take something return nothing ).

// void printFirstNPrimes(int n) {
//     int num = 2;
//     for (int count = 0; count < n; num++) {
//         int isPrime = 1;
//         for (int i = 2; i <= num / 2; i++) {
//             if (num % i == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if (isPrime) {
//             printf("%d ", num);
//             count++;
//         }
//     }
//     printf("\n");
// }

// int main() {
//     int N;
//     printf("Enter how many prime numbers to print: ");
//     scanf("%d", &N);
//     printFirstNPrimes(N);
//     return 0;
// }

// 1. Write a function to print all prime numbers between two given numbers. ( Take something return nothing ).   //   144 Program


// int is_prime(int n) {
//     int i;
//     if (n<2)
//         return 0;
//     for (i=2;i<=n/2;i++) {
//         if (n%i==0)
//             return 0;
//     }
//     return 1;
// }

// void print_prime(int a, int b) {
//     int x;
//     printf("Prime numbers between %d and %d are:\n", a, b);    // Function to print all prime numbers between two numbers
//     for (x=a;x<=b;x++) {
//         if (is_prime(x))
//             printf("%d ",x);
//     }
//     printf("\n");
// }

// int main() {
//     print_prime(1, 50);
//     return 0;
//    }


// 2. Write a function to print first N terms of Fibonacci seriese. ( Take something return nothing ).

//  void fib(int n) {
//       int a=1,b=1,c;
//       if(n>=1) printf("%d ",a);
//       if(n>=2) printf("%d ",b);

//        for(int i=3; i<=n;i++) {
//             c=a+b;
//             printf("%d ", c);   //   //   145 Program
//             a=b;
//             b=c;
//        }
//  }

//   int main() {
//       fib(10);
//       return 0;
//   }

// 3. Write a function to print PASCAL triangle. ( Take something return nothing ).   //   146 Program

// void printPascal(int n)  {
//     int i,j,k;
//     for (i=0;i<n;i++) {
//         int num=1;

//         for (k=0;k<n-i-1;k++)
//             printf("  ");

//         for (int j=0;j<=i;j++) {
//             printf("%4d", num);
//             num = num * (i-j) / (j+1);
//         }

//         printf("\n");
//     }
// }

// int main()
// {
//     int rows;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     printPascal(rows);

//     return 0;
// }

// 4. Write a function to print all Armstrong numbers between two given numbers. ( Take something return nothing ).   //   147 Program

// void print_armstrong(int a, int b) {
//     int x;
//     printf("Armstrong numbers between %d and %d are:\n", a, b);

//     for (x=a;x<=b;x++) {
//         int n=x,sum=0,rem,digits=0;

//         int temp=n;
//         while (temp>0) {
//             digits++;                // Count digit
//             temp/=10;
//         }

//         temp=n;
//         while (temp>0) {
//             rem=temp%10;             // Calculate Armstrong sum

//             int mult=1;
//             for (int i=1;i<=digits;i++)
//                 mult*=rem;

//             sum+=mult;
//             temp/=10;
//         }

//         if (sum==x)
//             printf("%d ", x);             // Check and print if Armstrong
//     }
//     printf("\n");
// }

// int main() {
//     print_armstrong(1, 999);
//     return 0;
// }

//5. Write a function to find the sum of first N terms of the series 11/1+2!/2+3!/3+4!/4=5!/5... n!/n. ( Take something return something ).   //   148 Program

// int factorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact = fact * i;
//     }
//     return fact;
// }

// float series_sum(int n) {
//     float sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum = sum + (float)factorial(i) / i;  // Function to find sum of the series
//     }
//     return sum;
// }

// int main() {
//     int num;
//     printf("Enter value of N: ");
//     scanf("%d", &num);

//     float result = series_sum(num);
//     printf("Sum of the series = %.2f\n", result);

//     return 0;
// }


// 1. Write a recursive funstion to print first N natural numbers.

//  int sum(int n);

//  int main() {
//     printf("Sum is:%d",sum(5));   //   149 Program
//     return 0;
//  }

//  int sum(int n) {
//      if(n==1) {
//           return 1;
//      }
//      int sumn = sum(n-1);
//      int sumN = sumn + n;
//      return sumN;
//  }

// 2. Write a recursive function to print first N natural numbers in reverse order.

//  void reverse(int n);

//  int main() {
//      reverse(10);   // Call the recursive function   //   150 Program
//      return 0;
//  }

//  void reverse(int n) {
//      if(n==0) {
//         return;     // Base case
//      }
//      printf("%d ",n);
//      reverse(n-1); 
//          // Recursive call
//  }

// 3. Write a recursive function to print first N odd natural numbers.

//  void Nodd(int n) {
//       if(n>0) {
//             Nodd(n-1);
//             printf("%d ",2*n-1);   //   151 Program
//       }
//  }

//  int main() {
//       Nodd(5);
//       return 0;
//  }

// 4. Write a recursive function to print first N odd natural numbers in reverse order.

//  void Nodd(int n) {
//       if(n>0) {                                               // Base Case
//             printf("%d ",2*n-1);   //   152 Program
//             Nodd(n-1);                                       // Recursive Call
//       }
//   }

//   int main() {
//       Nodd(10);
//       return 0;
//   }

// 5. Write a recursive function to print first N even natural numbers.

//  void even(int n) {
//       if(n>0) {
//             even(n-1);
//             printf("%d ",n*2);   //   //   153 Program
//       }
//  }

//   int main() {
//        even(4);
//        return 0;
//   }

// 1. Write a recursive funciton to print first N even natural number in reverse order.   //   154 Program

//  void Neven(int n) {
//       if(n>0) {
//          printf("%d ",2*n);
//          Neven(n-1);
//       }
//  }
//   int main() {
//       Neven(10);
//       return 0;
//   }

// 2. Write a recursive function to print square of first N natural numbers.   //   155 Program

//  void squareN(int N) {
//     if(N>0) {
//       squareN(N-1);
//       printf("%d ",N*N);

//     }
//  }

//    int main() {
//      squareN(10);
//      return 0;
//    }

// 3 Write a recursive function to print binary of a given decimal number.   //    156 Program

//  void binary(int n) {
//     if(n>0) {
//         binary(n/2);
//         printf("%d ",n%2);
//     }
//  }

//   int main() {
//      binary(5);
//      return 0;
//   }

// 4. Write a recursive function print octal of a given decimal number.   //   157 Program

//  void octal(int n) {
//     if(n>0) {
//         octal(n/8);
//         printf("%d ",n%8);
//     }
//  }

//   int main() {
//      octal(23);
//      return 0;
// }

// 5 Write a recursive function to print reverse of a given number.   //   158 Program

//  void reverse(int n) {
//      if(n>0) {
//         printf("%d ",n%10);
//         reverse(n/10);
//      }
//  }

//   int main() {
//      reverse(123);
//      return 0;
//   }
                         

// 1. Write a recursive function to calculate sum of first N natural numbers.   //   159 Program

//int sum(int n); // Function prototype

// int main() {
//     int result = sum(10); // Call the sum function with n = 5
//     printf("Sum of first natural numbers: %d\n", result); // Print the result
//     return 0;
// }

// int sum(int n) {
//     if (n == 1) // Base case
//         return 1;
//     return n + sum(n - 1); // Recursive call
// }

// 2. Write a recursive function to calculate sum of first N odd natural numbers.   //   160 Program

//  int oddsum(int n) {
//      if(n==1) return 1;
//      printf("%d ",2*n-1+oddsum(n-1));
//      return(n-1);
//  }

//   int main() {
//      oddsum(5);
//      return 0;
//   }

// 3. Write a recursive function to calculate sum of first N even natural numbers.   //   161 Program

// Recursive function to calculate sum of first N even natural numbers

// int sumEven(int n) {
//     if (n == 0)
//         return 0; // base case
//     else
//         return (2 * n) + sumEven(n - 1); // recursive case
// }

// int main() {
//     int n;

//     printf("Enter the value of N: ");
//     scanf("%d", &n);

//     printf("Sum of first %d even natural numbers = %d\n", n, sumEven(n));

//     return 0;
// }
