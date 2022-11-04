#include<stdio.h>
/**********
There are three types of access modifier inside of class in C/CPP
1) Public
2) Private
3) Protected
***********/
class Calculator {
    public: int add(int a, int b) {
        int sum = a+b;
        // asa();
        return sum;
    }

    public: int sub(int a, int b) {
        int sum = a-b;

        int z = add(a,b);
        return sum;
    }

    public: void print(){
        printf("Hello world\n");
        asa();
    }

    protected: void asa() {
        printf("My name is ASA\n");
    }

};

int main() {
Calculator calc;
int x,y;
//x=calc.add(20,10);
y=calc.sub(5,10);


calc.print();
//calc.asa();
//cout>>x;
printf("%d\n",x);
printf("%d\n",y);
return 0;
}
