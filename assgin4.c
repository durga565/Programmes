#include <stdio.h>

//   int main() {
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a,&b,&c);

//      if (a>b && a>=b && a>c && a>=c) {   // 49 Program 
//         printf("%d",a);
//      } else if (b>c && b>=c) {
//         printf("%d",b);
//      } else
//          printf("%d",c);

//         return 0;
// }


//    int main() {
//      int sPrice,cPrice;
//      float profit,loss;

//      printf("Enter cost price: ");
//      scanf("%d",&cPrice);

//      printf("Enter selling Price: ");
//      scanf("%d",&sPrice);

//        profit=sPrice-cPrice;
//         loss=cPrice-sPrice;
//          if(profit>0)

//           printf("Profit %.2f\n",profit);
//           else if(profit<0)

//             printf("Loss %.2f\n",loss);
//              else
//               printf("NO profit NO loss\n");       // 50 Program

//        return 0;

// }


// int main() {
//      int sc,mth,eng,geo,hin;
//      float marks;
//      printf("Enter five subjects number: ");
//      scanf("%d %d %d %d %d",&sc,&mth,&eng,&geo,&hin);   // 51 Program
//      marks=sc+mth+eng+geo+hin/0.5;
//       if(marks>33) {
//           printf("Passed\n");
//       } else
//         printf("Failed\n");

//         return 0;
// }


// int main() {
//      int a,b,c,d,e;
//      printf("Enter Marks of five subjects: ");
//      scanf("%d %d %d %d %d",&a,&b,&c,&d,&e); ( Alternatives ) Logical coding
//      if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33) {
//           printf("Result Pass\n");
//      } else
//      printf("Result Failed\n");

//       return 0;
// }


//  int main() {
//   char ch;
//     printf("Enter a character: ");  // 52 Program ( Identifier of upper case or lower case )
//     scanf("%c",&ch);
//     if(ch>='A'&&ch<='Z') {
//        printf("Upper Case\n");
//     } else if(ch>='a'&&ch<='z') {
//        printf("Lower case\n");
//     } else
//        printf("Not an aplphabet\n");

//        return 0;

// }


// int main() {
//      int num;
//      printf("Enter a number: ");
//      scanf("%d",&num);
//      if(num%3==0 && num%2==0) {
//           printf("Divisible by 3 and 2\n");
//      } else
//          printf("Not divided by 3 and 2 both\n");  // 53  Program

//          return 0;
// }


//   int main() {
//       int num;
//       printf("Enter a number: ");
//       scanf("%d",&num);
//       if(num%7==0||num%3==0) {
//           printf("Both are fivisible by 7 or 3\n");  54 Program
//       } else
//          printf("Not divisible by 7 or 3\n");

//          return 0;
//   }


//     int main() {
//      int a;
//      printf("Enter a numbers: ");
//      scanf("%d",&a);
//      if(a>0) {
//           printf("Positvie\n");
//          } else if(a<0) {
//            printf("Negative\n");
//       } else
//        printf("The given number is Zero\n");  // 55 Program ass--(1)  Posotive,Negative or zero check
//           return 0;
//    }


// int main() {
//      char ch;
//      printf("Enter a character: ");  // 56 Program
//      scanf("%c",&ch);
//      if(ch>='A'&&ch<='Z') {
//           printf("Upper case\n");
//      } else if(ch>='a'&&ch<='z') {
//           printf("Lower case\n");
//      } else if(ch>='0'&&ch<='9') {
//           printf("Digit\n");
//      } else
//          printf("Special character\n");

//          return 0;
// }


// int main() {
//      float a,b,c;
//      printf("Enter lenght of sides of a triangle: ");  // 57 Program
//      scanf("%f %f %f",&a,&b,&c);
//      if(a+b>c && b+c>a && a+c>b) {
//           printf("Valid for Triangle\n");
//      } else
//           printf("Invalid Triangle\n");

//           return 0;
// }


// int main() {
//        int n;
//        printf("Enter month number: ");
//        scanf("%d",&n);
//        if (n==1) {
//            printf("31 Days(January)");
//        } else if(n==2) {
//            printf("28 Days(February)\n");  // ass--(4)  Input month number and output is how many days in a month
//        } else if(n==3) {
//            printf("31 Days(March)\n");
//        } else if(n==4) {
//            printf("30 Days(April)\n");
//        } else if(n==5) {
//            printf("31 Days(May)\n");
//        } else if(n==6) {
//            printf("30 Days(June)\n");
//        } else if(n==7) {
//            printf("31 Days(July)\n");
//        } else if(n==8) {
//            printf("30 Days(August)\n");
//        } else if(n==9) {
//            printf("30 Days(September\n");
//        } else if(n==10) {
//            printf("31 days(October)\n");
//        } else if(n==11) {
//            printf("30 Days(Novmber)\n");
//        } else if(n==12) {
//            printf("31 Days(December)\n");
//        } else
//            printf("The enter number is invalid Please enter valid\n");

//        return 0;
//   }


//  int main() {
//      int m;
//      printf("Enter month numbers: ");  // 58 Program ( Logic input month number and output days of the month)
//      scanf("%d",&m);
//      if(m==2) {
//           printf("28 or 29 days\n");
//      } else if(m==4||m==6||m==9||m==11) {
//           printf("30 Days\n");
//      } else if(m<1||m>12) {
//           printf("Invalid month number\n");
//      } else
//           printf("31 Days\n");

//           return 0;
//  }



//   int main() {
//      int i=1;
//      while(i<=5) {
//       printf("%d MySirG\n",i);  //  59 Program  -(1)  5 time print
//        i++;
//      }
//         return 0;
//   }


//     int main() {
//        int i=1;
//        while(i<=10) {
//           printf("%d\n",i);  // 60 Program  -(2)  10 th natural number
//            i++;
//        }
//         return 0;
//     }


//  int main() {
//      int i=10;
//      while(i>=1) {
//           printf("%d\n",i);  // 61 Program   -(3)  natural number reverse
//           i--;
//      }
//       return 0;

//  }


// int main() {
//      int i=1;
//      while(i<=10) {
//           printf("%d\n",2*i-1);   // 62 Program  -(4)  10 th odd
//            i++;
//      }
//       return 0;
// }


//   int main() {
//      int i=10;
//      while(i>=1) {
//           printf("%d\n",2*i-1);  // 63 Program --(5)  odd 10th
//           i--;
//      }
//       return 0;
//   }


//  int main() {
//      int i=1;
//      while(i<=10) {
//           printf("%d\n",2*i);  // 64 Program --(6) odd in revesrse
//           i++;
//      }
//       return 0;
//  }

