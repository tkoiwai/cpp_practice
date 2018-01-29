#include<iostream>
#include<string>

using namespace std;

class Neko{
private:
  string name;
public:
  Neko(string s){
    name = s;
  }
  void souseki(){
    cout << "吾輩は猫である。名前は" << name << "。" << endl;
  }
};

int main(){
  Neko mikeneko("まだない");
  mikeneko.souseki();
}
