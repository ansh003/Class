#include<iostream>
using namespace std;
class cube{
    private:
    double height;
    public:
    float length;
    float width;
    cube(){ //constructor 
        cin >> length;
        cin >> width;
        cin >> height;
    }
    ~cube(){ //destructor
        cout << ("Destructor executed");
}
    void calculate()
    {
        double vol=(height)*(width)*(length);
        cout << vol;
    }
    void heightupdate() //setter it change the value of private variable
    {
        cout << "Enter new height" << endl;
        cin >> height;
    }
    double displayheight() //getter it gets the value of new updated height
    {
        return height;
    }
};
int main (){
    cube c1;
    c1.calculate();
    c1.heightupdate();
    cout << c1.displayheight();
    c1.calculate();
    return 0;
}