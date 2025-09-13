#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0)
            printf("0 ");//handle the space here carefully
        else printf("1 ");
    }
    return 0;
}