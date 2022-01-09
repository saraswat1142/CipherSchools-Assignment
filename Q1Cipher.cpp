/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0;
    int sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        sum=sum+a;
        x=x+i;
    }
    x=x+n;
    
    cout<<x-sum;
    

    return 0;
}
