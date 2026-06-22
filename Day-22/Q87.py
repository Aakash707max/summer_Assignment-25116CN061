from collections import Counter

if __name__ == "__main__":
    text = input("Enter a string: ")
    freq = Counter(text)

    print("Character frequencies:")
    for char, count in freq.items():
        if char != '\n':
            print(f"'{char}': {count}")