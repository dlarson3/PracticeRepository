#include <iostream>
using namespace std;
void swap(double v[], int a, int b){
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}

void quickSort(double v[], int start, int end){
    if(start < end) {
        //split
        int key = v[start];
        swap(v, start, end);
        int edge = start;
        for (int i = start; i <= end; i++) {
            if (v[i] <= key) {
                swap(v, edge++, i);
            }
        }
        //sort
        quickSort(v, start, edge - 1);
        quickSort(v, edge, end);
        //merge (nothing to do)
    }
}
void print(double v[], int numItems){
    for (int i = 0; i < numItems; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    double x[] = {20,50,40,80,60,30,70,10};
    print(x,8);
    quickSort(x,0,7);
    print(x,8);
    return 0;
}
