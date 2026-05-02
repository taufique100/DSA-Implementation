#include <iostream>
#include <unordered_map>
#include <string>
#include<vector>

using namespace std;

vector<int> twoSum(int *arr, int target, int size){
    unordered_map<int, int> unmap;

    int component  =0;

    for(int i = 0; i < size; i++){
        component  =  target - arr[i];
        if(unmap.find(component) != unmap.end()){
            return {unmap[arr[i]], i};
        }
        unmap[arr[i]] = i;
    }
}

  vector<int> twoSum(vector<int>& nums, int target) {
    // 324
        unordered_map<int, int>indexs;
        
        for(int i = 0; i<nums.size(); i++){
           int component = target - nums[i];

            if(indexs.find(component) != indexs.end()){
                cout<<"component "<<component<<" "<< nums[i]<<" "<<i<<endl;
                return {indexs[component], i};
            }
            cout<<"Result2::"<<i<<" "<<component<<" arr[] "<<nums[i]<<endl;
            indexs[nums[i]] = i;
        }

        return {};
    }

int main() {
    // 1. Declaration and Initialization
    unordered_map<string, int> inventory = {{"apple", 5}, {"banana", 2}};
    
    auto it = inventory.find("apple");
    // 2. Inserting/Updating
    inventory["orange"] = 10; 
    
    // 3. Accessing
    cout << "Apples: " << inventory["apple"] << endl;
    cout<< it->first<<endl;


    // 4. Searching
    if (inventory.find("banana") != inventory.end()) {
        cout << "Banana is in stock." << endl;
    }

    for(auto it = inventory.begin(); it != inventory.end(); ++it){
        cout<<it->first<<"---"<<it->second<<endl;
    }
    int arr[4] = {2,7,11,15};
    vector<int> arr2 = {3,2,4};

    vector<int> result = twoSum(arr, 9, 4);
    vector<int> result2 = twoSum(arr2, 6);


    cout<<"{"<<result[0]<<","<<result[1]<<"}"<<endl;
    cout<<"{"<<result2[0]<<","<<result2[1]<<"}"<<endl;
    return 0;
}
