#define F_ZEROS  (1<<0)
#define F_LONG   (1<<1)
#define F_SPLUS  (1<<2)
#define F_SSPACE (1<<3)
#define F_HEX    (1<<4)
const char* IntToStr(int num, unsigned int mxlen, char flag);

#define IntToStrX(num,mxlen) IntToStr(num,mxlen,F_HEX)
