// reading and displaying information of book
#include <stdio.h>
struct book
{
    int price, year_of_prod;
    char title[20], author[20];
    int no_of_pages;
};
int main()
{
    struct book b1 = {200, 2022, "Physics", "H C Verma", 543};
    struct book b2 = {340, 2018, "Chemistry", "Mohit Chouhan", 328};
    struct book b3 = {470, 2012, "Mathematics", "Cengage", 746};

    printf("The title of the book is %s by %s in year %d, which costs Rupees %d and have %d pages\n", b1.title, b1.author, b1.year_of_prod, b1.price, b1.no_of_pages);
    printf("The title of the book is %s by %s in year %d, which costs Rupees %d and have %d pages\n", b2.title, b2.author, b2.year_of_prod, b2.price, b2.no_of_pages);
    printf("The title of the book is %s by %s in year %d, which costs Rupees %d and have %d pages\n", b3.title, b3.author, b3.year_of_prod, b3.price, b3.no_of_pages);
}