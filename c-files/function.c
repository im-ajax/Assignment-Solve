// quesiton 1

// #include<stdio.h>
// void func(){
//     printf("This is a function\n");
// }
// int main(){
//     func();
//     return 0;
// }

//question 2

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// void receiver(int x,char c){
//     printf("Value received from main: %d\n",x);
//     printf("Value received from main: %c\n",c);
// }
// int main(){
//     int m;char n;
//     scanf("%d %c",&m,&n);
//     receiver(m,n);
//     return 0;
// }

//question 3
// #include<stdio.h>
// int sum=0;
// void add(int x,int y,int z){
//     sum=x+y+z;
//     printf("Sum in function: %d\n",sum);
// }
// int main(){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     add(a,b,c);
//     int sum=0;
//     printf("Sum in main: %d\n",a+b+c);


//     return 0;
// }

//question 4
#include<stdio.h>
void array_input(int arr[],int n){
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
}
void array_print(int arr[],int n){
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    array_input(a,n);
    printf("%d\n",sum(a,n));
    return 0;
}


//quesiton 5
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// void array_input(int arr[],int n){
//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);
// }
// void array_print(int arr[],int n){
//     for(int i=0;i<n;i++)
//         printf("%d",arr[i]);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     array_input(arr,n);
    
//     return 0;
// }
