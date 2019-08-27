#include <iostream>

using namespace std;

int main()
{
    int duplicateArray[100], ArraySize;

    cout << "Enter the size of array:";
    cin >> ArraySize;
    cout << "Enter " << ArraySize << " array element:";

    for(int i = 0; i < ArraySize-1; i++){
        cin >>  duplicateArray[i];
    }

    for(int i = 0; i < ArraySize-1; i++){
        for(int j = i+1; j < ArraySize-1; j++){
            if(duplicateArray[i] == duplicateArray[j]){
                cout << duplicateArray[j] << " ";
            }
        }
    }

    cout << "has duplicate value." ;

    return 0;
}
