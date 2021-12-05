#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<int,int> get_frequency(vector<int> num ){
    map <int , int> frq;
    for (int i = 1; i < num.size(); i++)
    {
        frq [num[i]]+=1;
    }
    return frq;
}
int first_index (vector<int> num, int n){
    int i=1;
    while (num[i]!=n and i<num.size()){
        i++;
    }
    return i;
    
}
map <int , int> get_max(map <int, int> m){
    map <int , int > max;
    auto iter = m.begin();
    int max_int=0;
    while (iter!=m.end()){
        //code 
        if ((iter->second) >= max_int){
            max_int = iter->second;
            max[iter->first]=max_int;
        }
        ++iter;
    }
    auto it=max.begin();
    while (it!=max.end() and it->second !=max_int)
    {
        max.erase(it);
        ++it;
    }
    return max;
    
}
int main(){
// Taking Input
    int cnt;
    int limit ;
    cin>>cnt>>limit;
    vector<int> numbers(cnt+1);
    for (int i = 1; i <= cnt; i++)
    {
        int number;
        cin>>number;
        numbers[i]=number;
    }
    map <int , int > m = get_frequency(numbers);
    map <int, int> max= get_max(m);
    vector <int> frst(max.size());
    //cout<<max.size()<<endl;
    int k=0;
    auto it=max.begin();
    //int j=0;
    while (it!=max.end())
    //for (auto  i = max.begin(); i != max.end(); ++i)
    {
        frst[k]=first_index(numbers,(it->first));
        //cout<<frst[j]<<"--";
        ++it;
        k++;
        //j++;
    }
    
    auto iter=max.begin();
    int j=0;
    while (iter !=max.end()){
        cout<<frst[j]<<" "<<iter->first<<" "<<iter->second<<endl;
        ++iter;
        j++;
    }


}
