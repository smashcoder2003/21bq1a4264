#include<bits/stdc++.h>

using namespace std;

string reversebinary(string num) {
    string reverse = "";
    for(int i = num.size()-1;i>=0;i--){
        reverse += num[i];
    }
    return reverse;
}

string addBinary(int a, int b){
    int previouscarry = 0;
    int ans=0;
    string addednumber = "";
    while (a > 0 && b > 0)
    {

        if(a%2==0 && b%2==0) 
        {
            addednumber += to_string(previouscarry);
        }


        if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)) 
        {
            if(previouscarry == 0) 
            {
                addednumber+= to_string(1);
                previouscarry = 0;
            } 
            else 
            {
                addednumber+= to_string(0);
                previouscarry = 1;
            }
        }

        else
        {
            if(previouscarry == 1)
            {
                addednumber+= to_string(1);
                previouscarry = 1;
            }
            else
            {
                addednumber+= to_string(0);
                previouscarry = 1;
            }
        }
        
        a /= 10;
        b /= 10;
    }

    while(a>0)
    {
            if (previouscarry==1)
            {
                if (a%2==0) {
                    addednumber+= to_string(1);
                    previouscarry = 0;
                }
                else if (a%2==1)
                {
                addednumber+= to_string(0);
                previouscarry = 1;
                }  
            } 
            else if (previouscarry == 0)
            {
                if(a%2==0)
                {
                    addednumber+= to_string(0);
                    previouscarry=0;
                }
                else if (a%2==1)
                {
                    addednumber+= to_string(1);
                    previouscarry = 0;
                }

            }
        a/=10;
    }

    while(b>0)
    {
        if (previouscarry==1)
        {
            if (b%2==0){
                addednumber+= to_string(1);
                previouscarry = 0;
            }
            else if (b%2==1)
            {
            addednumber+= to_string(0);
            previouscarry = 1;
            }
            
        } 

        else if (previouscarry == 0)
        {
            if(b%2==0)
            {
                addednumber+= to_string(0);
                previouscarry=0;
            }
            else if (b%2==1)
            {
                addednumber+= to_string(1);
                previouscarry = 0;
            }
        }
    b/=10;
    }

    if(previouscarry == 1)
        addednumber+= to_string(1);

    return reversebinary(addednumber);
}

    
int main() {
    int a, b;
    cin >> a >> b;

    cout << addBinary(a, b);
}