struct headInformation{
    int decimalStore[16];
    int octalStore[20];
    int hexadecimalStore[10];
   char hexadecimalStoreLetters[2];
};


int decimalPrint(headInformation main, int loop);
int octallPrint(headInformation main, int loop);
void hexadecimalPrint(headInformation main, int loop);
