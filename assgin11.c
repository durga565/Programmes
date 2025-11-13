#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// 4. Write a recursive function to calculate sum of square of first n natural numbers.  //   162 Program

// int sumsquare(int n) {
//     if(n==1)
//         return 1;
//         return n*n+sumsquare(n-1);                              

//   }
//     int main() {
//        int n=4,result=0;

//        result=sumsquare(n);

//        printf("Sum of square of first %d number is: %d", n, result);

//        return 0;
//     }

// 5. Write a recursive function to calculate sum of digits of a given number.   //   163 Program

//  int digitsum(int n) {
//      if(n==0)
//       return 0;
//        else
//      return n% 10 + digitsum(n/10);                                  
//  }

//   int main() {
//      int n=12345;
//      int sum=digitsum(n);

//      printf("Sum is: %d",sum);
//      return 0;

//   }

//                                      ass --- 28
//                           ---------------------------------

// 1. Write a recursive function to calculate factorial of a given number.   //   164 Program

//  int fact(int n) {
//     if(n==0)
//      return 1;
//      return n*fact(n-1);
//  }

//   int main() {
//      printf("Factorial is: %d",fact(4));
//      return 0;
//   }

// 2. Write a recurive function to calculate HCF of two numbers.    //   165 Program

//  int hcf(int n,int b) {
//     if(b==0)
//     return n;
//     return hcf(b,n%b);
//  }

//   int main() {
//      printf("HCF is : %d",hcf(24,26));
//      return 0;
//   }

// 3. Write a recursive function to print N terms of Fibonacci series.   //   166 Program

//  int fib(int n) {
//     if(n==0 || n==1)
//      return n;
//      return fib(n-1) + fib(n-2);
//  }

//   void fibN(int n) {
//       int i;
//       for(i=0;i<n;i++) {
//         printf("%d ", fib(i));
//       }
//   }

//    int main() {
//      printf("Fibonacci is:  " );
//      fibN(10);
//      printf("\n");
//      return 0;
// }

// 4. Write a program in C to count the digits of a given number using recursion.   //   167 Program

//  int countdigit(int n) {
//       if(n==0)
//        return 0;
//        return 1 + countdigit(n/10);
//  }

//   int main() {
//      printf("NUmber od Digit is: %d", countdigit(25));
//      return 0;
//   }

// 5. Write a program in C to calculate the power of any number using recursion.   //   168 Program

//  int power(int x, int y) {
//      if(y==0)
//       return 1;
//       if(y>0)
//        return x*power(x,y-1);
//         else
//          return 1/x*power(x,y+1);
//  }

//   int main() {
//     printf("Power is: %d ",power(5,5));
//       return 0;
//   }

// 1. Write a program to calculate the sum of numbers stored in an array os size 10, Take array values from to user.   //   169 Program

//  int main() {
//     int a[10],i,sum=0;
//     printf("Enter  nmber:\n");
//     for(i=0;i<10;i++) {
//     scanf("%d",&a[i]);
//     sum+=a[i];
//     }
//     printf("Sum is: %d",sum);
//     return 0;
//  }

// 2. Write a program to calculate the average of numbers stored in an array of size 10 take array values from the user.   //   170 Program

//  int main() {
//     int a[10],i,sum=0;
//     float avg;
//     printf("Enter numbers: ");
//     for(i=0;i<10;i++) {
//         scanf("%d",&a[i]);
//         sum+=a[i];
//     }
//       printf("Average is: %.2f",sum/10.0);
//       return 0;

 // }

// 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, Which are stored in an array of size 10, Take array values from the user.   //   171 Program

//  void even();

//  void even() {
//     int a[10],i,sum_odd=0,sum_even=0;
//     printf("Enter number: ");
//     for(i=0;i<10;i++) {
//         scanf("%d",&a[i]);
//         if(a[i] %2 ==0) {
//             sum_even+=a[i];
//         } else
//            sum_odd+=a[i];
//     }
//      printf("Sum of even is: %d\n",sum_even);
//      printf("Sum of odd is: %d\n",sum_odd);
//  }

//   int main() {
//     even();
//     return 0;
//   }

// 4. Write a program to find the greatest number stored in an array of size 10, Take array values from the user.   //   172 Program

//  void greatest() {
//     int a[10],i,great;
//     printf("enter 10 numbers: ");
//     for(i=0;i<=9;i++)  {
//         scanf("%d",&a[i]);
//     }
//      great=a[0];
//      for(i=1;i<=9;i++) {
//         if(great < a[i]) {
//             great = a[i];
//         }
//      }
//       printf("Greatest number is: %d", great);
//  }

//   int main() {
//      greatest();
//      return 0;
//   }

// 5. Write a program to find the smallest number stored in anarray of size 10, Take array values from the user.   //   173 Program

//  void smallest() {
//     int a[10],i,small;
//     printf("Enter numbers: ");
//     for(i=0;i<=9;i++) {
//         scanf("%d",&a[i]);
//     }
//      small=a[0];
//      for(i=1;i<=9;i++) {
//         if(small > a[i]) {
//             small=a[i];
//         }
//      }
//       printf("Smallest number is: %d",small);
//  }

//   int main() {
//      smallest();
//      return 0;
//   }

// 1. Write a program to calculate to sort elements of an array of size 10. Take array values from th user.   //   174 Program

//  void sort() {
//      int a[10],i,x,y;
//      printf("Enter 10 numbers: ");
//      for(i=0;i<=9;i++) {
//        scanf("%d",&a[i]);
//      }

//       for(x=1;x<=9;x++) {
//         for(i=0;i<=9-x;i++) {
//             if(a[i] > a[i+1]) {
//                 y=a[i];
//                 a[i]=a[i+1];
//                 a[i+1]=y;
//             }
//         }
//       }
//        for(i=0;i<=9;i++)
//         printf("Sorting is:%d\n",a[i]);
//  }

//   int main() {
//      sort();
//      return 0;
//   }

// 2. Write a program to find second largest in an array, Take array values from the user.   //   175 Program

//  void slargest() {
//      int a[10],i,largest,second;
//      printf("Enter 10 numbers: ");
//      for(i=0;i<=9;i++) {
//         scanf("%d",&a[i]);
//         }
//          if(a[0] > a[1]) {
//             largest=a[0];
//             second=a[1];
//          } else {
//             largest=a[1];
//             second=a[0];
//          }
//           for(i=2;i<10;i++) {
//             if(a[i] > largest) {
//                 second = largest;
//                 largest = a[i];
//             } else if(a[i] > second && a[i] != largest) {
//                 second =a[i];
//             }
//           }
//            printf("Largest number is: %d\n", largest);
//            printf("Second largest is: %d\n", second);
//      }

//       int main() {
//          slargest();
//          return 0;
//       }

// 3. Write a program to find second smallest number in array,Take array values from the user.   ///   176 Program

//  void smallest() {
//      int a[10],i,small,second;
//      printf("Enter 10 numbers: ");
//      for(i=0;i<=9;i++) {
//         scanf("%d",&a[i]);
//      }
//       if(a[0] < a[1]) {
//         small=a[0];
//         second=a[1];
//       } else {
//         small=a[1];
//         second=a[0];
//       }  // Find Smallest and second smallest
//        for(i=2;i<10;i++) {
//          if(a[i] < small) {
//             second=small;
//             small=a[i];
//          } else if(a[i] < second && a[i] != small) {
//             second=a[i];
//           }
//        }
//         printf("Smallest number is: %d\n",small);
//         printf("Second smallest number is: %d\n",second);
//   }

//   int main() {
//       smallest();
//       return 0;
//   }

// 4. Write a program to sort an array of 10 elements in descending order.   //   177 Program

// void arrange() {
//     int a[10],i,j,temp;
//     printf("Enter 10 numbers: ");
//     for(i=0;i<10;i++) {
//         scanf("%d",&a[i]);
//     }
//      for(i=0;i<9;i++) {
//         for(j=0;j<9-i;j++) {
//             if(a[j] < a[j+1]) {
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//      }
//       printf("sorting arrangment is: ");
//       for(i=0;i<10;i++) {
//         printf("%d ", a[i]);
//       }
// }

//  int main() {
//      arrange();
//      return 0;
//  }

// 5. Write a program in C to copy the elements of one array into another array,Take array values from the user.   //   178 Program

//  void element() {
//      int a[10],b[10],i;
//      printf("Enter 10 numbers: ");
//      for(i=0;i<=9;i++)
//         scanf("%d",&a[i]);
//       for(i=0;i<=9;i++)
//          b[i]=a[i];
//           for(i=0;i<=9;i++)
//            printf("The element is: %d\n",b[i]);
//   }

//   int main() {
//       element();
//       return 0;
//   }