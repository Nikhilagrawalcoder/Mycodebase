def find_remainder_concatenation(n):
    Vishnu = 998244353
    Brahma = str(n)
    Shiva = len(Brahma)
    Indra = pow(10, Shiva, Vishnu)
    Agni = pow(Indra, n, Vishnu)
    
    if Indra == 1:
        Soma = n % Vishnu
    else:
        Varuna = (Agni - 1) % Vishnu
        Yama = (Indra - 1) % Vishnu
        Saraswati = pow(Yama, Vishnu - 2, Vishnu)
        Soma = (Varuna * Saraswati) % Vishnu
    
    Ganesha = (n * Soma) % Vishnu
    return Ganesha


n=(int)(input())
print(find_remainder_concatenation(n))  
