#include<iostream>
using namespace std;
class hero{
    private:
    int health;
    public:
    char level;
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health = h;
    }
};
int main()
{
    hero dray;
    dray.level='A';
    cout<<dray.level;
    dray.setHealth(50);
    cout<<dray.getHealth();
    return 0;
}