#include <iostream>
using namespace std;
int main(){
    int **mat1, **mat2, nr = 3, nc = 3, r,c,mat[3][3];
    // cout << "Enter no. of rows: ";
    // cin >> nr;
    // cout << "Enter no. of colums: ";
    // cin >> nc;
    
    mat1 = new int *[nr];
    for(r = 0; r<nr ; r++)
        mat1[r] = new int[nc];
    mat2 = new int *[nr];
    for(r = 0; r<3 ; r++)
		mat2[r] = new int[nc];
    cout << endl << "Enter 1st matrix: "<<endl;
    for(r = 0;r < nr; r++){
        for(c = 0;c<nc;c++)
            cin >> mat1[r][c];
    }
    cout << endl << "Enter 2nd matrix" << endl;
    for(r = 0;r < nr; r++){
        for(c = 0;c<nc;c++)
            cin >> mat2[r][c];
    }
    cout<<"1st matrix: "<<endl;
    for(r = 0;r<nr;r++){
        for(c = 0;c<nc;c++)
            cout << mat1[r][c] << "\t";
        cout << endl;
    }
    cout<<"2nd matrix: "<<endl;
    for(r = 0;r<nr;r++){
        for(c = 0;c<nc;c++)
            cout << mat2[r][c] << "\t";
        cout << endl;
    }
    cout << endl;
    for(r = 0;r<nr;r++){
        for(c = 0;c<nc;c++){
            mat[r][c] = 0;
            for(int i = 0;i<3;i++)
                mat[r][c] += mat1[r][c]*mat2[r][c];
        }
    }
    cout <<"Matrix multiplication is out: "<<endl;
    for(r = 0;r<nr;r++){
        for(c = 0;c<nc;c++)
            cout << mat[r][c] << "\t";
        cout << endl;
    }
    delete mat1;
    delete mat2;
    return 0;
}
