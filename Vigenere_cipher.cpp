#include <iostream>
#include <string>
#include <cstddef>

static std::string eng[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

int main() {
	/*choosing the language*/
	std::string lang_input;
	std::cin >> lang_input;
	
	/*operating with the chosen one*/
	if (lang_input == "eng") {
		std::cout << "You chose English as encrypting language\n";
		std::cout << "Please input the word that you want to encrypt\n";
		std::string word_input;
		std::cin >> word_input;
		
		
		
//		if (word_input != nullptr) {
//			std::cout << word_input;
//		}
		
	} 
	/* SHITPOST_LOL */
	// /*future languages*/
	// if (lang_input == "eng") {
	// 	std::cout << "You chose English as crypting language\n";
	// 	std::cout << "Please input the word that you want to encrypt\n";
		
	// }
	
	
}
