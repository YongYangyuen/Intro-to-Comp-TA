#include <stdio.h>

typedef struct {
    char title[70];
    char author[50];
    int year;
    float price;
} book;

void input(book b[], int n) { 
    int i;

    for(i = 0; i < n; i++) {
        fflush(stdin);
        scanf(" %[^\n]", b[i].title);
        scanf(" %[^\n]", b[i].author);
        scanf(" %d %f", &b[i].year, &b[i].price);
    }
}

book oldest(book b[ ], int n);
float totalPrice(book b[ ], int n);

int main() {
    int n;
    book bks[100];
    book obk;
    float sum = 0;

    scanf("%d", &n);

    input(bks, n);
    obk = oldest(bks, n);

    printf("The oldest book is %s\n", obk.title);
    printf("Total price = %.2f\n", totalPrice(bks, n));

    return 0;
}

book oldest(book b[], int n) {
    int i, min_index = 0, min = b[0].year;

    for(i = 1; i < n; i++) {
        if(b[i].year < min) {
            min = b[i].year;
            min_index = i;
        }
    }

    return b[min_index];
}

float totalPrice(book b[], int n) {
    int i;
    float total_price = 0;

    for(i = 0; i < n; i++) {
        total_price += b[i].price;
    }

    return total_price;
}
