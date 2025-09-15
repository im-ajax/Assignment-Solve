// 5 6 10 12 13 14 15


//question 5

// #include <stdio.h>
// int main() {
//     int num;
//     scanf("%d", &num);
//     switch (num > 0) {
//         case 1:
//            switch ((num & (num - 1)) == 0) {
//                 case 1:
//                     printf("Yes\n");
//                     break;
//                 case 0:
//                     printf("No\n");
//                     break;
//             }
//             break;
//         case 0:
//             printf("No\n");
//             break;
//     }
//     return 0;
// }

//question 6

// #include <stdio.h>
// int main() {
//     int num;
//     scanf("%d", &num);

//     switch (num > 0) {
//         case 1:
//             switch ((num & (num - 1)) == 0) {
//                 case 1:
//                     printf("Yes\n");
//                     break;
//                 case 0:
//                     printf("No\n");
//                     break;
//             }
//             break;
//         case 0:
//             switch (num < 0) {
//                 case 1:
//                     printf("Negative input is not valid\n");
//                     break;
//                 case 0:
//                     printf("Zero is not a valid input\n");
//                     break;
//             }
//             break;
//     }
//     return 0;
// }


// question 10

// #include<stdio.h>
// int main(){
//     int num1,num2,sum;
//     char operator;
//     scanf("%d %c %d", &num1,&operator,&num2);
//     switch (operator){
//         case '+':
//             sum = num1+num2;
//             printf("Addition: %d",sum);
//             break;
//         case '-':
//             sum=num1-num2;
//             printf("Substraction: %d",sum);
//             break;
//         case '*':   
//             sum=num1*num2;
//             printf("Multiplication: %d",sum);
//             break;
//         case '/':
//             switch(num2){
//                 case 0 :
//                     printf("Zero as divisor is not Valid\n");
//                     break;
//                 case 1:
//                     sum=num1/num2;
//                     printf("Division: %d",sum);
//                     break;
//             }
//     }
//     return 0;
// }


//question 12

// #include<stdio.h>
// int main() {
//     int num1, num2, sum, cmd;
//     scanf("%d %d %d", &num1, &num2, &cmd);
//     switch (cmd) {
//         case 1:
//             sum = num1 + num2;
//             printf("Addition: %d", sum);
//             break;
//         case 2:
//             sum = num1 - num2;
//             printf("Substraction: %d", sum);
//             break;
//         case 3:
//             sum = num1 * num2;
//             printf("Multiplication: %d", sum);
//             break;
//         case 4:
//             if (num2 != 0) {
//                 sum = num1 % num2;
//                 printf("Remainder: %d", sum);
//             } else {
//                 printf("Error: Division by zero");
//             }
//             break;
//         default:
//             printf("Invalid command.");
//             break;
//     }
//     return 0;
// }


//question 13

// #include<stdio.h>
// int main() {
//     int num1, num2, sum, cmd, choice;
//     scanf("%d %d %d", &num1, &num2, &cmd);
//     switch (cmd) {
//         case 1:
//             sum = num1 + num2;
//             printf("Addition: %d\n", sum);
//             break;
//         case 2:
//             sum = num1 - num2;
//             printf("Substraction: %d\n", sum);
//             break;
//         case 3:
//             sum = num1 * num2;
//             printf("Multiplication: %d\n", sum);
//             break;
//         case 4:
//             scanf("%d", &choice);
            
//             switch (choice) {
//                 case 1:
//                     sum = num1 / num2;
//                     printf("Quotient: %d\n", sum);
//                     break;
//                 case 2:
//                     sum = num1 % num2;
//                     printf("Remainder: %d\n", sum);
//                     break;
//                 default:
//                     printf("Invalid division choice.\n");
//                     break;
//             }
//             break;
//         default:
//             printf("Invalid command.\n");
//             break;
//     }
//     return 0;
// }



//question 14
// #include<stdio.h>
// int main() {
//     int num1, num2, result, cmd, choice;
//     scanf("%d %d %d", &num1, &num2, &cmd);
//     switch (cmd) {
//         case 1:
//             result = num1 + num2;
//             printf("Addition: %d", result);
//             break;
//         case 2:
//             result = num1 - num2;
//             printf("Substraction: %d", result);
//             break;
//         case 3:
//             result = num1 * num2;
//             printf("Multiplication: %d", result);
//             break;
//         case 4:
//             if (num2 == 0) {
//                 printf("Error: Divisor is Zero\n");
//             } else {
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1:
//                         result = num1 / num2;
//                         printf("Quotient: %d", result);
//                         break;
//                     case 2:
//                         result = num1 % num2;
//                         printf("Reminder: %d", result);
//                         break;
//                     default:
//                         printf("Invalid choice for division.");
//                         break;
//                 }
//             }
//             break;
//         default:
//             printf("Invalid command.");
//             break;
//     }
//     return 0;
// }


//question 15

// #include <stdio.h>
// int main() {
//     int num;
//     scanf("%d", &num);
//     switch (num > 0) {
//         case 1:
//             switch ((num & (num - 1)) == 0) {
//                 case 1:
//                     printf("Yes\n");
//                     break;
//                 case 0:
//                     printf("No\n");
//                     break;
//             }
//             break;
//         case 0:
//             switch (num < 0) {
//                 case 1:
//                     printf("Negative input is not valid\n");
//                     break;
//                 case 0:
//                     printf("Zero is not a valid input\n");
//                     break;
//             }
//             break;
//     }
//     return 0;
// }




