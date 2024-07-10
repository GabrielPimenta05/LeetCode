int scoreOfString(char* s) {
    
    int valor=0;
    for(int i=0;s[i]!= '\0'; i++)
    {
        valor = valor + abs( s[i] - s[i+1]);
        if(s[i+1]=='\0'){
            valor = valor - s[i];
        }
    }
    return valor;
}
