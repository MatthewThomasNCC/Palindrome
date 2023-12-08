# Palindrome

In this example, a function, isPalindrome, is designed that returns "true" if a string is a palindrome and "false" otherwise. A string is a palindrome if it reads forward and backwards the same way. Examples would include "racecar", "a", and "454".

Suppose str is a string. To determine whether str is a palindrome, first compare the first and the last characters of str. It they are not the same, str is not a palindrome and so the funciton should return "false". If the first and last characters of str are the same, then we compare the second chatacer with the second character from the end, etc.

Note: If the length = str.length(), the number of characters in str, then we need to compare str[0] with string str[length -1], where 0 <= i <= lenth / 2. 
