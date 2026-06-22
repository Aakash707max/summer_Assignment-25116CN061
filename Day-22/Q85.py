def is_palindrome(s: str) -> bool:
    #  only alphanumeric characters and lowercase them
    cleaned = ''.join(ch.lower() for ch in s if ch.isalnum())
    return cleaned == cleaned[::-1]

if __name__ == "__main__":
    s = input("Enter a string: ").strip()
    if is_palindrome(s):
        print("The string is a palindrome.")
    else:
        print("The string is NOT a palindrome.")