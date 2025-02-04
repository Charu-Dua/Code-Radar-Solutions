#include <stdio.h>

int main() {
    char name[100],hobby[100];
    int age;
    scanf("%s %d",&name,&age);
    scanf("%s",&hobby);
    print("Name: %s\n",name);
    print("Age: %d\n",age);
    print("Hobby: %s\n",hobby);

    return 0;
}