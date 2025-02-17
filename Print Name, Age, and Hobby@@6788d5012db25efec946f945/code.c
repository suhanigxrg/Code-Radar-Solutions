#include<stdio.h>
int main(){
    char name[100], hobby[100];
    int age;
    scanf("%s", name);
    scanf("%d",&age);
    scanf("%s", hobby);
    print("Name: %s",name);
    print("Age: %d",age);
    print("Hobby: %s",hobby);
    return 0;
}