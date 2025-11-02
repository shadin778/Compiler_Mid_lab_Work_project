#include <iostream>
using namespace std;

bool isNum(){

    string c ;
    cin>>c;


    for(int i=0;i<c.length() ;i++){
        if(c[i]>47 && c[i]<58)
            {
           continue;

    }
    else {
            return false;

}
    return true;


}
}

int LabTask1A(){

    if (isNum()) {
        cout << "It's a number" << endl;
    } else {
        cout << "It's not a number" << endl;
    }
    return 0;
}

