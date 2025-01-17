// Array Sum and Average 
// o Write a C++ program that accepts an array of integers, calculates the sum and 
// average, and displays the results. 

#include<iostream>
using namespace std;

int main(){
    int n,result;
    
    cout<<"Enter number of elements for array:";
    cin>>n;

    if(n<=0){
        cout<<"INVALID size"<<endl;
        return 1;
    }

    int arr[n];
    int sum=0;

    cout<<"Enter "<<n<<" integers: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    float average=static_cast<double>(sum)/n;

    cout<<"SUM = "<<sum<<endl;
    cout<<"AVERAGE = "<<average<<endl;

    return 0;

}