//question 1
/*
1. Student Structure Operations
Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.
*/

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// #include<stdlib.h>
// #include<stdbool.h>
// struct Student{
//     char name[100];
//     int age;
//     float total_marks;
// };
// int main(){
//     printf("How many students?\n");
//     int n;
//     scanf("%d",&n);
//     struct Student student[n];
//     for(int i=0;i<n;i++)
//         scanf("%s %d %f",&student[i].name,&student[i].age,&student[i].total_marks);
//     printf("Information of the students: \n");
//     for(int i=0;i<n;i++)
//         printf("Name: %s\nage: %d\nTotal Marks: %.2f\n",student[i].name,student[i].age,student[i].total_marks);
//     float avg;float sum;  
//     for(int i=0;i<n;i++){
//         sum+=student[i].total_marks;
//     }
//     avg = sum/n;
//     printf("average of the total marks: %.2f\n",avg);
//         return 0;
// }


//question 2

/*
3. Book Structure Management

Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.
*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
struct books{
    char name[1000];
    char author[1000];
    float book_price;
};
int main(){
    int n;
    scanf("%d",&n);
    struct books items[n];
    for(int i=0;i<n;i++)
        scanf("%s %s %f",&items[i].name,&items[i].author,&items[i].book_price);
    // finding the max priced book
    float expensive=items[0].book_price;
    for(int i=0;i<n;i++){
        if(expensive<items[i].book_price)
            expensive=items[i].book_price;
    }
    //finding the low priced book
    float lowest_priced=items[0].book_price;
    for(int i=0;i<n;i++){
        if(lowest_priced>items[i].book_price)
            lowest_priced=items[i].book_price;
    }
    printf("Expensive Book info:\n Book name: %s, author name: %s, Price: %f\n",expensive);
    printf("Lowest price Book info:\n Book name: %s, author name: %s, Price: %f\n",lowest_priced);
    //all infos together
    for(int i=0;i<n;i++)
        printf("Book name: %s, author name: %s, Price: %f\n",items[i].name,items[i].author,items[i].book_price);
    return 0;
}





