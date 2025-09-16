//question 6
// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         scanf("%d",&arr[i]);
//     int arr2[n];
//     for(int i=0;i<n;i++)
//         scanf("%d",&arr2[i]);
//     int result[n];
//     for(int i=0;i<n;i++){
//         result[i]=arr[i]+arr2[i];
//         printf("%d ",result[i]);
//     }
//     return 0;
// }

//question 7
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//         scanf("%d",&n);
//     int arr2[n];
//     for(int i=0;i<n;i++)
//         arr2[i]=arr[i];
//     return 0;
// }


//question 8
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//         scanf("%d",&arr[i]);
//     int max=arr[0],max_index,min=arr[0],min_index;
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//             max_index=i;
//         }
//         else if(min>arr[i]){
//             min=arr[i];
//             min_index=i;
//         }
//     }
//     printf("Max: %d, Index: %d\n",max,max_index);
//     printf("Min: %d, Index: %d",min,min_index);
//     return 0;
// }


//question 9
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     char arr[n+1];
//     for(int i = 0; i < n; i++)
//         scanf(" %c", &arr[i]);  // Added space before %c to skip newline/whitespace
//     int cnt = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U' || 
//            arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
//             cnt++;
//     }
//     printf("%d", cnt);
//     return 0;
// }


//question 10

#include <stdio.h>
int main() {
    int n, search;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &search);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            if (!found){
                printf("FOUND at index position: %d", i);
                found = 1;
            } else 
                printf(", %d", i);
        }
    }
    if (!found)
        printf("NOT FOUND\n");
    printf("\n");
    return 0;
}


