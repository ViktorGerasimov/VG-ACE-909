#include <iostream>
#include <vector>

using namespace std;


vector<int> Shell(vector<int> Array) {
    int j;
    int step = Array.size() / 2;
    while (step > 0) {
        for (int i = 0; i < (Array.size() - step); i++) {
            j = i;
            while ((j >= 0) && (Array[j] > Array[j + step])) {
                int tmp = Array[j];
                Array[j] = Array[j + step];
                Array[j + step] = tmp;
                j -= step;
            }
        }
        step = step / 2;
    }
    return Array;
}



int main(){
    vector<int> Array = {9, 8, 7, 6, 5, 4, 3, 2, 1, 15, 17, 16};
    Array = Shell(Array);
    for (int i = 0; i < Array.size(); i++){
        cout << Array[i] << " ";
    }
    return 0;
}