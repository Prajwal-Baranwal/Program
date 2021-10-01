#include<iostream>
using namespace std;

int main()
{   
    for(int j = 2; j <= 1000; j++)
    {
        bool div = false;
        for(int i = 2; i < j; i++)
        {
            if(j % i == 0)
            {
                div = true;
                break;
            }    
        }
        if(div == false)
        {
            cout << j << "&";
        }
    }
    return 0;
} 