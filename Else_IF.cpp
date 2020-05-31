#include <iostream>
using namespace std;

int main(){

	int input;

	cout<<"1. A"<<endl;
	cout<<"2. B"<<endl;
	cout<<"3. C"<<endl;
	cout<<"4. D"<<endl;
	cout<<"5. E"<<endl;

	cout<<"\n"<<"Press one number "<<flush;
	cin>>input;

	if(input==1){
		cout<<"You've chosen A"<<endl;
	}else if(input==2){
		cout<<"You've chosen B"<<endl;
	}else if(input==3){
		cout<<"You've chosen C"<<endl;
	}else if(input==4){
		cout<<"You've chosen D"<<endl;
	}else if(input==5){
		cout<<"You've chosen E"<<endl;
	}else{
		cout<<"You've not chosen any of the previous options"<<endl;
	}

	//flushing the buffer   
        int c;
        do{
        c=cin.get();
        } while (c!='\n'&&c!=EOF);


        //expecting for an Enter(\n)
        cin.get();      //remember to flush the buffer with the previous function before implementing cin.get()
	

	return 0;
}
