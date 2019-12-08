int adjacentElementsProduct(std::vector<int> inputArray) {
    int maxProd = INT_MIN;
    for (int i = 1; i < inputArray.size(); i++)
        if (inputArray[i] * inputArray[i-1] > maxProd)
            maxProd = inputArray[i] * inputArray[i-1];
    return maxProd;
}
