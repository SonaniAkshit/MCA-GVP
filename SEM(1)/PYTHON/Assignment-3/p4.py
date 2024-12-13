class BankAccount:
    def __init__(self,account_number,balance):
        self.__account_number= account_number
        self.__balance = balance

    def deposite(self,amount):
        self.__balance += amount

    def withdraw(self,amount):
        if(self.__balance < amount):
            return "Insufficient balance"
        else:
            self.__balance-=amount

    def get_balance(self):
        return self.__balance
    

acc = BankAccount(240160510049,0)

while 1:
    print("1. Deposite ")
    print("2. Withdraw ")
    print("3. Check Balance")
    print("4. Exit ")
    choice = input("Enter Choice : ")
    
    if choice == "1":
        amount = int(input("Enter Amount : "))
        acc.deposite(amount)
        print("Availabe Balance : ",acc.get_balance())
    elif choice == "2":
        amount = int(input("Enter Amount : "))
        msg = acc.withdraw(amount)
        if(msg):
            print(msg)
        else:
            print("Availabe Balance : ",acc.get_balance())
    elif choice == "3":
        print("Availabe Balance : ",acc.get_balance())
    elif choice == "4":
        break
    else:
        print("Invalid Choice")


