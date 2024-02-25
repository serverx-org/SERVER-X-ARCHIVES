def precedence(op):
    return {'+': 1, '-': 1, '*': 2, '/': 2}.get(op, 0)

def infix_to_prefix(infix):
    infix = infix[::-1].translate(str.maketrans('()', ')('))
    operators, prefix = [], ""

    for c in infix:
        if c.isalnum():
            prefix += c
        elif c == '(':
            operators.append(c)
        elif c == ')':
            prefix += operators.pop() * (operators[-1] != '(')
            operators.pop()  # Remove '('
        elif c in {'+', '-', '*', '/'}:
            while operators and precedence(operators[-1]) >= precedence(c):
                prefix += operators.pop()
            operators.append(c)

    return prefix + ''.join(operators[::-1])

if __name__ == "__main__":
    infix_expression = input("")
    print(infix_to_prefix(infix_expression)[::-1])
