// quesiton 1


// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// int main(){
//     printf("This is a function\n");
//     return 0;
// }



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
// #include<stdio.h>
// void array_input(int arr[],int n){
//     for(int i=0;i<n;i++)
//         scanf("%d",&arr[i]);
// }
// void array_print(int arr[],int n){
//     for(int i=0;i<n;i++)
//         printf("%d ",arr[i]);
// }
// int sum(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++)
//         sum+=arr[i];
//     return sum;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     array_input(a,n);
//     printf("%d\n",sum(a,n));
//     return 0;
// }


//quesiton 7
// #include<stdio.h>
// void array_input(int arr[],int n){
//     for(int i=0;i<n;i++)
//         scanf("%d",&arr[i]);
// }
// void even_array(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0)
//             printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     array_input(arr,n);
//     even_array(arr,n);
//     return 0;
// }



//question 8
// #include<stdio.h>
// int minimum(int arr[],int n){
//     int min=arr[0];
//     for(int i=0;i<n;i++){
//         if(min>arr[i]) min=arr[i];
//     }
//     return min;
// }

// for maximum:
// int maximum(int arr[],int n){
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(max<arr[i]) max=arr[i];
//     }
//     return max;
// }
// void array_input(int arr[],int n){
//     for(int i=0;i<n;i++)
//         scanf("%d",&arr[i]);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     array_input(arr,n);
//     // for getting maximum
//     int maxi=maximum(arr,n);
//     int mini=minimum(arr,n);
//     printf("%d",mini);
//     return 0;
// }


//question 9
// #include<stdio.h>
// void array_input(int arr[],int n){
//     for(int i=0;i<n;i++)
//         scanf("%d",&arr[i]);
// }
// void multiplier(int arr[],int n){
//     for(int i=0;i<n;i++){
//         arr[i]=arr[i]*2;
//             printf("%d ",arr[i]);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     array_input(arr,n);
//     multiplier(arr,n);
//     return 0;
// }


//question 11
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// int flag=0;
// void IsPrime(int x){
//     for(int i=2;i<x;i++){
//         if(x%i==0){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1) printf("Not Prime\n");
//     else printf("Prime\n");
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     IsPrime(n);
//     return 0;
// }



//question 12
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// void 
// int main(){
//     int n;
//     scanf("%d",&n);
    
//     return 0;
// }



//question 18
// #include<stdio.h>
// void input_2d_mat(int r,int c,int arr[r][c]){
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }
// int main(){
//     int r,c;
//     scanf("%d%d",&r,&c);
//     int arr[r][c];
//     input_2d_mat(r,c,arr);
//     ShowMatrix();
//     ScalarMultiply(r,c,arr);
//     return 0;
// }


// function 

/*
mandatory things to create a function
1. return type
2. function naming (varible)
3. parameter declaration
*/





//first approach

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// int main(){
    // int a,b;
    // char op;
    // scanf("%d %c %d",&a,&op,&b);
    // if(op == '+') printf("Addition: %d",a+b);
    // else if(op == '-') printf("Substraction: %d",a-b);
    // else if(op == '*') printf("Multiplication: %d",a*b);
    // else if(op == '/'){
    //     if(b==0) printf("Zero as divisor is not valid");
    //     else printf("Divisor: %d",a/b);
    // }
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// int flag=0;
// void calculator(int a,char op,int b){
//     if(op == '+') printf("Addition: %d",a+b);
//     else if(op == '-') printf("Substraction: %d",a-b);
//     else if(op == '*') printf("Multiplication: %d",a*b);
//     else if(op == '/'){
//         if(b==0) printf("Zero as divisor is not valid");
//         else printf("Divisor: %d",a/b);
//     }
// }

// int main(){
//     int a,b;
//     char op;
//     scanf("%d %c %d",&a,&op,&b);
//     calculator(a,op,b);
    
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// int factorial(int x){
//     int fac=1;
//     for(int i=x;i>=1;i--)
//         fac*=i;

//     return fac;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int factor=factorial(n);
//     printf("%d!= %d",n,factor);
//     return 0;
// }


/*
take input of a,b;
use their result to calculate area of a circle.
*/


// list of functions for array
/*
1. maximum
2. minimum
3. summation of elements in array
4. inoput
5. print
*/


// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// //all functions we used here.
// void input(int arr[],int n);
// void print_array(int arr[],int n);
// void maximum(int arr[],int n);
// void minimum(int arr[],int n);
// void summation(int arr[],int n);
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     input(arr,n);
//     maximum(arr,n);
//     minimum(arr,n);
//     summation(arr,n);
//     print_array(arr,n);
//     return 0;
// }
// //taking input
// void input(int arr[],int n){
//     for(int i=0;i<n;i++)
//         scanf("%d",&arr[i]);
// }
// //printing the array
// void print_array(int arr[],int n){
//     printf("given array: ");
//     for(int i=0;i<n;i++)
//         printf("%d ",arr[i]);
// }
// // finding the maximum
// void maximum(int arr[],int n){
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max) max=arr[i];
//     }
//     printf("Maximum: %d\n",max);
// }
// // finding minimum
// void minimum(int arr[],int n){
//     int min=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<min) min=arr[i];
//     }
//     printf("Minimum: %d\n",min);
// }
// //getting summation
// void summation(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     printf("summation: %d\n",sum);
// }







// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// //prototype using
// int result(int ,int);
// void area(int);

// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int res = result(a,b);
//     area(res);
//     return 0;
// }

// int result(int a,int b){
//     return a+b;
// }
// void area(int res){
//     float pi = 3.1416,area;
//     area= pi* (res*res);
//     printf("%.2f",area);
// }



/*
2
sunny housling 88
shadhin shell 45
*/


// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// int factorial(int x,int y,int z){
//     int res=1,res2=1,res3=1;
//     for(int i=x;i>=1;i--)
//         res*=i;
//     for(int i=y;i>=1;i--)
//         res2*=i;
//     for(int i=z;i>=1;i--)
//         res3*=i;
//     summation(res,res2,res3);
// }
// int summation(int a,int b,int c){
//     int sum=0;
//     sum=sum+a+b+c;
//     printf("%d",sum);
// }
// int main(){
//     int x,y,z;
//     scanf("%d%d%d",&x,&y,&z);
//     factorial(x,y,z);
//     return 0;
// }

//some basic codes
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// int x;
// void ReversedNumber(int n);
// void Difference(int a,int b);
// void IsPalindrome(int num);
// int main(){
//     scanf("%d",&x);
//     ReversedNumber(x);
//     return 0;
// }
// void ReversedNumber(int n){
//     int rev_digit=0;
//     while(n!=0){
//         int new_digit=n%10;
//         n/=10;
//         rev_digit=(rev_digit*10)+new_digit;
//     }
//     printf("Reversed Number: %d\n",rev_digit);
//     Difference(x,rev_digit);
// }
// void Difference(int a,int b){
//     int diff=abs(a-b);
//     printf("Difference: %d\n",diff);
//     IsPalindrome(diff);
// }
// void IsPalindrome(int num){
//     int pal_digit=0;
//     while(num!=0){
//         int new_digit=num%10;
//         num/=10;
//         pal_digit=(pal_digit*10)+new_digit;
//     }
//     printf("Is the Number is palindrome? ");
//     if(num==pal_digit) printf("Yes");
//     else printf("No");
// }



