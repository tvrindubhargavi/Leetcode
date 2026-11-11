int lengthOfLastWord(char* s) {
  int l=0;
  int i=strlen(s)-1;
  while(i>=0 && s[i]==' '){
i-=1;
  }
  while(i>=0 && s[i]!=' '){
    l+=1;
    i-=1;
  }
  return l;
}