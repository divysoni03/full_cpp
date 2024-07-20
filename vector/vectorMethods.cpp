#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};   //initializing vector
    int num;

    // 1. at()
    // cout << "1. at()" << endl;
    // cin >> num;
    // cout << v.at(num) << endl;


    // for(int i = 0; i < v.size(); i++){
    //     cout << v.at(i) << " ";
    //     // arr[i] -> v.at(i)
    // }


    // 2. back()
    // cout << "2. back()" << endl;
    // cout << v.back() << endl;
    
    
    // 3. front()
    // cout << "3. front()" << endl;
    // cout << v.front() << endl;

    // 4. swap()
    // cout << "4. swap()" << endl;
    // vector<int> v1{1, 2, 3, 4, 5};
    // vector<int> v2{6, 7, 8, 9, 10};
    // v1.swap(v2);
    // for(int i = 0; i < v1.size(); i++){
    //     cout << v1.at(i) << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < v2.size(); i++){
    //     cout << v2.at(i) << " ";
    // }

    // 5. push_back()
    // cout << "5. push_back()" << endl;
    // v.push_back(11);

    // 6. pop_back()
    // cout << "6. pop_back()" << endl;
    // v.pop_back();
    // v.pop_back();

    // 7. empty()
    // cout << "7. empty()" << endl;
    // vector<int> v1;
    // cout << v.empty() << endl;
    // cout << v1.empty() << endl;

    // vector<string> v2{"abcd", "efgh", "ijkl", "mnop", "qrst", "uvwx", "yz"};
    // for(int i = 0; i < v2.size(); i++){
    //     cout << v2.at(i) << " ";
    // }
    // cout << endl;

    // 8. insert()
    // cout << "8. insert()" << endl;
    // vector<string> v2{"abcd", "efgh", "ijkl", "mnop", "qrst", "uvwx", "yz"};
    // v2.insert(v2.begin() + 3, "harit");
    // for(int i = 0; i < v2.size(); i++){
    //     cout << v2.at(i) << " ";
    // }

    // 9. erase()
    // cout << "9. erase()" << endl;
    // v.erase(v.begin() + 3);

    // 10. resize()
    // cout << "10. resize()" << endl;
    // v.resize(5);

    // 11. clear()
    // cout << "11. clear()" << endl;
    // v.clear();

    // 12. capacity()
    // cout << "12. capacity()" << endl;
    // cout << v.capacity() << endl;
    
    // 13. assign()
    // cout << "13. assign()" << endl;
    // vector<int> v1{1, 2, 3, 4, 5};
    // vector<int> v2;
    // v2.assign(v1.begin()+1, v1.end()-1);
    // for(int i = 0; i < v2.size(); i++){
    //     cout << v2.at(i) << " ";
    // }

    // 14. rend() & rbegin()
    // cout << "14. rend()" << endl;
    // for(auto it = v.rbegin(); it != v.rend(); it++){
    //     cout << *it << " ";
    // }

    // 15. emplace()
    // cout << "15. emplace()" << endl;
    // v.emplace(v.begin() + 3, 11);

    // 16. emplace_back()
    // cout << "16. emplace_back()" << endl;
    // v.emplace_back(11);

    // 17. shrink_to_fit()
    // cout << "17. shrink_to_fit()" << endl;
    // v.shrink_to_fit();

    // 18. reserve()
    // cout << "18. reserve()" << endl;
    // cout << v.capacity() << endl;
    // v.reserve(v.size() + 20);
    // cout << v.capacity() << endl;
    // v.shrink_to_fit();
    // cout << v.capacity() << endl;

    // 19. max_size()
    // cout << "19. max_size()" << endl;
    // cout << v.max_size() << endl;
    // v.push_back(2305843009213693951);


    //printing the vector
    cout << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}