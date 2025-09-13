//question 1;
//WAP that will print a pattern based on the input integer n. Please see the sample input output.

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//question 2
//WAP that will print a pattern based on the input integer n. Please see the sample input output.

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
    
//     return 0;
// }


// quesiton 7
//WAP that will print a pattern based on the input integer n. Please see the sample input output.

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++){
//         for(int j=0;j<n;j++)
//             printf("*");
//         printf("\n");
//     }
//     return 0;
// }


//question 8
//WAP that will print a pattern based on the input integer n. Please see the sample input output.
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++){
//         for (int j = n; j >= i; j--)
//             printf("*");
//         printf("\n");
//     }
//     return 0;
// }

//question 9
//WAP that will print a pattern based on the input integer n. Please see the sample input output.
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++){
//         if(i%2==0){
//             for(int j=0;j<n;j++){
//                 if(j%2==0) printf("1 ");
//                 else printf("0 ");
//             }
//         }
//         else{
//             for(int j=0;j<n;j++){
//                 if(j%2!=0) printf("1 ");
//                 else printf("0 ");
//             }
//         } 
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int size;
//     scanf("%d",&size);
//     if(size%2==0)
//         printf("Invalid input. Provide a odd input.\n");
//     else{
//         for(int i=1;i<=size;i++){
//             for(int j=1;j<=size;j++){
//                 if(i==1||i==size||i==(size+1)/2){
//                 printf("H ");
//             }
//             else printf(" ");
//             }
//             printf("\n");
//         }
//     }

//     return 0;
// }



#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n=10;
    for (int i = n; i <= 0; i--){
        if(i==0) printf("Blasting off!\n");
        else printf("%d",i);
    }
    return 0;
}

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n=10;
//     for (int i = n; i < 0; i--){ 
//         printf("%d",i);
//     }
//     printf("Blasting off!\n");
//     return 0;
// }
