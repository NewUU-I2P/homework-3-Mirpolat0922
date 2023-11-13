float problemSolution2(float i, float j, float k) {
    double result;
    // write your code here;
    cin >>i>>j>>k;
    result = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);
    return result;
}