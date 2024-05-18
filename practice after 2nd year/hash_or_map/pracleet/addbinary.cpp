class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        int sum1 = 0;
        int sum2 = 0; 
        for(int i = 0; i<a.length(); i++){
            if(a[i] == '1'){
                sum1 += pow(2,i);
            }
        }
        
        reverse(b.begin(),b.end());
        for(int i = 0; i<b.length(); i++){
            if(b[i] == '1'){
                sum2 += pow(2,i);
            }
        }
        //cout<<sum2<<endl;
        int x = sum1+sum2;
        cout<<x;
        string r = "";
        int c;
        if(x==0){
            return "0";
        }
        while(x != 0){
            c = x%2;
            x = x/2;
            r += to_string(c);
        }
        
      reverse(r.begin(),r.end());
      return r;
    }
};