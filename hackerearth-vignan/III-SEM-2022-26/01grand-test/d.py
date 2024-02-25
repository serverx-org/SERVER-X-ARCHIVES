def is_valid_sudoku(board):
    # Check rows and columns
    for i in range(9):
        if not is_valid_group(board[i]) or not is_valid_group([board[j][i] for j in range(9)]):
            return False

    # Check 3x3 subgrids
    for i in range(0, 9, 3):
        for j in range(0, 9, 3):
            if not is_valid_group([board[x][y] for x in range(i, i + 3) for y in range(j, j + 3)]):
                return False

    return True

def is_valid_group(group):
    seen = set()
    for num in group:
        if num != '.':
            if num in seen:
                return False
            seen.add(num)
    return True

# Input Sudoku matrix from the user
# print("Enter the Sudoku solution matrix:")
solution = []
for _ in range(9):
    row = int(input().split())
    solution.append(row)

# Check the validity of the Sudoku solution
print(is_valid_sudoku(solution))

