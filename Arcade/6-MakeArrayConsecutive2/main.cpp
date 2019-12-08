int makeArrayConsecutive2(std::vector<int> statues) {
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < statues.size(); i++){
        if (statues[i] < min) min = statues[i];
        if (statues[i] > max) max = statues[i];
    }
    return max - min - statues.size() + 1;
}
