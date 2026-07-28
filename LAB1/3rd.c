#include <stdio.h>
struct Book
{
    int BookId;
    char title[100];
    char AuthorName[100];
    int price;
}bk1;

int main(){
        printf("Enter BookId : \n");
    scanf("%d", &bk1.BookId);
    printf("Enter title : \n");
    scanf("%s", &bk1.title);
    char c;
    scanf("%c",&c);
    printf("enter Author Name: \n");
    scanf("%s",&bk1.AuthorName);
    scanf("%c",&c);
    printf("Enter price : \n");
    scanf("%d", &bk1.price);



   
    printf("\n \n \n BookId - %d \n Title - %s \n Author Name - %s \n Price - %d", bk1.BookId, bk1.title, bk1.AuthorName, bk1.price);
}
