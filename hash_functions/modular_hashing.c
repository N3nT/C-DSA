int modular_hashing(int key, int size){
    // Modular hashing
    // key - the input value to be hashed
    // size - the size of the hash table
    return key % size;
}