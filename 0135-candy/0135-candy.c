int candy(int* ratings, int ratingsSize){
    int a = 0;
    int s = ratingsSize -1;
    int *r = malloc(4 * ratingsSize);
    int *l = malloc(4 * ratingsSize);
    l[0] = 1;
    r[ratingsSize-1] = 1;
    for(int i = 1; i < ratingsSize ; i++)
       l[i] = ratings[i] > ratings[i - 1] ? l[i - 1] + 1 :  1;
    for(int i = ratingsSize - 2 ; i >=0 ; i--)
        r[i] = ratings[i] > ratings[i+1] ? r[i + 1] + 1 : 1;
    for(int i = 0 ; i < ratingsSize ; i++)
       a += r[i] > l[i] ? r[i] :l[i];
    return a;

}