#include<iostream>

using namespace std;

void fibonacci(int num){
    int t1 = 0, t2 = 1;
    for(int i=0;i<num;i++){
        cout<<t1<<endl;
        int t3 = t2 + t1;
        t1 = t2, t2 = t3;
    }
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);

}