global jug1
global jug2


def apply_rules(rule_no, x, y):
    if rule_no == 1:
        # Filling Jug 1 Until it's full
        return jug1, y

    if rule_no == 2:
        # Filling Jug 2 Until it's full
        return x, jug2

    if rule_no == 3:
        # Transfer all water of Jug1 into Jug2
        if x + y > jug2:
            return 0, jug2
        else:
            return 0, x + y

    if rule_no == 4:
        # Transfer all water of Jug2 into Jug1
        if x + y > jug1:
            return jug1, 0

        else:
            return x + y, 0

    if rule_no == 5:
        # Transferring the contents of Jug1 to Jug2 until Jug2 is full
        while y < jug2:
            x -= 1
            y += 1

        return x, y

    if rule_no == 6:
        # Transferring the contents of Jug2 to Jug1 until Jug1 is full
        while x < jug1:
            y -= 1
            x += 1

        return x, y

    if rule_no == 7:
        # Emptying Jug1
        return 0, y

    if rule_no == 8:
        # Emptying Jug2
        return x, 0


def get_rules():
    print("RULE 1: Filling Jug 1 Until it's full")
    print("RULE 2: Filling Jug 2 Until it's full")
    print("RULE 3: Transfer all water of Jug1 into Jug2")
    print("RULE 4: Transfer all water of Jug2 into Jug1")
    print("RULE 5: Transferring the contents of Jug1 to Jug2 until Jug2 is full")
    print("RULE 6: Transferring the contents of Jug2 to Jug1 until Jug1 is full")
    print("RULE 7: Emptying Jug1")
    print("RULE 8: Emptying Jug2")


if __name__ == '__main__':
    jug1 = int(input("Enter the capacity of Jug-1: "))
    jug2 = int(input("Enter the capacity of Jug-2: "))
    goal_state = int(input("Enter the goal state of Jug1: "))
    x = y = 0
    print(f"The initial state of the Jugs are: {x}, {y}")

    while True:
        if x == goal_state:
            print("======Goal State Achieved======")
            print(f"{x} {y}")
            break

        else:
            command = input("Enter a Rule to apply: ")

            if command.lower() == "help":
                get_rules()

            elif command.lower() == "status":
                print(f"{x} {y}")

            elif not command.isdigit():
                print("Enter a valid rule no to apply")
                continue

            else:
                command = int(command)
                x, y = apply_rules(command, x, y)
