    #include <iostream>
    #include <string>
    #include <vector>
    using namespace std;
    
    vector<int> get_binary(int num){
        //int bin = 0;
        string bin = "";
        vector <int> binary;
        while (num >= 1){
            //bin = (bin * 10) + (num % 2);
            bin += to_string(num%2);
            num /= 2;     
        }
        cout<<"bin of num "<<bin<<endl;
        for (int i = bin.length() - 1; i >= 0; i--)
        {
            binary.push_back(int(bin[i]) - 48);
        }

        for (int digit: binary)
            cout<< digit << " ";
        
        cout<<endl;

        return binary;

    }
    int findComplement(int num) {
        int comp = 0;
        int base = 1;
        vector <int> complement;
        vector <int> binary = get_binary(num);

        for (int i = 0; i < binary.size(); i++){
            if (binary[i] == 1) complement.push_back(0);
            else complement.push_back(1);
        }

        for (int digit: complement)
            cout<< digit << " ";

        cout<<endl;


        for (int j = complement.size() - 1; j >= 0 ; j--){
            complement[j] *= base;
            base *= 2;
        }
        for (int digit: complement)
            cout<< digit << " ";
        
        cout<<endl;

        for (int digit: complement){
            comp += digit;
        }
        return comp;
    }
    int main(){
        int num;
        cout<< "enter num: ";
        cin>>num;
        cout<<"binary complement: "<< findComplement(num)<<endl;
        return 0;
   
    }