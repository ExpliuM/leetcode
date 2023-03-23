#include <gtest/gtest.h>

#include "polindrome.h"

TEST(HelloTest, BasicAssertions) {
    // Polindrome
  printf("isPalindrome:\n");
  printf("Input: x = 121\n");
  bool isPalindromeRes1 = isPalindrome(121);
  printf("Output: %s\n", isPalindromeRes1 ? "true" : "false");
  printf("Expected: true\n");

  printf("isPalindrome:\n");
  printf("Input: x = -121\n");
  bool isPalindromeRes2 = isPalindrome(-121);
  printf("Output: %s\n", isPalindromeRes2 ? "true" : "false");
  printf("Expected: false\n");
  
  printf("isPalindrome:\n");
  printf("Input: x = 10\n");
  bool isPalindromeRes3 = isPalindrome(10);
  printf("Output: %s\n", isPalindromeRes3 ? "true" : "false");
  printf("Expected: false\n");
  
  printf("isPalindrome:\n");
  printf("Input: x = 1000021\n");
  bool isPalindromeRes4 = isPalindrome(1000021);
  printf("Output: %s\n", isPalindromeRes4 ? "true" : "false");
  printf("Expected: false\n");
}