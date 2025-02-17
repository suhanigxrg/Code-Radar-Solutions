#include<stdio.h>
int main(){
    char name[1000], hobby[1000];
    int age;
    scanf("%s %d %s",&name,&age,&hobby);
    print("Name: %s",name);
    print("Age: %d",age);
    print("Hobby: %s",hobby);
    return 0;
}