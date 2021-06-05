#include <iostream>
#include <cmath>

using namespace std;

int funk(int n,int m)
{
    //unsigned int n;
    //unsigned int m;
    unsigned long long factorial1 = 1;
    unsigned long long factorial2 = 1;

	int final;
    for(int i = 1; i <=n; ++i)
    {
        factorial1 *= i;
    }
     for(int i = 1; i <=m; ++i)
    {
        factorial2 *= i;
    }
    final=factorial1-factorial2;
    cout << final;
}

int main(){
	int a,b;
	cin>>a>>b;
	funk(a,b);	
}



