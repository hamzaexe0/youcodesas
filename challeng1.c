// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char name[50];
    char lastname[50];
    char address[100];
    int age;

    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);
    printf("Enter your lastname: \n");
    fgets(lastname, sizeof(lastname), stdin);
    printf("Enter your address: \n");
    fgets(address, sizeof(address), stdin);
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("Name : %s\n", name);
    printf("LastName : %s\n", lastname);
    printf("Address : %s\n", address);
    printf("Name : %d\n", age);



    return 0;
}