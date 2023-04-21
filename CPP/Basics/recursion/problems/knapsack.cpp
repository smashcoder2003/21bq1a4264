#include<iostream>

using namespace std;

int knapsack(int values[], int weights[], int n, int capacity)
{
    if(n<0 || capacity == 0)
        return 0;
    
    if(weights[n] > capacity)
        return knapsack(values, weights, n-1, capacity);

    return max((knapsack(values, weights, n-1, capacity - weights[n]) + values[n]),
    knapsack(values, weights, n-1, capacity));
}


int main()
{
    int weights[3] = {10, 20, 30};
    int values[3] = {100, 50, 150};
    int n=3;
    int capacity=50;
    cout << knapsack(values, weights, n-1, capacity);
}