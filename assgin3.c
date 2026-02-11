#include <stdio.h>

// int main() {
//     int a;
//     printf("Enter anumbers: ");  // 33 Program ( add zero in last digit of a number)
//     scanf("%d",&a);
//      a=a/10*10;
//      printf("%d",a);
//      return 0;
// }


// int main() {
//       int x;
//       x=10>8>4;
//       printf("%d",x);  // 34 Program ( True false )
//       return 0;
// }


// int main() {
//     int x;
//     x=!2>2;
//     printf("%d",x);  // 35 Program   (True / false) 0 or 1 ouput
// }


// int main() {
//     int x;
//     x=3<0&&5>0;
//     printf("%d",x);  36 Program ( The condition is false ( 0 out put )
//     return 0;
// }


// int main() {
//       int a,b;
//       printf("Enter a number: ");
//       scanf("%d",&a);

//       b=(a/100)+((a/10))%10+(a%10); //  37 Program ( Sum of three digit )
//       printf("%d",b);
//     return 0;
// }


// int main() {
//     int a,b;
//     printf("Eneter a number: ");  // 38 Program  (add any number in last digit)
//     scanf("%d",&a);

//     printf("Enter a number: ");
//     scanf("%d",&b);

//     a=a*10+b;
//     printf("%d",a);
//     return 0;
// }


// int main() {
//   int a;
//   printf("Enter a number: ");
//   scanf("%d",&a);

//   printf(a>0?"Positive" : "Non - positive"); //   39 Program
//    return 0;
// }


// int main() {
//   int a;
//   printf("Enter a number: ");
//   scanf("%d",&a);

//   printf(a%2==0 ? "Even" : "Odd"); // 40 Program
//   return 0;
// }


// int main() {
//   int a;
//   printf("Enter a number: ");
//   scanf("%d",&a);

//   printf(a%5==0 ? "It's divisible" : "Not divisible"); // 41 Program
//   return 0;
// }


// int main() {
//     int a;
//     printf("Enter a number: ");  //  42 Program ( Even / odd without % operator )
//     scanf("%d",&a);

//      if((a&1)==0) {
//         printf("even");
//      } else
//        printf("odd");
//    return 0;
// }


// int main() {
//     int a;
//     printf("Enter a number: ");   //  43 Program ( Even / odd using bitwise operator )
//     scanf("%d",&a);

//      if((a%2)==0) {
//          printf("even");
//      } else
//       printf("Odd");
//       return 0;
// }


// int main() {
//      int a;
//      printf("Enter a number: ");   // 44 Program
//      scanf("%d",&a);

//       if(a&1)
//          printf("Odd\n");
//          else
//           printf("Even\n");
//            return 0;

// }


//    int main() {
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);

//      if(a!=a%100)
//        printf("a=%d Three digit number",a);
//      else
//        printf("a=%d Not three digit number",a);   // 45 Program   ( ass-8, quest- 1 )
//     return 0;
//    }


// int main() {
//     int a,b;
//     printf("Enter two numbers: "); 46 Program ( as- 8,  quest-2 )
//     scanf("%d %d",&a,&b);

//      if (a>b && a>=b) {
//         printf("%d",a);
//      } else
//         printf("%d",b);

//         return 0;
//    }


//    int main() {
//      int a,b,c,d;
//      printf("Enter value of a,b, and c: ");
//      scanf("%d %d %d",&a,&b,&c);

//      d=b*b-4*a*c;
//        if(d>0) {
//           printf("Real and Distincr roots\n");  // 47 Program  (Route Check)
//        } else if(d<0) {
//           printf("Imaginary roots\n");
//        } else
//           printf("Real and Equal Roots\n");

//            return 0;
//    }


int main() {
    int year;

    printf("Enter year: " );
    scanf("%d", &year);
    
    if(year % 100 == 0) {
        if(year % 400 == 0)
          printf("Leap year\n");
        else
          printf("Non Leap Year\n");
    } else if(year % 4 == 0) {
        printf("Leap year\n");
    } else 
        printf("Non Leap Year\n");

        return 0;

}