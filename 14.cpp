#include<iostream>
using namespace std;
class dress{
private:
    string code;
    int price;
    string material;
    void details(string code, int price, string material)
    {
        cout<<"code:"<<code<<endl<<"price"<<price<<endl<<"material"<<material;
    }
public :
    void display(string code, int price, string material)
{
    show=details(code,price,material);
    couut<<"Detail:"<<endl<<details(code,price,material);
}
};
int main()
{
    dress 1;
1.code= "madhunani";
1.price=2250;
1.material="silk";
1.details(code,price,material);
return 0;
}
