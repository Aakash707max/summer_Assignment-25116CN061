def count_words(sentence: str) -> int:
    # Split by whitespace and filter out empty strings
    words = [word for word in sentence.split() if word]
    return len(words)

if __name__ == "__main__":
    sentence = input("Enter a sentence: ").strip()
    print("Word count:", count_words(sentence))