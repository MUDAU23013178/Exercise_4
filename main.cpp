#include <iostream>

using namespace std;

int main()
{
    int n,x,y;
    char choice;
    do{cout << "Menu" <<endl;
    cout<<""<<endl;
    cout << "1.Add" << endl;
    cout << "2.Subtract" << endl;
    cout << "3.Multiply" << endl;
    cout << "4.Divide" << endl;
    cout<<"Enter your choice(1-5): ";
    cin>>n;
    cout<<"Enter integer number: ";
    cin>>x;
    cout<<"Enter integer number: ";
    cin>>y;
    if(n==1)
        cout<<x+y<<endl;
    else if(n==2)
        cout<<x-y<<endl;
    else if(n==3)
        cout<<x*y;
    else if(n==4){
        if(y==0)
            cout<<"The second integer is zero, divide by zero"<<endl;
            else
                cout<<x/y<<endl;
                }
    cout<<"Press Y or y to continue: "<<endl;
    cin>>choice;
    }
    while(choice=='y' || choice=='Y');
    return 0;
}
