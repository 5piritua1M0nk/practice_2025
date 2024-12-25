#include<iostream>
using namespace std;
class add
{
    float area,r,pi=3.14;
    public:
    void accept()
    {
        cout<<"enter the radius:"<<endl;
        cin>>r;
    }
    void display()
    {
       area=pi*r*r;
       cout<<"area of circle:"<<area<<endl;
    }
};
int main()
{
    add a;
    a.accept();
    a.display();
    return 0;
}