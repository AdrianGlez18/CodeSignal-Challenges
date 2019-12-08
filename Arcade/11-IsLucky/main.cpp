/*
 * Ticket numbers usually consist of an even number of digits.
 * A ticket number is considered lucky if the sum of the first half of the digits is equal to the sum of the second half.
 * Given a ticket number n, determine if it's lucky or not.
 */

bool isLucky(int n) {
    int h1 = 0, h2 = 0;
    std::string tmp = std::to_string(n);
    for (int i = 0; i < tmp.size()/2; i++){
        h1 += (int)(tmp[i]);
        h2 += (int)(tmp[tmp.size() - i -1]);
    }
    return (h1 == h2);
}
