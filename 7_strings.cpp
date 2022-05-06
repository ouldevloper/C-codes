#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;
int main(void){
    string val1="hell  Mr.";
    string val2("abdellah");
    string osrc = "abdellah:10,john:20,alex:34,anton:35,karim:9";
    string osrc1 = "10 13 32 433 234 2342 234";
    istringstream iss(osrc);
    istringstream iss1(osrc1);
    cout << val1+val2<<endl; //concatination 
    cout << "val1 lenght is : "<<val1.size()<<endl;
    cout << "val1 lenght is : "<<val1.length()<<endl;
    cout << "comparison strings: "<<val1.compare(val2)<<endl; //compare strings
    cout << "The sub string " << val1.substr(2,5)<<endl; //substring
    cout << val1<<"=="<<val2<<" => "<< (val1==val2) <<  endl;
    cout <<"Mr exists at index: "<<val1.find("Mr")<<endl;
    cout << "replace function : "<< val1.replace(0,5,"Hello")<<endl;
    //parsing strings (extruct integers)
    int k=0;
    while(iss1 >> k){
        cout << "val: "<<k<<endl;
        if(iss1.peek()==' ') iss1.ignore();
    }
    //parseing string
    string tmp="";
    while(getline(iss,tmp,',')){
        string secondtmp;
        istringstream tmpiss(tmp);
        while(getline(tmpiss,secondtmp,':')){
            cout << secondtmp<<"\t";
        }
        cout <<endl;
    }
    //concstenat 2 differnrt objects
    ostringstream os;
    int age=15;
    string name ="abdellah";
    os << name <<":"<<age;
    cout << "concat 2 diff obj : " << os.str()<<endl;
    return 0;
}