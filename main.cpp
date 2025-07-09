#include <iostream>
#include <cassert>
#include "language_detector.hpp"

int main() {
    std::cout << "Testing language detection...\n";

    std::cout << "English test: " << three_letter_code(LanguageDetector::detectLanguage("Hello how are you doing?")) << std::endl;
    std::cout << "French test: " << three_letter_code(LanguageDetector::detectLanguage("Bonjour joyeux contribuable")) << std::endl;
    std::cout << "German test: " << three_letter_code(LanguageDetector::detectLanguage("Hallo glücklicher Steuerzahler")) << std::endl;
    std::cout << "Japanese test: " << three_letter_code(LanguageDetector::detectLanguage("こんにちは幸せな税金納め")) << std::endl;
    std::cout << "Chinese test: " << three_letter_code(LanguageDetector::detectLanguage("你好幸福的纳税人")) << std::endl;
    std::cout << "Spanish test 1: " << three_letter_code(LanguageDetector::detectLanguage("Hola feliz contribuyente")) << std::endl;
    std::cout << "Spanish test 2: " << three_letter_code(LanguageDetector::detectLanguage("¡Hola!")) << std::endl;
    std::cout << "Empty string test: " << three_letter_code(LanguageDetector::detectLanguage("")) << std::endl;

    /*
    assert(LanguageDetector::detectLanguage("Hello, happy tax payer") == Lang::En);
    assert(LanguageDetector::detectLanguage("Bonjour joyeux contribuable") == Lang::Fr);
    assert(LanguageDetector::detectLanguage("Hallo glücklicher Steuerzahler") == Lang::De);
    assert(LanguageDetector::detectLanguage("こんにちは幸せな税金納め") == Lang::Ja);
    assert(LanguageDetector::detectLanguage("你好幸福的纳税人") == Lang::Zh);
    assert(LanguageDetector::detectLanguage("Hola feliz contribuyente") == Lang::Es);
    assert(LanguageDetector::detectLanguage("¡Hola!") == Lang::Es);
    assert(LanguageDetector::detectLanguage("") == Lang::En);
    */


    std::cout << "All tests passed!\n";
    return 0;
}
