bool checkPalindrome(std::string inputString) {
    int sizeCheck = inputString.size() - 1;
    for (int i = 0; i <= sizeCheck ; i++)
        if (inputString[i] != inputString[sizeCheck - i]) return false;
    return true;
}
