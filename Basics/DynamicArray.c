


// PROBLEM STATEMENT FROM HACKERRANK - DETAILED PROBLEM STATEMENT PDF DOWNLOADED, KEPT IN E:\Work\Programming\Problem Statements


/**
    Hello, sure thing. So the problem question is confusing. Firstly, "total_number_of_pages" is a completely separate entity from "total_number_of_books". Also, it helps to think of it as "total_number_of_pages[per shelf][per book]" (a pointer to a pointer) and "total_number_of_books[per shelf]" (a pointer).

    So we are using the shelf number (zero-indexed) to organize each array. So "total_number_of_pages[0][0]" contains the total pages of the first book on the first shelf, and "total_number_of_books[0]" contains the total number of books on the first shelf. (Again, these are two completely separate measurments. Although they are both measuring parts of the same thing, their arrays are completely separate.)

    So, whenever we add a book to a shelf, we have to increase the value pointed to by "total_number_of_books[shelf number]" by 1. Once that is done, we have to add an extra book onto the shelf in "total_number_of_pages[shelf]" then update the pages in our new book "total_number_of_pages[shelf][total_number_of_books[x-1]]" (minus 1 because they are zero indexed - so if our new book was the 2nd book, then it will be at index 1).

    If you are specifically referencing the actual "for" loop, then that is just initializing the amount of books on each shelf to "0" and the pointers to the books themselves ("total_number_of_pages[shelf][book]").
 * 
 */



#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    total_number_of_books = (int *)malloc(total_number_of_shelves * sizeof(int));
    total_number_of_pages = (int **)malloc(total_number_of_shelves * sizeof(int*));


    for(int i = 0 ; i < total_number_of_shelves ; i++)
    {
        total_number_of_books[i] = 0; // set no. of books = 0
        total_number_of_pages[i] = NULL; // set pointer to array NULL
    }
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
            // 1 x y : Insert a book with  pages y at the end of the x shelf.
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);

            total_number_of_books[x]++;     // Increment number of books on shelf

            if (total_number_of_books[x] == 1) {
                // we will insert first book so no need to reallocate the memory now
                total_number_of_pages[x] = (int *)malloc(sizeof(int));
            } else {
                total_number_of_pages[x] = realloc(total_number_of_pages[x], total_number_of_books[x]*sizeof(int));
            }

            // Its mentioned that "Both the shelves and the books are numbered starting from 0." see constraints so keep that in mind  that is why i use "- 1" here total_number_of_books[x]-1 

            total_number_of_pages[x][total_number_of_books[x] - 1] = y;
        } 
        else if (type_of_query == 2) 
        {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } 
        else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}