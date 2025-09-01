//ans to the question no. 1
//a.c

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int a=5!=6? -1.2:0.3;
//     int b=1+a--;
//     if(!b--)
//         printf("Inside First IF\n");
//     printf("a=%d and b =%d\n",a,b);
//     if(a*b>0&&b-1>0)
//         printf("Inside Second IF\n");
//     else if (a+b<0)
//         printf("Inside ELSE IF\n");
//     else printf("Inside ELSE\n");
//     return 0;
// }

// output will be 
/*
Inside First IF
a=-2 and b =-1
Inside ELSE IF

*/

// b.c
// if (a * b == 0) {
//     a = b + 2;
//     b = a--;
//     printf("a = %d and b = %d\n", a, b);
// }
// else if (a * b == 1) {
//     printf("a = %d and b = %d\n", a, b);
// }
// else if (a * b == 2) {
//     a = b + 2;
//     b = a--;
// }
// else if (a * b == 3 || a * b == 4) {
// }
// else {
//     printf("Inside default\n");
// }



//question 2
//a)
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int a=8,b=0,c=0;
//     do{
//         if(a%2==0) b++;
//         else c++;
//         printf("%d %d %d\n",a,b,c);
//         if(a==8) a=3;
//         else if(a==3) a=6;
//         else if(a==6) a=9;
//         else if(a==9) a=0;
//     }
//     while(a!=0);
//     return 0;
// }
/*
output will be
8 1 0
3 1 1
6 2 1
9 2 2
*/


//question 2
// b)
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n=9;
//     int i=1;
//     int j;
//     for (j=i*7;i<n/2&&i!=j;j=j-1+i)
//     {
//         j=j-2+i;
//         printf("i=%d, j=%d\n",i,j);
//         do{
//             j+=3,n--;
//         }while(j%2!=0);
//         if(i==1) continue;
//         i++;
//     }
//     return 0;
// }
/*
output
i=1, j=6
i=1, j=11
i=1, j=13
i=1, j=15
i=1, j=17
*/

// question 3
// a)

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int arr[20],evencnt=0,oddcnt=0,sum=0;
    float avg;
    for(int i=0;i<20;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<20;i++){
        if(arr[i]%2==0)
            evencnt++;
        else oddcnt++;
        sum+=arr[i];
    }
    avg=sum/20;
    printf("Evens: %d\nOdds: %d\nAverage: %f\n",evencnt,oddcnt,avg);
    return 0;
}
/*
outputs
Evens: 0
Odds: 20
Average: 1.000000

*/

