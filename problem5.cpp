//
// Created by Samandar Abdullayev on 16/09/24.
//
#include <iostream>
using namespace std;
int main() {
    float Uz,Us,Uni;
    cin>>Uz>>Us;
    Uni = Us * 30.48;
    bool t = Uz < Uni;
    cout<< t <<endl;
    return 0;
}
