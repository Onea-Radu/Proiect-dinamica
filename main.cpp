#include <iostream>
#include "MiltimeDinamica.h"
using namespace std;

int main()
{
    Multime_Dinamica::describe();
    cout<<endl;

    LinkedList l1;
    l1.insert(2);
    l1.insert(4);
    l1.insert(5);
    l1.insert(9);

    LinkedList l2;
    l2.insert(6);
    l2.insert(2);
    l2.insert(7);
    l2.insert(5);

    Multime_Dinamica m1(l1,4);
    Multime_Dinamica m2(l2,3);



    return 0;
}
