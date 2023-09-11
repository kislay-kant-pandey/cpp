// program runs continiously while we don't take zero as input.
#include<iostream>
using namespace std;
int main()
    {
        int n;
        cin>>n;

        do{
            cout<<n<<endl;
            cin>>n;
        } while(n>0);
        
    
    return 0;
    }