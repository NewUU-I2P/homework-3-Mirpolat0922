void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    double a;
    cin>>a;
    if(a>=60){
        cost = 13+30*0.4+20*0.12+10*1.4+(a-60)*1.5;
    }else if(a>=50 and a<60){
        cost = 13+30*0.4+20*0.12+(a-50)*1.4;
    }else if(a>=30 and a<50) {
        cost = 13 + 30 * 0.4 + (a-30) * 0.12;
    }else if(a>=0 and a<30) {
        cost = 13 + a * 0.4;
    }
    return cost;
}
