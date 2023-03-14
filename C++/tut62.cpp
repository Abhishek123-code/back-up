#include<iostream>
#include<map>
#include<string>
using namespace std;
// Map is an associative array 
int main()
{
    map<string,int> marks;
    marks["Abhi"]=98;
    marks["Harry"]=89;
    marks["Nikki"]=97;

    marks.insert({{"abcd",67},{"efgh",45}});
    map<string,int>:: iterator itr;
    for(itr=marks.begin();itr!=marks.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    cout<<"the size is"<<marks.size()<<endl;
    cout<<"the max size is"<<marks.max_size()<<endl;
    cout<<"the empty's return value is"<<marks.empty()<<endl;
    return 0;
}