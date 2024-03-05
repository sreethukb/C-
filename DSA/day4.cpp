//switch case
#include<iostream>
using namespace std;

bool isEven(int a) {
        if(a&1) 
                return 0;
        return 1;
}

int main() {
    //Question: given an amount, find the number of Rs 100, Rs 50, Rs 20 and Rs 1 notes needed.
    int amt;
    cout<<"Enter amount: ";
    cin>>amt;
    int note=1;
    int n_req;
    while(amt!=0) {
        switch(note) {
            case 1: n_req = amt/100;
                    cout<<n_req<<" 100 rupees notes required."<<endl;
                    amt = amt%100;
                    note++;
                    break;
            case 2: n_req = amt/50;
                    cout<<n_req<<" 50 rupees notes required."<<endl;
                    amt = amt%50;
                    note++;
                    break;
            case 3: n_req = amt/20;
                    cout<<n_req<<" 20 rupees notes required."<<endl;
                    amt = amt%20;
                    note++;
                    break;
            case 4: n_req = amt/1;
                    cout<<n_req<<" 1 rupee notes required."<<endl;
                    amt = amt%1;
                    break;
        }
    }

    //Driver for isEven function
    int num;
        cout<<"Enter number: ";
        cin>>num;
        if(isEven(num)) {
                cout<<"Number is even."<<endl;
        }
        else {
                cout<<"Number is odd."<<endl;
        }
}
