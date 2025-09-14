// question 3

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
//             printf("0, ");//handle the space here carefully
//         else printf("1,");
//     }
//     return 0;
// }

// question 5

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



// question 6

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


// question 9

// #include <stdio.h>
// int main() {
//     int marks;
//     printf("Enter marks: ");
//     scanf("%d", &marks);
//     if (marks > 100 || marks < 0) {
//         printf("Invalid input\n");
//     } else {
//         do {
//             if (marks >= 90) {
//                 printf("Grade: A\n");
//                 break;
//             }
//             if (marks >= 86) {
//                 printf("Grade: A-\n");
//                 break;
//             }
//             if (marks >= 82) {
//                 printf("Grade: B+\n");
//                 break;
//             }
//             if (marks >= 78) {
//                 printf("Grade: B\n");
//                 break;
//             }
//             if (marks >= 74) {
//                 printf("Grade: B-\n");
//                 break;
//             }
//             if (marks >= 70) {
//                 printf("Grade: C+\n");
//                 break;
//             }
//             if (marks >= 66) {
//                 printf("Grade: C\n");
//                 break;
//             }
//             if (marks >= 62) {
//                 printf("Grade: C-\n");
//                 break;
//             }
//             if (marks >= 58) {
//                 printf("Grade: D+\n");
//                 break;
//             }
//             if (marks >= 55) {
//                 printf("Grade: D\n");
//                 break;
//             }
//             printf("Grade: F\n");
//         } while (0);
//     }
//     return 0;
// }


// qeusiton 12

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


// question 13

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


// question 14

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
//     for (int i = third_factorial; i >=1 ; i--){
//         res3*=i;
//     }
//     long long total= res / (res2 * res3);
//     printf("total : %lld",total);
//     return 0;
// }


// question 15
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



// question 16

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

// question 19

// #include <stdio.h>
// int main()
// {
//     double x, term, sum;
//     int i;
//     scanf("%lf", &x);
//     term = x;
//     sum = x;
//     for (i = 1; i <= 15; i++){
//         term = term * (-1.0) * x * x / ((2 * i) * (2 * i + 1));
//         sum = sum + term;
//     }
//     printf("%.3f\n", sum);
//     return 0;
// }

// question 20

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int size,finder,flag=0;;
//     printf("enter the size of array\n");
//     scanf("%d",&size);
//     int arr[size];
    
//     printf("Enter the elements of the array\n");
//     for (int i = 0; i < size; i++)
//         scanf("%d",&arr[i]);
//     printf("Enter the value you want to search\n");
//     scanf("%d",&finder);
//     for(int i=0;i<size;i++){
//         if(arr[i]==finder){
//             flag=1;
//             break;
//         }
//     }
//     flag==1? printf("Found\n") : printf("Not Found\n");
//     return 0;
// }
