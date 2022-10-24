#include <string.h>
#include <stdio.h>
#define MAX 1000

#define MAX_NAME 20
#define MAX_GEN 10
#define MAX_TEL 11
#define MAX_ADDRESS 50

struct People
{
    /* data */
    char name[MAX_NAME];
    int age;
    char gen[MAX_GEN];
    int tel[MAX_TEL];
    char address[MAX_ADDRESS];
};


struct Contanct
{
    /* data */
    struct People Peo[MAX];
    int Size;
};

void InitContanct(struct Contanct* ps);
void AddContanct(struct Contanct* ps);
void DisplayContanct(struct Contanct* ps);
