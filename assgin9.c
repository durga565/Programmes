#include<stdio.h>
#include<stdlib.h>
#include<math.h>


// 1.                                ( Take something return something)


//  float circle(float r) {
//       float p;
//       p=3.14*r*r;
//       return p;
//  }

//   int main() {
//       float a;
//      a= circle(5);
//       printf("Area is:%.2f",a);   //   129 Program
//       return 0;
// }


// 2.                                ( Take something return nothing )

//  float intrest(int p, float r,int t) {   //   130 Program
//       return(p*r*t)/100.0;
//  }

//   int main() {
//       float s1;
//       s1=intrest(10000,7,1);
//       printf("Simple intrest is: %.2f",s1);
//       return 0;

//   }


// 3.


//  int even(int a) {   //   131 Program
//       if(a%2==0)
//       return 1;
//       else
//       return 0;
//  }

//  int odd(int a1) {
//       if(a1%2!=0)
//       return 1;
//       else
//        return 0;
//  }

//   int main() {
//       int a2,b2;
//       a2=even(9);
//       b2=odd(29);
//       printf("%d %d",a2,b2);
//       return 0;
//   }


// 4. Write a function to print first N natural numbers ( Take something return nothing ).

//  void natural(int n) {
//       int i;
//       for(i=1;i<=n;i++) {
//             printf("%d ",i);   //   132 Program
//       }
//  }

//   int main() {
//       natural(6);
//       return 0;
//    }


// 5. Write a function to print first N odd natural numbers ( Take something return nothing ).


//  void odd(int n) {
//       int i;
//       for(i=1;i<=n;i++) {
//             printf("%d ",2*i-1);   //   133 Program
//       }
//  }

//   int main() {
//       odd(10);
//       return 0;
//  }
                                      

// 1. Write a program to calculate the factorial of a number. ( Take something return nothing ).

//   void factorial(int n) {
//      int f=1,i;
//      for(i=1;i<=n;i++) {
//           f=f*i;
//      }
//       printf("Factorial is: %d",f);
//   }

//    int main() {
//      factorial(5);
//      return 0;
//    }

// 2. Write a function to calculate the number of combinations one can make from m items and r selected at a time. ( Take something return something ).                        
 
// long long combinations(int m, int r) {
//     if (r>m) return 0;
//     if (r==0 || r==m) return 1;

//     long long result=1;
//     if (r>m-r) r=m-r; 

//     for (int i=1; i<=r; i++) {
//         result=result*(m-i+1)/i;
//     }

//     return result;
// }

// int main() {
//     int m, r;

//     printf("Enter total items (m): ");
//     scanf("%d", &m);

//     printf("Enter items selected at a time (r): ");
//     scanf("%d", &r);

//     long long result = combinations(m, r);

//     printf("Number of combinations C(%d, %d) = %lld\n", m, r, result);

//     return 0;
// }

// 3. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. ( Take something return nothing ).

// int factorial(int num) {
//     int fact = 1;
//     for (int i = 1; i <= num; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int arrangements(int n, int r) {
//     if (r > n || r < 0) {
//         return -1; 
//     }
//     return factorial(n) / factorial(n - r);
// }

// int main() {
//     int n, r;
//     printf("Enter value for n: ");
//     scanf("%d", &n);
//     printf("Enter value for r: ");
//     scanf("%d", &r);

//     int result = arrangements(n, r);
//     if (result == -1) {
//         printf("Invalid input: r must be between 0 and n.\n");
//     } else {
//         printf("Number of arrangements (P(%d, %d)) = %d\n", n, r, result);
//     }

//     return 0;
// }


// 4. Wrie a function to check whether a given number contains a given digit or not. ( Take something return nothing ).


// void checkDigit(int number, int digit) {
//     if (number == 0) {
//         printf("Digit %d is NOT present in the number.\n", digit);
//         return;
//     }

//     if (number % 10 == digit) {
//         printf("Digit %d is present in the number.\n", digit);
//         return;
//     }

//     checkDigit(number / 10, digit);
// }

// int main() {
//     int num, dig;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Enter a digit to search for: ");
//     scanf("%d", &dig);

//     checkDigit(num, dig);

//     return 0;
// }



// 5. Wrie a function to print all prime factors of a given number. For example , if the number in 36 then your result should been 2,2,3,3. ( Take something return nothing ).


//   void factors(int num) {
//      int i=2,result;
//      printf("Prime factor is %d", num);   //   138 program

//       while(num > 1) {
//           if(num%i==0) {
//                printf("%d\n", i);  
//                num = num/i;
//           } else {
//              i++;
//           }
//       }
//   }

//    int main() {
//      factors(36);
//      return 0;
//}
                                        

// 1. Write a function to calculate LCM of two numbers. ( Take something return nothing ).


//   void LCM(int a, int b) {
//        int i;
//        for(i=1;i<=a*b;i++) {
//             if(i%a==0 && i%b==0)
//             break;
//        }
//         printf("LCM is: %d\n",i);   //   139 Program
//   }

//    int main() {
//       int x,y;
//       printf("Enter two numbers: ");
//       scanf("%d %d",&x,&y);
//       LCM(x,y);
//       return 0;
//    }


// 2. Write a function to calculate HCF of two numbers. ( Take nothing return nothing ).


//   void HCF(void) {
//       int a,b,h;
//       printf("Enter two numbers: ");   //   140 Program
//       scanf("%d %d",&a,&b);
//       for(h=(a>b?b:a); h>=1;h--) {
//             if(a%h==0 && b%h==0)
//             break;
//       }
//        printf("HCF is: %d",h);
//   }

//    int main() {
//       HCF();
//       return 0;
 // }


// 3. Write a fumction to check whether a given number is prime or not. ( Take something return nothing ).   //   141 Program


// void checkPrime(int num) {
//     if (num <= 1) {
//         printf("%d is not a prime number.\n", num);
//         return;
//     }

//     int i, limit = sqrt(num);
//     for (i = 2; i <= limit; i++) {
//         if (num % i == 0) {
//             printf("%d is not a prime number.\n", num);
//             return;
//         }
//     }

//     printf("%d is a prime number.\n", num);
// }

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     checkPrime(number);

//     return 0;
// }



// 4. write a function to find the next prime number of a given number. ( Take something return nothing ).   //   142 Program
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


//    int is_prime(int n) {
//     if (n <= 1) return 0;
//     for (int i = 2; i * i <= n;i++) {
//         if (n % i == 0) return 0;
//     }
//     return 1;
// }


//     int main() {
//         int n=15,count =0,num=2;
//         while(count<n) {
//             if(is_prime(num)) {
//                   printf("%d ",num);   //    //   143 program
//                   count++;
//             }
//              num++;
//         }
//          return 0;
//     }


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
//  }


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
//       fib(5);
//       return 0;
//   }

