def min_operations_to_equal(x, y, k, m):
    def dfs(current_x, steps):
        if current_x == y:
            return steps

        if current_x < 1 or current_x > m or current_x in visited:
            return float('inf')

        visited.add(current_x)

        add_op = dfs(current_x + k, steps + 1)
        subtract_op = dfs(current_x - k, steps + 1)
        multiply_op = dfs(current_x * k, steps + 1)
        divide_op = dfs(current_x // k, steps + 1)
        modulo_op = dfs(current_x % k, steps + 1)

        min_steps = min(add_op, subtract_op, multiply_op, divide_op, modulo_op)

        visited.remove(current_x)

        return min_steps

    visited = set()
    result = dfs(x, 0)

    return result if result != float('inf') else -1

# Example usage:
x = 5
y = 14
k = 2
M = 10
result = min_operations_to_equal(x, y, k, M)
print(result)  # Output should be 2
