#include <stdio.h>
#include <stdlib.h>

    struct Book {
        char title[100];
        char author[50];
        int year;
    };

    void infoOutput(struct Book s) {
    printf("\n");
    printf("Название: %s\n", s.title);
    printf("Автор: %s\n", s.author);
    printf("Год выхода: %d\n", s.year);
    printf("\n");
}


int main(){

    system("chcp 65001");

    struct Book books[5] = { 
        {"Война и мир", "Лев Толстой", 1869},
        {"Мастер и Маргарита", "Михаил Булгаков", 1940},
        {"Преступление и наказание", "Федор Достоевский", 1866},
        {"Герой нашего времени", "Михаил Лермонтов", 1839},
        {"Гарри Поттер", "Джоан Роулинг", 2007},
    };

    for(int i=1; i<5; i++) {
        infoOutput(books[i]);
    }
    return 0;
}