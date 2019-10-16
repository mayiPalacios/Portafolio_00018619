// Example program
#include <iostream>
#include <string>
using namespace std;

int recur(int a,int b){

 if(a<=b)  
cout<<a<<",";
    return recur(a+1,b);
}




int main()
{int a,b;
    cout<<"ingrese el final"<<endl;
    cin>>a>>b;

recur(a,b);



return 0;
}
