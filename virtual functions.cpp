#include <iostream>
using namespace std;
class charac{
public:
    virtual void attack(){
        cout << "charac class " << endl;}};
class Ninja: public charac{
public:
    void attack()
    {
        cout << "Chop Chop! " << endl;

    }
    };
class Mon: public charac{
public:
    void attack()
    {
        cout << "Ahhhh! " << endl;

    }};
int main(){
    Ninja n;
    Mon m;
    charac *char1 = &n;
    charac *char2 = &m;
    char1->attack();
    char2->attack();
}
