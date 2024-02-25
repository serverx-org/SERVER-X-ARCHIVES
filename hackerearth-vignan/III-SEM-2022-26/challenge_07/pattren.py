
for _ in range(int(input())):
    # Print the top row
    n = int(input())
    print('*' * n)

    # Print the middle section
    for _ in range((n-1)//2):
        space = (n//2) - 2
        print('*' + ' ' * space + '*' + ' ' + '*' + ' ' * space + '*')

    # Print the bottom row
    print('*' * n)

    # print the middle part
    print('*' + ' ' * space + '*' + ' ' + '*' + ' ' * space + '*')

    # bottom part
    print('*' * n)

    # Print the middle section
    for _ in range((n-1)//2):
        space = (n//2) - 2
        print('*' + ' ' * space + '*' + ' ' + '*' + ' ' * space + '*')

    # Print the bottom row
    print('*' * n)

    # Print a blank line
    print()
