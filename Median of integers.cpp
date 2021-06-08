/*the idea is to keep 2 heaps minHeap and maxHeap, during the traversal on input maintain heaps such that if we maintain the median position at the top*/


#include<iostream>
#include <iomanip>
#include<vector>
#include <queue>

using namespace std;

int main()
{
    int n,x;  
	cin>>n;

    auto cmpSmaller = [](int a, int b){return a>b;};
    auto cmpBigger  = [](int a, int b){return a<b;};

    priority_queue<int,vector<int>,decltype(cmpSmaller)> maxHeap(cmpSmaller);
    priority_queue<int,vector<int>,decltype(cmpBigger) > minHeap(cmpBigger);

    auto pushInHeap = [&minHeap , &maxHeap](int data)
    {
        if(minHeap.empty() or minHeap.top()>data)
            minHeap.push(data);
        else
            maxHeap.push(data);
    };

    auto balanceHeap = [&minHeap , &maxHeap]()
    {
        int miSize = minHeap.size() , mxSize = maxHeap.size();
        if(abs(miSize - mxSize) >= 2)
        {
            if(miSize > mxSize)
                maxHeap.push( minHeap.top() ) , minHeap.pop();
            else
                minHeap.push( maxHeap.top() ) , maxHeap.pop();
        }
    };

    auto getMedian = [&minHeap , &maxHeap]()
    {
        int miSize = minHeap.size() , mxSize = maxHeap.size();
        if(miSize == mxSize)
        {
            double x = minHeap.top();
            double y = maxHeap.top();
            return (x+y)/2;
        }
        else
            return double( (miSize < mxSize) ? maxHeap.top() : minHeap.top());
    };
    
    while(n--)
    {
        cin>>x;
        pushInHeap(x);
        balanceHeap();
        cout<<setprecision(1)<<fixed<<getMedian()<<'\n';
    }
}
