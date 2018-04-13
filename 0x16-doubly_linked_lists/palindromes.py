#!/usr/bin/python3


def palindrome(num):
    return num == num[::-1]


def check_range(low, high):
    for i in range(low, high):
        num = str(i * high)
        if palindrome(num):
            return i * high
    return False


def three_largest_palindrome():
    high = 999
    low = 990

    while (1):
        value = check_range(low, high)
        if (value):
            return value
        high = high - 1
        low = low - 20

print(three_largest_palindrome())
