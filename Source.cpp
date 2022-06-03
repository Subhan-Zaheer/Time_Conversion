#include <iostream>
#include<string>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int lengthofString = s.length();
    if (s[lengthofString - 2] == 'a' || s[lengthofString - 2] == 'A') {
        if (s[0] == '1' && s[1] == '2') {
            s[0] = s[1] = '0';
        }
    }
    if (s[lengthofString - 2] == 'p' || s[lengthofString - 2] == 'P') {
        if (!(s[0] == '1' && s[1] == '2')) {
            string temp = s.substr(0, 2);
            int num = stoi(s);
            num += 12;
            int i = 1;
            while (num > 0) {
                int r = num % 10;
                temp = to_string(r);
                s[i] = temp[0];
                i--;
                num /= 10;
            }
           /* int r = num % 10;
            temp = to_string(r);
            s[0] = temp[0];
            num /= 10;*/
        }
    }
    string finalString = "";
    finalString = s.substr(0, 8);
    //for(int i=0;i<lengthofString-2;i++){
      //  finalString[i]=s[i];
    //}
    return finalString;
}

int main()
{
    //ofstream fout(_dupenv_s("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    //fout.close();

    return 0;
}
