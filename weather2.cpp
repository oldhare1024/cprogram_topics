    int max=s[0],min=s[0];
    for(i=0;i<n;i++)
   {
        if(s[i]>max)
    {
        max=s[i];
    }
    if(s[i]<=min)
    {
        min=s[i];
    }
   }
    c=max-min;
    printf("%d\n",c);
    for(i=0;i<n;i++)
    {
      if(s[i]==min)
      printf("%d ",i+1);
    }

