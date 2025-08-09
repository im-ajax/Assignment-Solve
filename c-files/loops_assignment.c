//loops assignments here.


//question 1
//Write a program (WAP) that will print following series upto Nth terms.
//1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, …….


// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//         printf("%d ",i);
//     return 0;  
// }


//question 2
// Write a program (WAP) that will print following series upto Nth terms.
//1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n,num=1;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++){
//         printf("%d",num);
//         num+=2;
//     }
//     return 0;  
// }

//question 3
//Write a program (WAP) that will print following series upto Nth terms.
//1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         if(i%2==0)
//             printf("0 ");//handle the space here carefully
//         else printf("1 ");
//     }
//     return 0;
// }


//question 4
//Write a program (WAP) that will take N numbers as inputs and compute their average. 
//(Restriction: Without using any array)

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     float sum=0;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         float num;
//         scanf("%f",&num);
//         sum+=num;
//     }
//     printf("AVG of %d inputs: %f",n,sum/n);
//     return 0;
// }

//question 5
//Write a program (WAP) that will take two numbers X and Y as inputs. Then it will print the square of X and increment (if X<Y) or decrement (if X>Y) X by 1, until X reaches Y. If and when X is equal to Y, the program prints “Reached!”

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int x,y;
//     scanf("%d %d",&x,&y);
//     if(x>y){
//         for (int i = x; i >= y; i--)
//         {
//             if(i==y)
//                 printf("Reached\n");
//             else{
//                 printf("%d ",i*i);
//             }
//         }
//     }
//     else if(x<y){
//         for (int i = x; i <= y; i++)
//         {
//             if(i==y) printf("Reached");
//             else printf("%d ",i*i);
//         }
    
//     }
//     return 0;
// }

//question 6
/*
    Write a program (WAP) for the described scenario: 
    Player-1 picks a number X and Player-2 has to guess that number within N tries. For each wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 at any time successfully guesses the number, the program prints “Right, Player-2 wins!” and terminates right away. Otherwise after the completion of N wrong tries, the program prints “Player-1 wins!” and halts.
    (Hint: Use break/continue)
*/

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int choice,tries;
//     scanf("%d%d",&choice,&tries);
//     for (int i = tries-1; i >= 0; i--) // customizing the loop as the requirement
//     {
//         int guess;scanf("%d",&guess);
//         if(guess != choice){
//             printf("Wrong, %d choice(s) Left!\n",i);
//                 if(i == 0)
//                     printf("Player-1 wins!");
//         }
//         else if(guess == choice){
//             printf("Right, Player-2 wins\n");
//             break;
//         }
//     }
//     return 0;
// }


//Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’ at the keyboard. 

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     char ch;
//     int i=1;
//     while (scanf("%c ",&ch))
//     {
//         if(ch=='A'){
//             break;
//         }
//         else printf("input %d: %c\n",i,ch);
//         i++;
//     }
//     return 0;
// }


