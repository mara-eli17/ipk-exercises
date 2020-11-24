//Wie auch auf dem Aufgabenblatt dargestellt wird, ist f1 das erste Element der Folge und hat somit den Wert 0

#include <iostream>

int fibonacci(int number)
{   if(number==1) return 0;
    if(number==2) return 1;
    int f1=0, f2=1, f3 = 0, copy=number-2;
    while(copy!=0)
    {   f3=f1+f2;
        f1=f2;
        f2=f3;
        copy--;
    }
    return f3;
}

int main()
{   int N;
    std::cout<<"N=";
    std::cin>>N;
    int fn=fibonacci(N);
    std::cout<<fn<<std::endl;
    return 0;}
