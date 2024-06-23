Certainly! Here are the solutions to the given problems using constructors in C++:

### Q1: Program to accept two integer numbers from the user and print who is greater using a constructor.

```cpp
#include <iostream>
using namespace std;

class CompareNumbers {
private:
    int num1, num2;
public:
    CompareNumbers(int n1, int n2) : num1(n1), num2(n2) {}
    void compare() {
        if (num1 > num2) {
            cout << num1 << " is greater than " << num2 << endl;
        } else if (num1 < num2) {
            cout << num2 << " is greater than " << num1 << endl;
        } else {
            cout << "Both numbers are equal" << endl;
        }
    }
};

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    CompareNumbers comparison(num1, num2);
    comparison.compare();
    return 0;
}
```

### Q2: Program to print the factorial of a number using a constructor.

```cpp
#include <iostream>
using namespace std;

class Factorial {
private:
    int number;
public:
    Factorial(int n) : number(n) {}
    int calculate_factorial() {
        int factorial = 1;
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        return factorial;
    }
};

int main() {
    int number;
    cout << "Enter a number to find its factorial: ";
    cin >> number;

    Factorial fact(number);
    cout << "The factorial of " << number << " is " << fact.calculate_factorial() << endl;
    return 0;
}
```

### Q3: Program to print numbers from 10 in reverse order using a constructor.

```cpp
#include <iostream>
using namespace std;

class ReverseOrder {
private:
    int start;
public:
    ReverseOrder(int s) : start(s) {}
    void print_reverse() {
        for (int i = start; i >= 1; --i) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    ReverseOrder reverse_order(10);
    reverse_order.print_reverse();
    return 0;
}
```

### Q4: Program to calculate the addition of the first 10 numbers using a constructor.

```cpp
#include <iostream>
using namespace std;

class SumOfNumbers {
private:
    int limit;
public:
    SumOfNumbers(int l) : limit(l) {}
    int calculate_sum() {
        int sum = 0;
        for (int i = 1; i <= limit; ++i) {
            sum += i;
        }
        return sum;
    }
};

int main() {
    SumOfNumbers sum_numbers(10);
    cout << "The sum of the first 10 numbers is " << sum_numbers.calculate_sum() << endl;
    return 0;
}
```

### Q5: Program to check if a number is prime or not using a constructor.

```cpp
#include <iostream>
using namespace std;

class PrimeCheck {
private:
    int number;
public:
    PrimeCheck(int n) : number(n) {}
    bool is_prime() {
        if (number <= 1) return false;
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) return false;
        }
        return true;
    }
};

int main() {
    int number;
    cout << "Enter a number to check if it's prime: ";
    cin >> number;

    PrimeCheck prime_check(number);
    if (prime_check.is_prime()) {
        cout << number << " is a prime number" << endl;
    } else {
        cout << number << " is not a prime number" << endl;
    }
    return 0;
}
```

These programs use constructors to initialize the class with the necessary data and perform the required operations using member functions.