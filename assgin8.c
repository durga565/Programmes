 #include<stdio.h> 
 #include<stdlib.h>

 
//   int main() {
//       int i,j,k;
//       for(i=1;i<=4;i++) {
//             k='A';
//         for(j=1;j<=7;j++) {
//             if(j>=0+i && j<=8-i) {  //  113 Program
//               printf("%c",k);
//               k++;
//             } else
//              printf(" ");
//         }
//          printf("\n");
//       }
//        return 0;
//     }


// 6.


//  int main() {
//       int i,j,k;
//       for(i=1;i<=4;i++) {
//             k='A';
//          for(j=1;j<=7;j++) {
//             if(j>=i && j<=8-i) {  //  114 Program
//               printf("%c",k);
//               j<4 ? k++ : k--;
//             } else
//              printf(" ");
//          }
//           printf("\n");
//       }
//        return 0;
//  }


//   int main() {
//      int i,j,k,n;
//      for(i=1;i<=5;i++) {
//         k=1;
//         n=1;
//         for(j=1;j<=9;j++) {
//             if(j>=6-i && j<=4+i) {
//                 if(k) {
//                     printf("%d",n);
//                     j<5?n++:n--;
//                 }
//                  else {
//                     printf(" ");
//                     if(j==5)
//                     n--;
//                  }
//                   k=1-k;
//             }
//              else
//               printf("\n");
//         }
//          printf("\n");
//      }
//   }


// // 8.


//  int main() {
//       int i,j;
//       for(i=1;i<=4;i++) {
//          for(j=1;j<=7;j++) {
//             if(j<=5-i || j>=3+i) {  //  116 Program
//               printf("*");
//             } else
//              printf(" ");
//          }
//           printf("\n");
//       }
//        return 0;
 // }


// 9.   


// int main() {
//       int i,j,k;
//       for(i=1;i<=4;i++) {
//             k=1;
//             for(j=1;j<=7;j++) {
//                   if(j<=5-i || j>=3+i) {         // 117 Program
//                         printf("%d",k);
//                         j<4?k++:k--;
//                   } else {
//                     printf(" ");
//                     if(j==4)
//                      k--;
//                   }
//             }
//              printf("\n");
//       }
//        return 0;
// }


// 10.


//   int main() {
//       int i,j,k;
//       for(i=1;i<=4;i++) {
//              k='A';
//           for(j=1;j<=7;j++) {
//                if(j<=5-i || j>=3+i) {   // 118 Program
//                   printf("%c",k);
//                   j<4 ? k++ : k--;
//                } else {
//                   printf(" ");
//                   if(j==4)
//                   k--;
//                }
//           }
//           printf("\n");
//       }
//        return 0;
//   }



// 1.


//  int main() {
//       int m;
//       printf("Enter months numbers: ");  //         119 Program
//       scanf("%d",&m);
//    switch(m) {
//        case 1 :
//                printf("\n31 Days");
//                break;
//       case 2 :
//                printf("\n28 Days");
//                break;
//       case 3 :
//                printf("\n31 Days");
//                break;
//       case 4 :
//                printf("\n30 Days");
//                break;
//       case 5 :
//                printf("\n31 Days");
//                break;
//       case 6 :
//                printf("\n30 Days");
//                break;
//       case 7 :
//                printf("\n31 Days");
//                break;
//       case 8 :
//                printf("\n31 Days");
//                break;
//       case 9 :
//                printf("\n30 Days");
//                break;
//       case 10 :
//                printf("\n31 Days");
//                break;
//       case 11 :
//                printf("\n30 Days");
//                break;
//       case 12 :
//                printf("\n31 Days");

//       default :
//               exit(0);

//        }
//            printf("\nThank You");

//         return 0;
// }


//  int main() {
//       int m;
//       printf("Enter month numbers: ");
//       scanf("%d",&m);
//       switch(m) {
//             case 1: case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
//                   printf("31 Days\n");
//             break;
//             case 4: case 6: case 9: case 11:   //   Alternative answer of Question 1
//                    printf("30 Days\n");
//                    break;
//             case 2:
//                    printf("28 or 29 Days\n");
//                    break;
//             default:
//                    printf("\nInvalid Month numbers");

//          }
//           return 0;
//   }


// 2. Write a menu driven program wuth the following options(addition,subtraction,multliplication,divison,exit)


//  int main() {
//       int x,a,b;

//       while(1) {            //  ( if use the scren clear and also the output is clread )
//       printf("\n1. Addition: ");
//       printf("\n2. Subtraction: ");
//       printf("\n3. Multiplication: ");
//       printf("\n4. Divison: ");
//       printf("\n5. exit");
//       printf("\nEnter yout choices: ");
//       scanf("%d",&x);

//        switch(x) {
//            case 1:
//                  printf("\nEnter two numbers: ");  //  120 Program
//                  scanf("%d %d",&a,&b);
//                  printf("\nSum is: %d",a+b);
//                  break;
//           case 2:
//                  printf("\nEnter two numbers: ");
//                  scanf("%d %d",&a,&b);
//                  printf("\nSubtraction is: %d",a-b);
//                  break;
//           case 3:
//                  printf("\nEnter two numbers: ");
//                  scanf("%d %d",&a,&b);
//                  printf("\nProduct is: %d",a*b);
//                  break;
//           case 4:
//                  printf("\nEnter two numbers: ");
//                  scanf("%d %d",&a,&b);
//                  printf("\nDivison is: %d",a/b);
//                  break;
//           case 5:
//                exit(0);

//           default:
//                   printf("\nInvalid input");

//        }

//       }
//        printf("\nEnd of Program");

//         return 0;
//  }


 // 3. Write a program which takes the day number of week and display a uinque greetings message for the day.


//  int main() {
//      int m;
//      printf("Enter a number in weekly wise: ");
//      scanf("%d",&m);

//      switch(m) {
//           case 1:
//                 printf("\ni.e is Monday have a nice days");    //  121 program
//                 break;
//           case 2:
//                 printf("\ni.e is Tuesday have a good days");
//                 break;
//           case 3:
//                 printf("\ni.e is Wednesday God bless you");
//                 break;
//           case 4:
//                 printf("\ni.e is Thursday great day ahead");
//                 break;
//           case 5:
//                 printf("\ni.e is Firday bless you");
//                 break;
//           case 6:
//                 printf("\ni.e is Saturday Weekend");
//                 break;
//           case 7:
//                 printf("\ni.e is Sunday slepp early tommorow mornig go to work");

//           case 8:
//                 exit(0);
//           default:
//                  printf("\nEnter valid wekend number");
//      }
//       printf("\nEnd of the program");
//       return 0;
//   }


// 4. Write a menu driven program with the following options

// i. Check whether a given set of three numbers are length of an isoscelee.

// ii. Chech the whether a given set of three number are length of sides of a right angle trianglr or not.

// iii. Check whether a given set od three numbers are equilatral trianlge or not.

// iv. Exit

//   int main() {
//       int a,b,c,x;
//       printf("\n1. Isoscelee triangle check");
//       printf("\n2. Right angle triangle check");
//       printf("\n3. Equilateral traingle check");
//       printf("\n5. Exit");
//       printf("\nEnter your choices");
//       scanf("%d",&x);

//        switch(x) {

//         case 1:
//                 printf("\nEnter side of triangle: ");
//                 scanf("%d %d",&a,&b,&c);
//                  if(a+b>c && a+c>b && b+c>a) {
//                 if(a=b,b=c,a=c)
//                   printf("\nValid for Isoscelee Triangle\n");
//                 } else
//                    printf("\nNot valid for Isoscelee Triangle");
//                    break;
//       case 2:
//                 printf("Enter side of a triangle: ");
//                 scanf("%d %d %d",&a,&b,&c);
//                 if(a+b>c && a+c>b && b+c>a) {
//                 if(a*a+b*b==c*c|| a*a+c*c==b*b || b*b+c*c==a*a)
//                   printf("Right angle triangle\n");
//                    else
//                   printf("Not a right angle triangle\n");
//                 } else
//                   printf("Invalid triangle\n");
//                   break;
//       case 3:
//                printf("\nEnter three numbers for check Equilateral trianlge: ");  //  122 Program
//                scanf("%d %d %d",&a,&b,&c);
//                if(a==b && a==c) {
//                printf("\nIt' is a Equilateral Trianlge");

//                } else
//                 printf("\nNot a Equilateral Triaanlge");
//                 break;
//       case 4:
//               exit(0);

//       default:
//               printf("\nIn valid input");

//           }
//            printf("\nEnd of Program");

//            return 0;
//   }

// // 5 . Read the question in my sirg portal.

//  int main() {
//       int var;
//       printf("Enter a number: ");   //   123 Program
//       scanf("%d",&var);
//       if(var == 1) {
//       }else if(var ==2) {
//         } else if(var==3) {
//         }
//          switch(var) {
//             case 1:
//                    printf("Good\n");
//                    break;
//             case 2:
//                    printf("Better\n");
//                    break;
//             case 3:
//                    printf("Best\n");
//                    break;
//             case 4:
//                   exit(0);
//             default:
//                    printf("Invalid input\n");
//            }
//              return 0;
//  }

// 1.

//  int main() {
//       int marks;
//       printf("Enter marks: ");
//       scanf("%d",&marks);

//       switch(marks) {

//             case 90 ...100:
//                            printf("Grade: A");   //   124 Program
//                            break;
//             case 80 ... 89:
//                            printf("Grade: B");
//                            break;
//             case 70 ... 79:
//                            printf("Grade: C");
//                            break;
//             case 60 ... 69:
//                            printf("Grade: D");
//                            break;
//             case 50 ... 59:
//                            printf("Grade: E");
//                            break;
//             case 0 ... 49:
//                           printf("Grade: F");
//                           break;
//             default:
//                     printf("Invalid Marks");
//           }
//            return 0;
//  }

// 2.

//  int main() {
//      while(1) {
//       int a,b,n,i=1,s=0,f;
//      printf("\n1.Factorial of a number");
//      printf("\n2.Even or Odd");
//      printf("\n3.Area of Circle");
//      printf("\n4.Sum of first N natural numbers: ");   //   125 Program
//      printf("\n5.Exit");
//      printf("\nEnter your choice: ");
//      scanf("%d",&n);

//     switch(n) {
//        case 1:
//               printf("Enter a numbers: ");
//               scanf("%d",&a);
//               while(a) {
//                   i=i*a;
//                   a--;
//               }
//                printf("\nFactorial is: %d",i);
//                break;
//       case 2:
//             printf("Enter a number: ");
//             scanf("%d",&a);
//             if(a%2==0) {
//               printf("\nThe given number is Even");
//             } else
//               printf("\n The given number is Odd");
//               break;
//       case 3:
//              printf("Enter radius of circle: ");
//              scanf("%d",&a);
//              printf("Area of the circle is:%.2f",3.14*a*a);
//              break;
//       case 4:
//              printf("Enter a number: ");
//              scanf("%d",&a);
//              f=0;
//              while(a) {
//                   f=f+a;
//                   a--;
//              } printf("Sum is: %d",f);
//                break;
//       case 5:
//              exit(0);
//       default:
//              printf("\nInvalid Input");

//        }
//         printf("\nEnd of the Program");
//         return 0;

//  }

// }


// 3.


//  int main() {
//       char ch;
//       printf("Enter a character: ");
//       scanf("%c",&ch);

//       switch(ch) {

//             case 'a'...'z':
//                             printf("Lower Case alphabet");   //   126 Program
//                             break;
//             case 'A'...'Z':
//                             printf("Upper Case alphabet");
//                             break;
//             default:
//                     printf("Special character");
//       }
//        return 0;
//     }


// 4.


//  int main() {
//       char ch;
//       printf("Enter a chatacter: ");
//       scanf("%c",&ch);

//        switch(ch) {
//             case 'a': case 'e': case 'i':case 'O':   //   127 Program
//             case 'u': case 'A':case'E' : case 'I':
//                         printf("Vowel");
//                         break;

//             case 'b'...'d': case 'B'...'D':
//             case 'f'...'h':case 'F'...'H':
//             case 'j'...'n':case 'J'...'N':
//             case 'p'...'t':case 'P'...'T':
//             case 'v'...'z':case 'V'...'Z':
//                         printf("Cosonant");
//                         break;
//                   default:
//                         printf("Special Character");
//        }
//         return 0;
//  }


// 5.


//  int main() {
//       int choice,l,h,b,s,a;

//        while(1) {
//             printf("\n.1 LCM");
//             printf("\n.2 Sum of Digits");
//             printf("\n3. Volume of Cuboid");   //   128 Program
//             printf("\n4. Check prime");
//             printf("\n5. Exit");
//             printf("\n\nEnter your Choice: ");
//             scanf("%d",&choice);

//             switch(choice) {
//                   case 1:
//                          printf("\nEnter two numbers: ");       // Another logic //            // Another logic ( Only check the big number multiple ( a and 6 is input by the user do the biggrest nmbre is 6 and the smallest number is 5 and the 5 not the answer so..))
//                          scanf("%d %d",&a,&b);                  //  for(l=1; l<=a*b; ;l++)     //  for(l=a>b ? a:bl l<= a*b; l=l+(a>b ? a:b))
//                          for(l = a>b ? a:b; l<=a*b;l++)         //  if(l%a==0 && l%b==0)
//                           if(l%a==0 && l%b ==0)                 // break; // Printf the LCM
//                           break;
//                           printf("LCM is: %d",l);
//                           break;
//                   case 2:
//                           int a, s = 0;
//                           printf("\nEnter a number: ");
//                           scanf("%d", &a);

//                           int temp = a; 
 
//                           while (a) {
//                           s = s + a % 10;
//                           a /= 10;
//                           }
//                           printf("Sum is : %d\n", s);
//                           break;
//                   case 3:
//                          printf("\nEnter Length,breadth and height: ");
//                          scanf("%d %d %d",&l,&b,&h);
//                          printf("Volume is: %d",l*b*h);
//                          break;
//                   case 4:
//                          printf("\nEnter a number: ");
//                          scanf("%d",&a);
//                          for(b=2;b<a;b++)
//                               if(a%b==0)
//                               break;
//                           if(a==b)
//                               printf("prime");
//                           else
//                               printf("Not prime");
//                               break;
//                   case 5:
//                          exit(0);
//                   default:
//                          printf("\nInvalid input");
//             }
//        }
//         return 0;
//     }
    
