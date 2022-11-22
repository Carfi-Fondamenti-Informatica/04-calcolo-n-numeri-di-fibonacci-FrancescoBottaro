#include <iostream>
using namespace std;
int main() {
    int n=0;
    int Fib1=1, Fib2=1, numeroFibonacci=0;

    cin>>n;

    if (n < 2){
       cout<< "errore"<<endl;
    }

    else{
       cout<<Fib1<<endl;
       cout<<Fib2<<endl;

       int i=0;
       for (i=3 ; i<=n; i++)
       {
           numeroFibonacci =  Fib2 + Fib1  ;
           cout<<numeroFibonacci<<endl;
           Fib1 = Fib2 ;
           Fib2 = numeroFibonacci ;

       }
    }
    return 0;
}
