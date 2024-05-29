int rand1(int rr){
    int rand = rr;
    rand=(rand+(ticks))%(85663);
    rand *= 12;
    rand += 8965;
    rand ^= 1463588;
    return rand;
}

int random_num_gen(int mini,int maxi){
    int rand = rand1(2);
    for(int i=0;i<ticks*5;i++){
        rand=rand1(rand);
    }
    rand = rand % 1000000009;
    rand=rand%(maxi-mini+1);
    cprintf("%d\n",rand);
    return mini+rand;
}

