#include<iostream>
#include<string>
using namespace std;

class Neko{
private:
  string name;
public:
  Neko(string s);
  void souseki() const;
};

Neko::Neko(string s) : name(s){} // s->name

void Neko::souseki()const{
  cout << "I am " << name << "." << endl;
}

int main(){
  Neko mikeneko("no");
  mikeneko.souseki();
}
