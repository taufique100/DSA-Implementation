#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> *arr){
    for(int i = 0; i<arr->size(); i++){
        cout<<(*arr)[i]<<" ";
        // cout<<arr->at(i)<<" ";
    }

    cout<<endl;
}

int main(){

    vector<int>numbers = {1,2,3};

    print(&numbers);
    cout<<"-------------"<<endl;
    
    numbers.push_back(4);
    numbers.push_back(5);

    print(&numbers);
    cout<<"-------------"<<endl;



    cout<<numbers.front()<<endl;
    cout<<numbers.size()<<endl;
    cout<<numbers.capacity()<<endl;
    

    return 0;
}