/*
 * Some people are standing in a row in a park.
 * There are trees between them which cannot be moved.
 * Your task is to rearrange the people by their heights in
 * a non-descending order without moving the trees.
 * People can be very tall!
 *
 * Example
 *
 * For a = [-1, 150, 190, 170, -1, -1, 160, 180], the output should be
 * sortByHeight(a) = [-1, 150, 160, 170, -1, -1, 180, 190].
 */

std::vector<int> sortByHeight(std::vector<int> a) {
    int pos = 0;
    vector<int> tmp = a;
    sort(tmp.begin(),tmp.end());
    for(int i: tmp) {
        if(i>=0) {
            while(a[pos]==-1) pos++;
            a[pos] = i;
            pos++;
        }
    }
    return a;
}
