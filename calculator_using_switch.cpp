#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    cin >> a >> op >> b;
    
    switch(op){
        case '+': cout << a << " " << op << " " << b << " " << "=" << " " << a+b << endl;
                    break;
        case '-': cout << a << " " << op << " " << b << " " << "=" << " " << a-b << endl;
                    break;
        case '*': cout << a << " " << op << " " << b << " " << "=" << " " << a*b << endl;
                    break;
        case '/': cout << a << " " << op << " " << b << " " << "=" << " " << a/b << endl;
                    break;
        case '%': cout << a << " " << op << " " << b << " " << "=" << " " << a%b << endl;
                    break;
    }

    return 0;
}