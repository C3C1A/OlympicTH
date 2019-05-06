#include <iostream>
using namespace std;

int main()
{
    long long n,count=0;
    int i;
    cin >> n;
    for(i=1;i<=n/2;i++){
        if(n%i == 0)    count ++ ;
    }
    count++;
    cout << count;

    return 0;
}
