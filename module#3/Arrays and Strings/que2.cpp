// Matrix Addition 
// o Write a C++ program to perform matrix addition on two 2x2 matrices. 

#include<iostream>
using namespace std;

int main(){
    int m1[2][2]={1,5,8,6,};
    int m2[2][2]={8,4,1,6};
    int add[2][2];
    int i,j;

    cout<<"1st matrix is :"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<m1[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"2nd metrix is :"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<m2[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Addition of 2x2 matrix is :"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            add[i][j]=m1[i][j]+m2[i][j];
            cout<<add[i][j]<<"\t";
        }
        cout<<"\n";
    }
}