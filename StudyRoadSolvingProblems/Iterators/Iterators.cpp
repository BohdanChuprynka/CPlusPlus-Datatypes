#include <iostream>
#include <vector>

#include <unordered_map>

using namespace std;

int main() {
    vector<int> values = { 1, 2 , 3, 4, 5 };

    for(int i = 0; i < values.size(); i++) {
        cout << values[i] << endl;
    }



    for(int value : values) { // for int value in values 
        cout << value << endl;
    }



    for(vector<int>::iterator it = values.begin();
     it != values.end(); it++) {
        cout << *it << endl;
     }


    using ScoreMap = unordered_map<string, int>;
    //using ScoreMapConstIt = unordered_map<string, int>::const_iterator; // we also can use this

    ScoreMap map;
    map["Cherno"] = 5;
    map["C++"] = 2;

    for(ScoreMap::const_iterator it = map.begin(); it != map.end(); it++) {

        auto& key = it->first;
        auto& value = it->second;

        cout << key << " = " << value << endl;
    }

    cout << " " << endl;

    for (auto kv : map) { // same as for iterator shown above
        auto& key = kv.first; // unfortunately we still need these auto&
        auto& value = kv.second; // instead of it we will put kv.

        cout << key << " = " << value << endl;
    }



    for (auto [key, value] : map) { // the smallest iterator from all. (and easiest) [Works only from C++17 or newer]
        cout << key << " = " << value << endl; 
    }


    cin.get();
}