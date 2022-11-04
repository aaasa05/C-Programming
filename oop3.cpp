#include<stdio.h>
class afroza
{
public:
    int add(int a,int b)
    {
        int sum = a+b;
        return sum;
    }
public:
    int sub(int a,int b)
    {
        a++;
        int sum = a-b;
        return sum;
    }
public:
    void mul(int a,int b)
    {
        name();

        int sum = a*b;
        printf("%d\n",sum);
    }
public:
    void div(int a,int b)
    {

        int sum = a/b;
        printf("%d\n",sum);
    }
public:
    int mod(int a,int b)
    {
        int sum = a%b;
        input2();
        input();
        return sum;
    }
private:
    int name()
    {
        printf("my name is asa\n");
    }
protected:
    void input()
    {
        printf("There are two input of this program\n");
    }
public:
    void input2()
    {
        printf("Hello world!\n");
    }

};
int main()
{
    afroza asa;
    int x,y,z,p,q,sum;
    x = asa.add(2,6);
    y = asa.sub(10,15);
    z = asa.mod(5,15);
    asa.mul(2,3);

    asa.div(10,5);

    //asa.name();
    // asa.input();
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);

}

