#include<stdio.h>

class A {
    public: int sum(int a, int b) {
        int c = a+b;
        return c;
    }
};

int main(){
    A asa;
    int sum = asa.sum(1,2);

    printf("%d",sum);

    return 0;
}
