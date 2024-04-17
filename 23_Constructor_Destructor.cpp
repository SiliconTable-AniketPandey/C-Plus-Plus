# include <iostream>
using namespace std;

class Box{
    private:
        int length;
        int breadth;
        int height;

    public:
        Box(int l, int b, int h)
        {
            length = l;
            breadth = b;
            height = h;
        }

        ~Box(){
            cout<<"Box is deleted"<<endl;
        }

        double volume() const { return length*breadth*height; }

};

int main()
{
    Box b1(10, 20, 30);
    cout<<b1.volume()<<endl;
    return 0;
}