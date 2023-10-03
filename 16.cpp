#include<iostream>
using namespace std;
class cube{
    public:
    double height = 1.0;
    double width = 1.0;
    double length = 1.0;
    void volume()
    {
        cin >> length;
        cin >> width;
        cin >> height;
    }
    void calculate()
    {
        double vol=(height)*(width)*(length);
        cout << vol;
    }
};
int main (){
    cube c1;
    c1.volume();
    c1.calculate();
    return 0;
}