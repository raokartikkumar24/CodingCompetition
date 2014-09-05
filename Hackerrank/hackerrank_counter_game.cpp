#include<iostream>
#include<string>
using namespace std;
long long smallerPowerOf2(long long v);

long long smallerPowerOf2(long long v) {
	v--;
	v |= v >> 1;
	v |= v >> 2;
	v |= v >> 4;
	v |= v >> 8;
	v |= v >> 16;
	v++;
	return v >> 1;

}



int main()
    {
    bool r = false, c =true;
    int testcases;
    cin>>testcases;
    while( testcases--)
        {
            long long N;
            cin>>N;
			long long counter = N;
        while( counter != 1 ) {
		
			if( c ) {
						if( ( counter & counter-1) != 0 ) 
								counter = counter - smallerPowerOf2(counter);
															
						 else
							counter /= 2;
						
						if( counter == 1 ) break;
						c = false;
						r = true;
				
				}
				
			else
			{
				if( ( counter & counter-1) != 0 ) 
						counter = counter - smallerPowerOf2(counter);
				else
						counter /= 2;
						
					if( counter == 1 ) break;
						c = true;
						r = false;

			}
                
        }
        
        if( counter == 1 && r)
            cout<<"Richard"<<endl;
        else cout<<"Louise"<<endl;
            
        
    }
}

