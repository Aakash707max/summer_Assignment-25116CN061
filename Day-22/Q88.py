def remove_spaces(s: str) -> str:
    return ''.join(s.split())

if __name__ == "__main__":
    s = input("Enter a string: ")
    print("String without spaces:", remove_spaces(s))