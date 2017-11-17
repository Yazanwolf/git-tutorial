#include <cs50.h>
#include <stdio.h>

int get_number();
void check_if_invaled(int number);

int main(void)
{
    int number = 0 ;
    check_if_invaled(number);
}
int get_number()
{
    return get_int();
}

void check_if_invaled(int number)
{
    do
    {
        printf("Number less then 100:  ");
        number=get_number();

    }while(number<0||number>100);
}