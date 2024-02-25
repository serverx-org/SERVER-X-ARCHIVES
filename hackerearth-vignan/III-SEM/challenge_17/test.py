def sort_and_reverse(input_str):
    return " ".join("".join(sorted(word)) for word in input_str.split()[::-1])

n = int(input())
input_str = input()
c = input()
result = sort_and_reverse(input_str)
print(result)
