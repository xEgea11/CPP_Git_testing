#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "main.hpp"

int ft_check_args(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << RED << "Error: Invalid number of arguments" <<  RESET << std::endl;
        std::cout << RED << "Usage: ./replace [file1] [string1] [string2]" << RESET << std::endl;
        return (FALSE);
    }
    if (strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
    {
        std::cout << RED << "Error: Invalid strings" << RESET << std::endl;
        std::cout << RED << "Usage: ./replace [file1] [string1] [string2]" << RESET << std::endl;
        return (FALSE);
    }
    return (TRUE);
}

std::string replace_all_occurrences(const std::string &content, const std::string &s1, const std::string &s2)
{
    std::string result;
    size_t pos = 0;
    size_t prev_pos = 0;

    while ((pos = content.find(s1, prev_pos)) != std::string::npos)
    {
        result.append(content, prev_pos, pos - prev_pos);
        result.append(s2);
        prev_pos = pos + s1.length();
    }
    result.append(content, prev_pos, content.length() - prev_pos);
    return (result);
}

int main(int argc, char *argv[]) 
{
    // Error handling
    if (ft_check_args(argc, argv) == FALSE)
        return (EXIT_FAILURE);
    
    // Opening input file
    std::ifstream input_file(argv[1]);
    if (!input_file.is_open())
    {
        std::cout << RED << "Error: Could not open file" << RESET << std::endl;
        return (EXIT_FAILURE);
    }

    // Creating output file
    std::string output_filename = std::string(argv[1]) + ".replace";
    std::ofstream output_file(output_filename);
    if (!output_file.is_open())
    {
        std::cout << RED << "Error: Could not create output file" << RESET << std::endl;
        return (EXIT_FAILURE);
    }

    // Reading file content into a buffer
    std::stringstream buffer;
    buffer << input_file.rdbuf();

    // Converting buffer into a string
    std::string file_content = buffer.str();

    // Replace all occurrences of string1 with string2
    std::string replaced_content = replace_all_occurrences(file_content, argv[2], argv[3]);
    
    // Write the content to the output file
    output_file << replaced_content;

    // Close files
    input_file.close();
    output_file.close();

    return (EXIT_SUCCESS);
}