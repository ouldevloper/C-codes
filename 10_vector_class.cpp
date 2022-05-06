#include <iostream>
#include <vector>
using namespace std;
int main(void){
    vector<int> *v = new vector<int>();
    vector<int>::iterator *it;
    v->push_back(1);
    v->push_back(1);
    v->push_back(1);
    v->push_back(1);
    v->push_back(1);
    for(int i = 0; i< v->size();i++) 
        cout << v[i]<<endl;
    
    cout << endl;
    return 0;
}
