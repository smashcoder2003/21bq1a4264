#include<iostream>

using namespace std;

int countPaths(int start, int end)
{
    if(start==end)
        return 1;

    if(start>end)
        return 0;

    int count = 0;

    for(int i=1; i<=6; i++)
    {
        count += countPaths(start+i, end);
    }
    return count;

}


int main()
{
    int start, end;
    std::cin >> start >> end;
    std::cout << countPaths(start, end);
}