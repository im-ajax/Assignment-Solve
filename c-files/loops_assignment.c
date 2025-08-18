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
//             if(i==y) printf("Reached"); //brackets deleted to avoid complexity while understanding the code.
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

//question 7
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


//question 8
//Write a program (WAP) that will reverse the digits of an input integer.

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int num;
//     int digit;
//     scanf("%d",&num);
//     while (num!=0)
//     {
//         digit=num%10;
//         num=num/10;
//         printf("%d",digit);
//     }
//     return 0;
// }


//question 9
//Write a program (WAP) that will find the grade of N students. For each student, it will take the marks of his/her the attendance (on 5 marks), assignment (on 10 marks), class test (on 15 marks), midterm (on 50 marks), term final (on 100 marks). Then based on the tables shown below, the program will output his grade.

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
    
//     return 0;
// }


//question 10
//Write a program (WAP) that will give the sum of first Nth terms for the following series.
//1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n,sum=0; 
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++){
//         if(i%2==0)
//             sum-=i;
//         else sum+=i;
//     }
//     printf("%d",sum);
//     return 0;
// }

//question 11
//Write a program (WAP) that will calculate the result for the first Nth terms of the following series.  [In that series sum, dot sign (.) means multiplication]
// 1^2.2 + 2^2.3 + 3^2.4 + 4^2.5 + …….

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n,next=2,sum=0;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         sum+=(i*i)*next;
//         next++;
//     }
//     printf("%d",sum);
//     return 0;
// }

//qeusiton 12
//Write a program (WAP) that will print Fibonacci series upto Nth terms.
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int first=0,second=1,last;
//     for(int i=1;i<=n;i++){
//         printf("%d ",first);
//         last=first+second;
//         first=second;
//         second=last;
//     }
//     return 0;
// }


//question 13
//Write a program (WAP) that will print the factorial (N!) of a given number N. Please see the sample input output.

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n,fac=1;
//     scanf("%d",&n);
//     for (int i = n; i > 0; i--)
//         fac*=i;
//     printf("%d",fac);
//     return 0;
// }


//question 14
// Write a program (WAP) that will find nCr where n >= r; n and r are integers.
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n,r;
//     scanf("%d%d",&n,&r);


//     int res=1; // n! er value ber kortesi
//     for (int i = n; i >= 1; i--){
//         res=res*i;
//     }

//     long long res2=1; // r! er value ber kortesi
//     for (int i = r; i >= 1; i--){
//         res2*=i;
//     }

//     // (n-r)! er value ber kortesi
//     int third_factorial= (n-r);
//     long long res3=1;
//     for (int i = third_factorial; i >=1 ; i--)
//     {
//         res3*=i;
//     }
    
//     long long total= res / (res2 * res3);

//     printf("total : %lld",total);
//     return 0;
// }

//question 15
//Write a program (WAP) that will find xy (x to the power y) where x, y are positive integers.
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int num,pow,result;
//     scanf("%d%d",&num,&pow);
//     for (int i = 0; i < pow; i++)
//         result=num*num;
//     printf("%d",result);
//     return 0;
// }





//question 16
//WAP that will find the GCD (greatest common divisor) and LCM (least common multiple) of two positive integers.
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int num1,num2,temp;
//     scanf("%d%d",&num1,&num2);
//     while(num2!=0){
//         temp=num1%num2;
//         num1=num2;
//         num2=temp;
//     }
//     printf("%d",num1);
//     return 0;
// }


//question 17
//WAP that will determine whether a number is prime or not.

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     int flag =0;
//     for (int i = 2; i < num; i++)
//     {
//         if(num%i==0){
//             flag =1;
//             break;
//         }
//         else flag =0;
//     }
//     if(flag==0) printf("Prime");
//     else printf("not prime");
//     return 0;
// }

//question 18
//WAP that will determine whether an integer is palindrome number or not.
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int num,digits,rev_dig;
//     scanf("%d",&num);
//     for (int i = 0; i < num; i++)
//     {
//         rev_dig=num%10;
//         num=num/10;
        

//     }
    
//     return 0;
// }



//basic pattern
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    for (int i = 0; i < row; i++)
    {
        for (int J = col; J >0; J--)
            printf("* ");
        col--;
        printf("\n");
    }
    return 0;
}




