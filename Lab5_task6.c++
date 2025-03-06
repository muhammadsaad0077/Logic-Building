#include <iostream>
#include <string>
using namespace std;

struct Address{
    string city;
    int zip;
};

struct Company{
    string name;
    double revenue;
    Address addr;
};

int main() {
    Company comp[3]{{"Tech", 50000, {"Islamabad", 2230}}, {"ZKDEV", 30000, {"Lahore", 4321}}, {"MKCODE", 70000, {"Karachi", 5432}}};
  for(int i = 0; i < 3; i++){
    cout<<comp[i].name<<endl;
    cout<<comp[i].revenue<<endl;
    cout<<comp[i].addr.city<<endl;
    cout<<comp[i].addr.zip<<endl<<endl;
  }

    return 0;
}