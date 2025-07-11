# whichlang-cpp-retrained

A lightweight C++ language detection library based off whichlang

## Supported Languages

- 🇺🇸 **English**
- 🇩🇪 **German**
- 🇫🇷 **French**
- 🇪🇸 **Spanish**
- 🇯🇵 **Japanese**
- 🇨🇳 **Chinese**

## Usage

**Example:**
```cpp
#include "language_detector.hpp"
Lang result = LanguageDetector::detectLanguage("Guten Tag");
// Returns: Lang::GERMAN
```
