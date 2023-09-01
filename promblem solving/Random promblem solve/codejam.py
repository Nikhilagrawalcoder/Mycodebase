def check_collision(words, encodings):
    seen_encodings = set()
    for encoding in encodings:
        if encoding in seen_encodings:
            return "YES"
        seen_encodings.add(encoding)
    return "NO"

T = int(input())
for t in range(1, T+1):
    mapping = {char: digit for digit, char in enumerate(input().split(), start=1)}
    N = int(input())
    words = input().strip().split()
    encodings = ["".join(str(mapping[letter]) for letter in word) for word in words]
    result = check_collision(words, encodings)
    print(f"Case #{t}: {result}")