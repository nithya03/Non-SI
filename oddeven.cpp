#include <iostream>
using namespace std;
int main()
{
    int i,sum=0;
    float avg;
    for(i=1;i<=10;i++)
    {
        sum = sum +i;
        avg = sum/10;
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"avg = "<<avg<<endl;
    return 0;
}
