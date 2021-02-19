#include <stdio.h>
int osz(int,int);
int main() {
    int x=2,y=3;
    printf("%d",osz(x,y));
    return 0;
}
int osz(int a,int b)
{
    return a+b;
}