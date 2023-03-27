#include<iostream>

using namespace std;

int main(){
    for (int i =0; i <= 10; i++){
        if (i%2==0){
            continue;
    } else if (i%3 == 0){
            break;
    }

        cout<<i<<endl;
    }
}