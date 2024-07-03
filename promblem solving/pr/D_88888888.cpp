#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;
const ll Vishnu = 998244353;

// Function to compute (base^exp) % mod
ll mod_pow(ll base, ll exp, ll mod) {
    ll result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

ll find_remainder_concatenation(ll n) {
    std::string Brahma = std::to_string(n);
    ll Shiva = Brahma.length();
    ll Indra = mod_pow(10, Shiva, Vishnu);
    ll Agni = mod_pow(Indra, n, Vishnu);

    ll Soma;
    if (Indra == 1) {
        Soma = n % Vishnu;
    } else {
        ll Varuna = (Agni - 1 + Vishnu) % Vishnu;
        ll Yama = (Indra - 1 + Vishnu) % Vishnu;
        ll Saraswati = mod_pow(Yama, Vishnu - 2, Vishnu);
        Soma = (Varuna * Saraswati) % Vishnu;
    }

    ll Ganesha = (n * Soma) % Vishnu;
    return Ganesha;
}

int main() {
    ll n;
    cin>>n;
    cout << find_remainder_concatenation(n) << endl; 
    return 0;
}
