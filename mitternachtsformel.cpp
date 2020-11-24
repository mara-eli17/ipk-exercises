#include <iostream>
#include <cmath>
int main()
{
    double a,b,c;
    std::cout<<"a="<<std::flush;
    std::cin>>a;
    std::cout<<"b="<<std::flush;
    std::cin>>b;
    std::cout<<"c="<<std::flush;
    std::cin>>c;
    if(a==0 && b==0 && c==0)std::cout<<"Gleichung mit unendlich vielen Loesungen"<<std::endl;
    else
        if(a==0 && b==0) std::cout<<"keine Loesung"<<std::endl;
        else
            if(a==0)
            {double x;
                x=-c/b;
                std::cout<<"Gleichung hat eine Loesung:"<<x<<std::endl;
            }
            else
            {double d=b*b-4*a*c;
                if(d<0)std::cout<<"Gleichung hat komplexe Loesung"<<std::endl;
                else
                    if(d==0)std::cout<<"Gleichung hat 2 gleiche Nullstellen:"<<-b/(2*a)<<std::endl;
                    else
                    {double x1,x2;
                        x1=(-b+sqrt(d))/(2*a);
                        x2=(-b-sqrt(d))/(2*a);
                        std::cout<<"x1="<<x1<<' '<<"x2="<<x2<<std::endl;
                    }
            }
    return 0;
}
