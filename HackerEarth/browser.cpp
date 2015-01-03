#include <iostream>
#include <string>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while( t-- )
    {
        string website;
        cin>>website;

        int jhoollength = 0;
        int normal = website.length();

        for(int i = 4 ; i < normal-4; i++ )
        {

            switch (website[i])
            {
                case 'a' :
                case 'e' :
                case 'i' :
                case 'o' :
                case 'u' :
                break;
                default:
                 jhoollength++;
            }

          }

        cout<<jhoollength+4<<"/"<<normal<<endl;

    }

}
