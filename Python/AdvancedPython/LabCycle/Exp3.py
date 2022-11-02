class Employee:
    def __init__(self, id, name, basic, years_of_experience):
        self.id = id
        self.name = name
        self.basic = basic
        self.YOE = years_of_experience
        if self.YOE > 2:
            self.bonus = 0.1 * basic
        else:
            self.bonus = 0
        self.gross_salary = self.computegrosssalary
        self.net_salary = self.computenetsalary

    @property
    def computegrosssalary(self):
        hra = 0.2 * self.basic
        da = 0.5 * self.basic
        return self.basic + hra + da + self.bonus


    @property
    def computenetsalary(self):
        pf = 0.1 * self.basic
        if self.gross_salary > 300000:
            tax = 0.1 * self.gross_salary
        elif self.gross_salary > 500000:
            tax = 0.2 * self.gross_salary
        elif self.gross_salary > 750000:
            tax = 0.3 * self.gross_salary
        else:
            tax = 0
        return self.gross_salary - (pf + tax)


if __name__ == "__main__":
    no_of_employees = int(input("Enter the no of employees in your company: "))
    employees = []
    for i in range(1, no_of_employees+1):
        id = input(f"Enter id of Employee{i}: ")
        name = input(f"Enter name of Employee{i}: ")
        basic = int(input(f"Enter the basic salary of Employee{i}: "))
        years_of_experience = int(input(f"Enter the years of experience of Employee{i}: "))
        employees.append(Employee(id=id, name=name, basic=basic, years_of_experience=years_of_experience))

    average_salary = 0
    print("The net salaries of all the employees and their names are: ")
    for i in employees:
        if i.net_salary > employee_with_highest_salary.net_salary:
            employee_with_highest_salary = i
        if i.net_salary < employee_with_highest_salary.net_salary:
            employee_with_lowest_salary = i
        print(f"{i.name}: {i.net_salary}", end="\n")
        average_salary += i.net_salary
    print(f"The employee with highest salary is: {employee_with_highest_salary.name} --> {employee_with_highest_salary.net_salary} ")
    print(f"The average salary of all the employees is: {average_salary//len(employees)}")
