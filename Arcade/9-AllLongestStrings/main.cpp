/*
 * Given an array of strings, return another array containing all of its longest strings.
 * Example:
 * For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be
 * allLongestStrings(inputArray) = ["aba", "vcd", "aba"].
 */

 std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    int maxLength = 0;
    std::vector<std::string> resultVector;
    for (int i = 0; i < inputArray.size(); i++) if (inputArray[i].size() > maxLength) maxLength = inputArray[i].size();
    for (int j = 0; j < inputArray.size(); j++) if (inputArray[j].size() == maxLength) resultVector.push_back(inputArray[j]);
    return resultVector;
}
