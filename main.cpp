
#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int ans=0;
    int age, month,day,hour;
    cout<<"Enter your age ;";
    cin>>age;
    month=age*12;
    day=(month/2*30)+(month/2*31);
    hour=day*24;
    cout<<"you lived and consumed :"<<month<<"month"<<day<<"day"<<hour<<"hour";



    getch();
    return 0;
}
