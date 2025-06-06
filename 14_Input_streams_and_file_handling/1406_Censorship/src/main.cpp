#include <fstream>
#include <iostream>
#include <string>
#include <vector>


int main() {
    std::string text_file_name;
    std::string words_file_name;
    std::string plug;

    std::cin >> text_file_name;
    std::cin >> words_file_name;
    std::cin >> plug;

    std::ifstream ifile(text_file_name);
    std::ifstream wfile(words_file_name);

    std::vector<std::string> bad_words;

    if (wfile.is_open()) {
        std::string line;
        while (wfile >> line) {
            bad_words.push_back(line);
        }
    }

    if (ifile.is_open()) {
        std::string line;
        while (std::getline(ifile, line)) {
            for (auto s : bad_words) {
                if (line.find(s) != std::string::npos) {
                    line.replace(line.find(s), s.length(), plug);
                }
            }
            std::cout << line << std::endl;
        }
    }

    return 0;
}