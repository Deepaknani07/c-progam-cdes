#include <stdio.h>

int main() {
int a,b,c;
printf("enter the value\n");
scanf("%d%d%d",&a,&b,&c);
a=a+b+c;
b=a-(b+c);
c=a-(b+c);
a=a-(b+c);

printf("the swapped numbers are: a=%d , b=%d ,c=%d",a,b,c);
    return 0;
}
