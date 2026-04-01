#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter degree: ";
    cin>>n;

    int A[20], B[20], sum[20];

    cout<<"Enter first polynomial coefficients:\n";
    for(int i=0;i<=n;i++){
        cin>>A[i];
    }

    cout<<"Enter second polynomial coefficients:\n";
    for(int i=0;i<=n;i++){
        cin>>B[i];
    }

    for(int i=0;i<=n;i++){
        sum[i] = A[i] + B[i];
    }

    cout<<"Result (Addition):\n";
    for(int i=0;i<=n;i++){
        cout<<sum[i]<<"x^"<<i;
        if(i<n) cout<<" + ";
    }
}









2

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter degree: ";
    cin>>n;

    int A[20], B[20], diff[20];

    cout<<"Enter first polynomial coefficients:\n";
    for(int i=0;i<=n;i++){
        cin>>A[i];
    }

    cout<<"Enter second polynomial coefficients:\n";
    for(int i=0;i<=n;i++){
        cin>>B[i];
    }

    for(int i=0;i<=n;i++){
        diff[i] = A[i] - B[i];
    }

    cout<<"Result (Subtraction):\n";
    for(int i=0;i<=n;i++){
        cout<<diff[i]<<"x^"<<i;
        if(i<n) cout<<" + ";
    }
}

  
