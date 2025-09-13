// 5 6 10 12 13 14 15


// switch case approach

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
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


// question 11
//basic if else approach

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int marks;
//     scanf("%d",&marks);
//     if(marks >100 || marks<0)
//         printf("Invalid input\n");
//     else{
//         if(marks>=90 && marks <=100)
//             printf("Grade: A\n");
//         else if(marks>=86 && marks <=89)
//             printf("Grade: A-\n");
//         else if(marks>=82 && marks <=85)
//             printf("Grade: B+\n");
//         else if(marks>=78 && marks <=81)
//             printf("Grade: B\n");
//         else if(marks>=74 && marks <=77)
//             printf("Grade: B-\n");
//         else if(marks>=70 && marks <=73)
//             printf("Grade: C+\n");
//         else if(marks>=66 &&marks <=69)
//             printf("Grade: C\n");
//         else if(marks>=62 &&marks <=65)
//             printf("Grade: C-\n");
//         else if(marks>=58 &&marks <=61)
//             printf("Grade: D+\n");
//         else if(marks>=55 &&marks <=57)
//             printf("Grade: D\n");
//         else if(marks>=0 &&marks <55)
//             printf("Grade: F\n");
//     }
//     return 0;
// }


//switch case approach

// #include <stdio.h>

// int main() {
//     int marks;  
//     // Prompt the user for input for better usability
//     printf("Enter marks: ");
//     scanf("%d", &marks);
//     // First, validate the input
//     if (marks > 100 || marks < 0) {
//         printf("Invalid input\n");
//     } else {
//         // Use the switch statement for the valid range
//         switch (marks) {
//             case 100: case 99: case 98: case 97: case 96: case 95: case 94: case 93: case 92: case 91: case 90:
//                 printf("Grade: A\n");
//                 break;
//             case 89: case 88: case 87: case 86:
//                 printf("Grade: A-\n");
//                 break;
//             case 85: case 84: case 83: case 82:
//                 printf("Grade: B+\n");
//                 break;
//             case 81: case 80: case 79: case 78:
//                 printf("Grade: B\n");
//                 break;
//             case 77: case 76: case 75: case 74:
//                 printf("Grade: B-\n");
//                 break;
//             case 73: case 72: case 71: case 70:
//                 printf("Grade: C+\n");
//                 break;
//             case 69: case 68: case 67: case 66:
//                 printf("Grade: C\n");
//                 break;
//             case 65: case 64: case 63: case 62:
//                 printf("Grade: C-\n");
//                 break;
//             case 61: case 60: case 59: case 58:
//                 printf("Grade: D+\n");
//                 break;
//             case 57: case 56: case 55:
//                 printf("Grade: D\n");
//                 break;
//             // Grade F: Catches all other valid marks (0-54)
//             default:
//                 printf("Grade: F\n");
//                 break;
//         }
//     }
//     return 0;
// }



//question 13
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int num1,num2,sum,cmd;
    scanf("%d %d %d",&num1,&num2,&cmd);
    if(cmd == 1){
        sum=num1+num2;
        printf("Addition: %d",sum);
    }
    else if (cmd == 2){
        sum=num1-num2;
        printf("Substraction: %d",sum);
    }
    else if(cmd == 3){
        sum=num1*num2;
        printf("Multiplication: %d",sum);
    }
    else if(cmd == 4){
        int choice;
        scanf("%d",&choice);
        if(num2==0)printf("Error: Divisor is Zero\n");
        else{
            if(choice == 1){
            sum=num1%num2;
            printf("Quotient: %d",sum);
            }
            else if(choice == 2){
                sum=num1/num2;
                printf("Reminder: %d",sum);
            }
        }
    }
    return 0;
}