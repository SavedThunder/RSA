#include <iostream>
#include <string>
#include <time.h>

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

unsigned long long int millerRabine(int num, int k){
    srand (time(NULL));
    int n = num - 1;
    a = rand() % (n - 2) + 2;
}

int encryptRSA(string message, int pubkey, int privkeyW){
    int encrypted = 0;
    return encrypted;
}

string decryptRSA(int e_message, int pubkey, int privkey){
    string d_message = "";
    return d_message;
}

int main{
    unsigned long long int pub_key = 0;
    string user_message = "";
    unsigned long long int e_message = 0;
    cout << "Please input a message" << endl;
    cin >> message;
    bool prime_flag = false;
    while(!prime_flag){
        cout << "Please enter a public key" << endl;
        cin >> pubkey;
        primeflag = isPrime(pubkey);
    }


}
