/*
 * Given two strings, find the number of common characters between them.
 */

 int commonCharacterCount(std::string s1, std::string s2) {
    int coincidence = 0;
    for (int i = 0; i < s1.size(); i++){
        for (int j = 0; j < s2.size(); j++){
            if (s1[i] == s2[j]){
                coincidence++;
                s2[j] = '~';
                break;
            }
        }
    }
    return coincidence;
}
