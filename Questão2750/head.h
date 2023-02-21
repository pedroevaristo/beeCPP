struct headInformation{
    int decimalStore[16];
    int octalStore[20];
    int hexadecimalStore[10];
    char hexadecimalStoreLetters[8];
};


int decimalPrint(headInformation main, int loop);
int octallPrint(headInformation main, int loop);
int hexadecimalPrint(headInformation main, int loop);
