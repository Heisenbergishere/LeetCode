class Solution {
public:
    typedef long long ll;

string func(long long num, int dig){
    string str;
    for( int d =9;d >=2;d--){
        while( num%d ==0){
            str.push_back(d +'0');
            num/=d;
        }
    }
    if (num != 1) return "";
    if ((int)str.size() > dig) return "";
    while( (int)str.size() <dig){
        str.push_back('1');
    }
    reverse(str.begin(),str.end());
    return str;
}
    string smallestNumber(string num, long long t) {
     int n = num.length();
     ll temp =t;
     for( int pf : {2,3,5,7}){
        while(temp%pf==0){
            temp /=pf;
        }
     }  
     if( temp !=1)return "-1";
      vector<ll>remfact(n+1,t);
      auto z = num.find('0');
    for( int i=0;i<n;i++){
        int dig = num[i] - '0';
        if( dig ==0)break;
        remfact[i+1]  = remfact[i]/gcd(remfact[i],(ll)dig);
    }
    if( z == string::npos && remfact[n] ==1)return num;
    int zidx=n-1;
    if ( z  != string::npos){
        zidx = z;
    }

    for( int i = zidx ;i>=0;i--){
        ll req  = remfact[i];
        int freeslots =  n-i-1;
        int start = (num[i] - '0') + 1;
        for (int dig = start; dig <= 9; dig++){
            ll furtherreq  =  req/gcd(req,(ll)dig);
            string  feqnumber = func( furtherreq,freeslots );
           if (!feqnumber.empty() || furtherreq == 1){
                return  num.substr(0,i) + (char)( dig + '0') + feqnumber;
            }
        }
        } 
       int len = n + 1;
        while (true) {
            string res = func(t, len);
            if (!res.empty()) return res;
            len++;
        }
    }
};