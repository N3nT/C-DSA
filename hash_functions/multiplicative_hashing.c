int multiplicative_hashing(int key, int size){
    // Multiplicative hashing
    // key - the input value to be hashed
    // size - the size of the hash table
    const double A = (sqrt(5) - 1)/2; //around 0.618
    return (int)(size * (key*A - floor(key * A)));
}