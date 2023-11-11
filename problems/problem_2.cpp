float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    double price1, price2, price3;
    cin >> price1>>price2>>price3;
    double highestPrice = (price1 > price2) ? ((price1 > price3) ? price1 : price3) : ((price2 > price3) ? price2 : price3);

    return result;
}