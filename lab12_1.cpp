#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int i= rand()%9;
    string A[]= {"A", "B+", "B", "C+", "C", "D+", "D", "F","W"};
    cout << "You will get "<< A[i] <<" in this 261102.";
}

