*s,*t,i,u;swap(*x,*y){u=*x;*x=*y;*y=u;}main(n,b)char**b;{n=atoi(b[1]);s=malloc(n*4);t=malloc(n*4);for(i=n;i;--i)s[i-1]=t[i-1]=i;do{for(i=0;i<n/2;++i)swap(&t[i],&t[n-1-i]);for(i=0;i<n-1;i+=2)swap(&t[i],&t[i+1]);for(i=0;i<n;printf("%d ", t[i++]));puts("");for(i=0;s[i]==t[i]&&i<n;++i);}while(i<n);}
