#include <iostream>
#include<string>
#include <vector>
#include <sstream>
using namespace std;


vector<string> split(string a, char del){
    vector <string> arr;
    int j=0, k=0;
    for (int i=0; i<a.length(); i++ ){
        k++;
        if (a[i]==del){
            arr.push_back(a.substr(j,k-1));
            k=0;
            j=i+1;
        }
        else if(i==(a.length()-1)){
            arr.push_back(a.substr(j,k));
        }
    }
    return arr;
}
int main(){
    //Input::
    int number_of_books;
    cin>>number_of_books;
    //Book *b =new Book [number_of_books];
    //books.push_back(Book("a","d",1,2));
    vector<int> output;
    string input;
    for (int i =0; i<number_of_books; i++){
        cin>>input;
        vector<string> splitted = split(input,';');
        stringstream avaint(splitted[2]);
        stringstream loanint(splitted[3]);
        int a,l;
        avaint >>a;
        loanint>> l;
        if ((a-l)<=2){
            output.push_back(i+1);
        }
    }
    cout<<output.size();
    for (int i=0; i<output.size();i++){
        cout<<" "<<output[i]; 
    }
    return 0;
}