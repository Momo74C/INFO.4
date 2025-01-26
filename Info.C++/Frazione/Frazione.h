#ifndef FRAZIONE_H
#define FRAZIONE_H

class Frazione 
{
    private:
        int num;
        int deno;
    public:
        Frazione(int num = 12, int deno = 6);
        void stampa();
        void stamparis();
        void semplifica();
};
#endif