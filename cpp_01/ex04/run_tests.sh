#!/bin/bash

# Definición de macros de color
GREEN='\033[0;32m'
RESET='\033[0m'

# Test 1: Nonexistent file
echo -e "${GREEN}Test 1: Nonexistent file${RESET}"
./replace nonexistent_file.txt s1 s2

# Test 2: Empty strings
echo -e "${GREEN}Test 2: Empty strings${RESET}"
./replace input.txt "" s2
./replace input.txt s1 ""

# Test 3: Empty file
echo -e "${GREEN}Test 3: Empty file${RESET}"
touch empty.txt
./replace empty.txt s1 s2

# Test 4: Normal replacement
echo -e "${GREEN}Test 4: Normal replacement${RESET}"
echo "Hello world! This is a test. Hello again!" > input.txt
./replace input.txt Hello Hi
cat input.txt.replace

# Test 5: Replacement that doesn't exist
echo -e "${GREEN}Test 5: Replacement that doesn't exist${RESET}"
./replace input.txt Nonexistent Replacement
cat input.txt.replace

# Test 6: Multiple replacements
echo -e "${GREEN}Test 6: Multiple replacements${RESET}"
echo "foo bar foo bar foo" > input.txt
./replace input.txt foo baz
cat input.txt.replace

# Test 7: Replacements with spaces
echo -e "${GREEN}Test 7: Replacements with spaces${RESET}"
echo "foo bar foo bar foo" > input.txt
./replace input.txt "foo bar" "baz qux"
cat input.txt.replace

# Clean up
rm -f input.txt input.txt.replace empty.txt empty.txt.replace