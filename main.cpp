#include <iostream>

using namespace std;

int calcSum(int x, int y)
{

    cout << x+y << endl;
}
float calcDiv(int x, int y)
{
    float result = x/y;
    if (y==0){
        cout << "Error" <<endl;
    }else{
        cout << result <<endl;
    }
}
int retSum(int x,int y)
{

   int sum = x+y;
    return sum;
}
float retDiv(int x,int y)
{
    float div = x/y;
    if (y==0){
        cout << "Error" <<endl;
        return 0;
    }else{
        return div;
    }
}

int main()
{
    int a,b;
    cout << "Anna eka luku:" << endl;
    cin >> a;
    cout << "Anna toinen luku:" << endl;
    cin >> b;
    calcSum(a,b);
    calcDiv(a,b);
    retSum(a,b);
    retDiv(a,b);

    return 0;
}
