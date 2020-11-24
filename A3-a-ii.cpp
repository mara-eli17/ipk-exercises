//Man berücksichtige, dass das erste Element jetzt mit f0 bezeichnet wird, weil bei (ii) die Nummerierung der Elemente der Folge bei 0 anfängt.

#include <iostream>

void fibonacci(long long int number)
{   std::cout<<'0';
    if(number==0) return;
    std::cout<<" 1";
    if(number==1) return;
    long long int f0=0, f1=1, f2, copy=number-1;
    while(copy!=0)
    {   f2=f0+f1;
        std::cout<<' '<<f2;
        f0=f1;
        f1=f2;
        copy--;
    }
}

int main()
{   long long int N;
    std::cout<<"N=";
    std::cin>>N;
    fibonacci(N);
    return 0;}

