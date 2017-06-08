

/**
 * main.c
 */
int main(void)
{
	return 0;
}

void blink(int n){
    char pattern = convert_to_morse(n);
    for (int i=0; i<5; i++){
        int state;
        int modulo = 1;
        for (int j=0; j<i+1; j++){
            modulo *=2;
        }
        state=pattern%modulo;
        state=state*2/modulo;
        //SET LED
        //WAIT bet. Digits
    }
    //LONG WAIT
}

char convert_to_morse(int n){
    switch(n){
    case 0:
        return 0x11111;
        break;
    case 1:
        return 0x01111;
        break;
    case 2:
        return 0x00111;
        break;
    case 3:
        return 0x00011;
        break;
    case 4:
        return 0x00001;
        break;
    case 5:
        return 0x00000;
        break;
    case 6:
        return 0x10000;
        break;
    case 7:
        return 0x11000;
        break;
    case 8:
        return 0x11100;
        break;
    case 9:
        return 0x11110;
        break;
    default:
        return 0x11111;
        break;
    }
}
