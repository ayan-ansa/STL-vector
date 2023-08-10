#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
vector<int>v;
v.push_back(1);
// v.insert(3);
v.push_back(5);
 v.push_back(6);
v.push_back(2);
v.push_back(3);
cout<<"Capacity->"<<v.capacity()<<endl;
cout<<"Size is "<<v.size()<<endl;
cout<<"find 5 "<<binary_search(v.begin(),v.end(),5)<<endl;
cout<<"lower_bound "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
cout<<"upper_bound "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;
int a=3;
int b=6;
cout<<"Max is "<<max(a,b)<<endl;
cout<<"Min is "<<min(a,b)<<endl;
swap(a,b);
cout<<a;
    return 0;
}