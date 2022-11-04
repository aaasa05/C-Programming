#include<stdio.h>
void myFunction2() {
    printf("MY NAME IS ASA\n");
}
void myFunction1() {
    myFunction2();
    myFunction2();
    printf("MY NAME IS ZAWAD\n");
    myFunction2();
}

void myFunction3() {
    printf("%d",sum());
}

int sum() {
    int a =10, b=20;
    return a+b;
}

int main() {
    myFunction3();
    return 0;
}

