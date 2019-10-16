#include<iostream>
using namespace std;

int recur(int a, int b){

if(a==b){
cout<<a;
return recur(a-(b-1),b-1);

}


if(a<b){
cout<<a;
return recur(a+1,b);
}
}
int main(){
int b,a=0;
cin>>b;
if(b>=0)
recur(a,b);

return 0;
}

