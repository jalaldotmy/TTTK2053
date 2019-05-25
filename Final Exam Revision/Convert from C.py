



num_emp = int(input("Enter number of employees: "))

total_pay = 0 
count_emp = 0
pay = 0

while count_emp < num_emp:
    hours = int(input("Enter hours: "))
    rate = int(input("Enter rate:"))

    pay = hours * rate

    print("Pay is ${0:0,.2f}".format(pay))

    total_pay += pay
    count_emp += 1

print("All employees processed")
print("Total payroll is ${0:0,.2f}".format(total_pay))
