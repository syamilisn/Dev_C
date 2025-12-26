int bestClosingTime(char* customers) {
    int penalty = 0;
    for (int i = 0; customers[i] != '\0'; i++){
        if (customers[i] == 'Y')
            penalty++;
    }
    int minPenalty = penalty;
    int minHour = 0;
    for (int i = 0; customers[i] != '\0'; i++){
        if (customers[i] == 'Y'){
            penalty--;
        } else {
            penalty++;
        }
        if (penalty < minPenalty){
            minPenalty = penalty;
            minHour = i + 1;
        }
    }
    return minHour;
}