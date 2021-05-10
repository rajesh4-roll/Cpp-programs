/*
    File: matrices.cpp
    -----------------------------------------
    This program promts user of no of matrices
    to be multiplied by using dynamic memory
    concept in C++.
*/
#include <iostream>
#include <conio.h>
using namespace std;//
int main(){
    cout << "Enter 1st matrix: " << endl;
    int mat1[3][3],mat2[3][3], add [3][3];
    for(int i = 0;i < 3; i++){
        for(int j = 0;j < 3; j++)
            cin >> mat1[i][j];
    }
    cout << "Enter 2nd matrix" << endl;
    for(int i = 0;i < 3; i++){
            for(int j = 0;j < 3; j++)
                cin >> mat2[i][j];
    }
    for(int i = 0;i < 3; i++){
            for(int j = 0;j < 3; j++){
                add[i][j] = 0;
                for(int a = 0;a<3;a++)
                    add[i][j] += mat1[i][j] * mat2[i][j];
            }
    }
    cout << "addtion of matrices"<<endl;
    for(int i = 0;i < 3; i++){
            for(int j = 0;j < 3; j++)
                cout << add[i][j] << "\t";
            cout << endl;
    }
    getch();
    return 0;
}
