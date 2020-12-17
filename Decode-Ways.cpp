int numDecodings(string s) {
    int x = 1;
  int y = s.at(0)=='0'?0:1;

    for(int i=2;i<=s.length();i++){

  int a= stoi(s.substr(i-1,i));
  int b = stoi(s.substr(i-2,i));            
        int curr_result =0;

        if(a>=1 && a<=9){
     curr_result=y;
  }

        if(b>=10 && b<=26){
     curr_result+=x;
  }

        x = y;

  y = curr_result;

    }

    return y;
}
