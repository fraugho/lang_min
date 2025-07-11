#include <iostream>
#include "language_detector.hpp"

int main() {
    std::cout << "Testing language detection...\n";

    std::cout << "English test: " << two_letter_code(LanguageDetector::detectLanguage("Hello how are you doing?")) << std::endl;
    std::cout << "French test: " << two_letter_code(LanguageDetector::detectLanguage("Bonjour joyeux contribuable")) << std::endl;
    std::cout << "German test: " << two_letter_code(LanguageDetector::detectLanguage("Hallo glücklicher Steuerzahler")) << std::endl;
    std::cout << "Japanese test: " << two_letter_code(LanguageDetector::detectLanguage("こんにちは幸せな税金納め")) << std::endl;
    std::cout << "Chinese test: " << two_letter_code(LanguageDetector::detectLanguage("你好幸福的纳税人")) << std::endl;
    std::cout << "Spanish test 1: " << two_letter_code(LanguageDetector::detectLanguage("Hola feliz contribuyente")) << std::endl;
    std::cout << "Empty string test: " << two_letter_code(LanguageDetector::detectLanguage("")) << std::endl;
    
    return 0;
}
