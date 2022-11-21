#include<bits/stdc++.h>
using namespace std;
class test{
    private:
    static void sum(){
        int a=10,b=20;
        int sum=a+b;
        cout<<sum<<endl;
    }
    static void sum(int x,int y){
        int sum=x+y;
        cout<<sum<<endl;
    }
};
int main(){
    // sum();
    sum(2,3);
    return 0;
}

