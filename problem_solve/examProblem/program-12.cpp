#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, k;
int cnt = 0;
vector<int> merge_sort(vector<int>ara)
{
    if(ara.size() <= 1)
    {
        return ara;
    }
    vector<int> b;
    vector<int> c;
    int mid = ara.size()/2;
    for(int i = 0;i < mid; i++)
    {
        b.push_back(ara[i]);
    }
    for(int i = mid; i < ara.size(); i++)
    {
        c.push_back(ara[i]);
    }
    vector<int> sorted_b = merge_sort(b);
    vector<int> sorted_c = merge_sort(c);

    vector<int> sorted_a;
    int idx1=0;
    int idx2=0;
    for(int i = 0; i < ara.size(); i++)
    {
        if(idx1==sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2==sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(sorted_b[idx1]<sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    if(sorted_a.size()==n)
    {
        int i=0,j=n-1;
        while(i<j)
        {
            if(sorted_a[i] + sorted_a[j] > k)
            {
                j--;
            }
            else if(sorted_a[i] + sorted_a[j] < k)
            {
                i++;
            }
            else
            {
               cnt++;
               i++;
               j--;
            }
        }
    }
    return sorted_a;
}

int main()
{
    cin>>n;
    vector<int>ara(n);
    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }
    cin>>k;
    merge_sort(ara);
    cout<<cnt;
    return 0;
}
