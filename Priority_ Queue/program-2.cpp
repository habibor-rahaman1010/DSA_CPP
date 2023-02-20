//Template base Priority Queue in c++ program...

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    priority_queue<int>pq;

    pq.push(10);
    pq.push(5);
    pq.push(3);
    pq.push(8);
    pq.push(9);

    while(pq.size() != 0){
        cout<<pq.top() <<" ";
        pq.pop();
    }

return 0;
}
