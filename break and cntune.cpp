
#include<iostream>
using namespace std;
int main()
{

    for (int i=0; i<5; i++)
    {
        cout << "i is: " <<i << endl;

        if (i==4)
        {
            break;
        }
        cout << "looping ... "<<endl;
    }
    cout << "program quitting..."<<endl;
    return 0;
}
