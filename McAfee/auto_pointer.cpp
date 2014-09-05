#include<iostream>
using namespace std;

class CSample {

public:
CSample() { cout<<"Constructing the object "<<endl; }

~CSample() { cout<<"Deleting the object "<<endl; }

};

 int m_refCount = 0;
template<class T>
class CAutopointer {


	public:
	
	CAutopointer<T>() : obj( NULL ) { cout<<"Default"<<endl; }

 	CAutopointer<T>(const CAutopointer<T> &object )
	{
		cout<<"1.copy ctor"<<endl;
		m_refCount++;
		obj = object.obj;
	}

	// CAutopointer<T>(CAutopointer<T> object )
	// {
		// cout<<"2.ctor"<<endl;
		// m_refCount++;
		// obj = object.obj;

	// }

	CAutopointer<T>(CAutopointer<T> *object )
	{
		cout<<"3.ctor"<<endl;
		m_refCount++;
		obj = object->obj;

	}
	
	CAutopointer<T>( T *object )
	{
			cout<<"The other ctor"<<endl;
			m_refCount++;
			obj = object;
	
	}

	~CAutopointer() {

		m_refCount--;
		if( m_refCount == 0 ) delete obj;
	}


	T& operator* ()
    {
		cout<<"overloading the * operator "<<endl;
        return *obj;
    }

    T* operator-> ()
    {
		cout<<"overloading the -> operator"<<endl;
        return obj;
    }
	
	int GetRefCount() { return m_refCount; };

	private:
	T *obj;
	
};



int main()
{
	CSample *sampleobj = new CSample();
	
	CAutopointer<CSample> autoptr(sampleobj);
	
	cout<<autoptr.GetRefCount()<<endl;
	
	CAutopointer<CSample> at2 = autoptr;
	
	cout<<at2.GetRefCount()<<endl;
	
	return 0;
}