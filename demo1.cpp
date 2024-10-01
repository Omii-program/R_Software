#include <iostream>
using namespace std;
class stude
{
    int rno = 101;

public:
    int rno1;
    void disp()
    {
        cout << "Rno is :" << rno << endl;
    }
};
/*int stude::disp1()
{
    cout << "rno is " << rno;
    rno1 = rno;
    return rno1;
}*/
int main()
{
    stude s[10];
    for (int i = 0; i < 10; i++)
    {

        s[i].disp();
    }
}
