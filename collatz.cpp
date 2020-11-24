#include <iostream>

void collatz(int number)
{
    std::cout<<number<<std::endl;
    while(number!=1 && number!=-1 && number!=0 && number!=-5 && number!=-17)
    {if(number%2==0) number/=2;
    else number=3*number+1;
    }
    std::cout<<number<<std::endl;
}

int main()
{
    int number;
    std::cout<<"number="<<std::flush;
    std::cin>>number;
    collatz(number);
    return 0;
}
/*0 kann nur dann erreicht werden, wenn die gelesene Zahl 0 ist.
Nehmen wir an, dass infolge der Zuweisung number=number/2 (*) die Variable number den Wert 0 hat. Das geschieht genau dann, wenn vor der Ausführung dieses Schrittes number kleiner als 2 war, also entweder 0 oder 1. Wenn number gleich mit 1 war, dann wäre man schon aus der Schleife rausgekommen und den Schritt (*) hätte man nicht mehr durchgeführt.
 Nehmen wir jetzt an, dass man number=0 infolge der Zuweisung number=3*number+1 erhält. Dann bedeutet das, dass number gleich mit -(1/3) war, was nicht sein kann, weil number immer eine ganze Zahl ist.
*/
//Alle Zahlen, die zum Wet 1 führen, sind aus der Menge der natürlichen Zahlen ohne Null
