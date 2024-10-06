# Compound Interest Calculation
def calculate_compound_interest(principal, time, rate):
    compound_interest = principal * (1 + rate/100)**time - principal
    return compound_interest

# Accepting input from the user
principal = float(input("Enter the principal amount: "))
time = float(input("Enter the time (in years): "))
rate = float(input("Enter the rate of interest: "))

# Calculating Compound Interest
compound_interest = calculate_compound_interest(principal, time, rate)

# Displaying the result
print("The Compound Interest is:", compound_interest)


#victor njeri..