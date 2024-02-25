def convert_input(input_str):
    result = ''
    stack = []

    for char in input_str:
        if char.isdigit():
            result += char
        elif char == '(':
            stack.append(result)
            result = ''
        elif char == ')':
            temp = result
            result = stack.pop()
            result += temp
        elif char == '[':
            stack.append(result)
            result = ''
        elif char == ']':
            temp = result
            result = stack.pop()
            result += temp

    return result

input_str = "123(12[34]2)(23)"
output_str = convert_input(input_str)
print(output_str)
