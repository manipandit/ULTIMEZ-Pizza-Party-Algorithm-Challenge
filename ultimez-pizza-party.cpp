#include <iostream>
using namespace std;

int main() {
    int individuals;
    cout << "Enter total no of individuals: ";
    cin >> individuals;
    
    int largePizza = individuals / 8;
    int mediumPizza = (individuals % 8) / 6;
    int regularPizza = ((individuals % 8) % 6) / 4;
    int smallPizza = (((individuals % 8) % 6) % 4) / 1;
    
    cout << "If there are " << individuals << " individuals" <<endl;
    cout << "we will have " << largePizza << " Large pizza"<<endl;
    cout << "we will have " << mediumPizza << " Medium pizza"<<endl;
    cout << "we will have " << regularPizza << " Regular pizza"<<endl;
    cout << "we will have " << smallPizza << " Small pizza"<<endl;
    
    
    return 0;
}
