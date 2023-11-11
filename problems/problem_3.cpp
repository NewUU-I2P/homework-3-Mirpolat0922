#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    string sex,result;
    double length;
    cin>>sex<<length;
    switch(sex){
        case "Male":
            if(length<1.7){
                result = "Short";
            }else if(length>= 1.7 and length <1.85){
                result = "Normal";
            }else{
                result = "Tall"
            }
        case "Female":
            if(length<1.6){
                result = "Short";
            }else if(length>= 1.6 and length <1.75){
                result = "Normal";
            }else{
                result = "Tall"
            }
    }
    return result;
    // use return to return your result
    // make use of control flow statements
}