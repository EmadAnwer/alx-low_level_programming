int rand() {
    // Seed values
    int seeds[] = { 8, 8, 7, 9, 23, 74 };
    
    // Increment and return seed value
    static int i = 0;
    return seeds[i++];
}
