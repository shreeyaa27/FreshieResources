#include<simplecpp>


struct Account {
    int balance;
    int transactions[100];      // the transaction amount
    char transactionType[100];  // c for credit, d for debit
};




int Deposit(Account A,int ith_transaction) {
    // Write the function to
    // credit the ith_transaction made into the account
    // and update the balance
    // return the balance back to the function, performTransactions
    int currentBalance = A.balance;
    currentBalance += A.transactions[ith_transaction];
    return currentBalance;
}




int Withdraw(Account A,int ith_transaction){
    // Write the function to
    // debit the ith_transaction made into the account
    // and update the balance
    // return the balance back to the function, performTransactions
    // If the amount being withdrawn is greater than the balance
    // then do not debit and print cannot withdraw


    int currentBalance = A.balance;
    if(A.transactions[ith_transaction]<=A.balance){
        currentBalance -= A.transactions[ith_transaction];
    }
    else {
        cout<<"cannot withdraw" << endl;
    }
    return currentBalance;
}




int performTransactions(Account A,int N){
    // For each of the N transactions made, perform the following
    // deposit or withdraw accordingly, and update the balance
    // If at any point i.e. after the every debit,
    // the balance goes below Rs. 1000, then levy penalty of Rs. 50
    // After each credit/debit transaction, print the balance
    // In the end, return the final balance to the main_program
   
    for(int i=0;i<N;i++){
        if(A.transactionType[i] == 'c'){
            A.balance = Deposit(A,i);
        }
        else{
            A.balance = Withdraw(A,i);
        }
        cout << A.balance << endl;
    }
    return A.balance;
}




main_program
{
    int N; // The number of transactions
    Account A1;
    cin >> N >> A1.balance;




    for(int i = 0; i < N; i++){
        cin >> A1.transactionType[i];  // c for credit, d for debit
        cin >> A1.transactions[i];   // transaction amount
    }
   
    cout<<"Initial Balance : " << A1.balance << endl;
   
    A1.balance = performTransactions(A1,N);


    cout<<"Final Balance : " << A1.balance << endl;


    return 0;
}

