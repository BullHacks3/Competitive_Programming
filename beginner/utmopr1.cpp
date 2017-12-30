    #include<iostream>
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
        for (int i=0; i<t; i++) {
            int n;
            long k,h;
            unsigned long sum =0;
            cin >> n >> k;
            for (int m=0; m<n; m++) {
                cin >> h;
                sum = sum + h;
            }
            for (int d=0; d<k; d++) {
                h = sum + 1;
                sum = sum + h;
            }
            if (h%2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }
     