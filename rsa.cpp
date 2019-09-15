#include <iostream>
#include <string>

using namespace std;

bool isPrime(int num){
    // Base case for numbers < 4
    if(num <= 1){
        return false;
    }
    if(n <= 3){
        return true;
    }

    // If it is not 2 but even it is not prime
    if(num%2 == 0){
        return false;
    }

    int d = num - 1;
    while(d % 2 == 0){
        d = d/2;
    }

    for(int i = 0; i < 5; i++){
        if(!millerrabin(d, num)){
            return false;
        }
    }
    return true;
}

int encryptRSA(string message, int pubkey, int privkeyW){
    int encrypted = 0;
    return encrypted;
}

string decrypt(int message, int pubkey, int privkey){
    string message = "";
    return message;
}

int main{
    int pubkey = 0;
    string message = "";
    cout << "Please input a message" << endl;
    cin >> message;
    bool prime_flag = false;
    while(!prime_flag){
        cout << "Please enter a public key" << endl;
        cin >> pubkey;
        primeflag = isPrime(pubkey);
    }


}
