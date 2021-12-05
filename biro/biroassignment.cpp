#include <iostream>
#include <vector>

using namespace std;


int main(){
    //taking inputs
    int count;
    //cerr<<"Type the Count : "<<endl;
    cin>> count;
    //cerr<<"Type the distances:"<<endl;
    int *kukutyin =new int [count];
    int * piripocs=new int [count];
    int max_value=0;
    int max_index=0;
    for (int i=0; i<count; i++){
        cin>> kukutyin[i]>>piripocs[i];
        if (kukutyin[i] >max_value){
            max_value = kukutyin[i];
            max_index =i+1;
        }
    }
    cout<<max_index;
    return 0;
}