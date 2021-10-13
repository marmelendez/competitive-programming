#include <iostream>

using namespace std;


class Thingy {
    public: 
    virtual void StepA()
    {
        cout  << "Zing" << endl;
    }

    void Action()
    {
        StepA();
        cout << "A Thingy in Action." << endl;
    }
};

class Widget : public Thingy
{
    public: 
    void StepA()
    {
        cout << "Wiggy" << endl;
    }
};

int main() {
    Thingy thingy = Thingy();
    Widget widget = Widget();

    thingy.Action();
    widget.Action();

    // thingy->Action();
    // widget->Action();
}