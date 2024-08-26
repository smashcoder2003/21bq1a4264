def infix_to_postfix(exp):
    post_fix_expresssion = []
    operator = []
    precedence = {'(': 0, '+': 1, '-': 1, '*': 2, '/': 2, '^': 3}
    for ch in exp:
        if ch == '(':
            operator.append(ch)
        elif ch == ')':
            while operator[-1] != '(':
                ele = operator.pop()
                post_fix_expresssion.append(ele)
            operator.pop()
        elif ch == '+' or ch == '-' or ch == '*' or ch == '^' or ch == '/':
            if len(operator) > 0:
                while precedence[operator[-1]] >= precedence[ch]:
                    ele = operator.pop()
                    post_fix_expresssion.append(ele)
                    if len(operator) == 0:
                        break
            operator.append(ch)
        else:
            post_fix_expresssion.append(ch)
    while len(operator) != 0:
        post_fix_expresssion.append(operator.pop())
    return post_fix_expresssion


if __name__ == "__main__":
    exp = input("Enter an infix expression: ")
    infix_to_postfix(exp)