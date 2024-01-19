#include<iostream>
#include<math.h>
#include<string>
using namespace std;
void calculator();
void table();
void message();
void factorial();
void numberofdigit();
void reverseofnumber();
void fibonacci();
void armstrong();
void cipher();
void HCF();
void swaping();
void quad();
void gmtrc();
int main(){
	string name;
	int fun;// function for user
	int value;
	int reg;// registration id
	cout<<"Wellcome to Air University\n";
	cout<<"\nCyber Security Department\n";
	cout<<"\nEnter your name: ";
	getline(cin,name);
	cout<<"\nEnter your registration ID: ";
	cin>>reg;
	cin.ignore();
	do{
	cout<<"\nEnter number of function which you want to perform";
	cout<<"\n1. calculator";
	cout<<"\n2. table";
	cout<<"\n3. statement printing";
	cout<<"\n4. factorial";
	cout<<"\n5. reverse of number";
	cout<<"\n6. number of digits";
	cout<<"\n7. fibonacci series";
	cout<<"\n8. armstrong";
	cout<<"\n9. HCF";
	cout<<"\n10.Cipher";
	cout<<"\n11.swapping of variable";
	cout<<"\n12.finding value of x of an quadratic equation";
	cout<<"\n13.geometric series";
	cout<<"\n14. quit\n";
	cin>>fun;
	cin.ignore();
	switch(fun){
		case 1:
		calculator();
		cout<<"\n------------------------------------";	
		break;
	    case 2:
	    table();
		cout<<"\n------------------------------------";	
	    break;
	    case 3:
	    message();
	    cout<<"\n------------------------------------";
	    break;
	    case 4:
	    factorial();
	    cout<<"\n------------------------------------";
	    break;
	    case 6:
	    numberofdigit();
	    cout<<"\n------------------------------------";
	    break;
	    case 5:
	   	reverseofnumber();
	   	cout<<"\n------------------------------------";
	   	break;
	   	case 7:
		  	fibonacci();
	     cout<<"\n------------------------------------";
	     break;
	     case 8:
	     	armstrong();
	     	cout<<"\n------------------------------------";
	     	break;
	    case 9:
	    	HCF();
		   cout<<"\n------------------------------------";
	     	break;
	     	case 10:
	    	cipher();
		   cout<<"\n------------------------------------";
	     	break;
	     	case 11:
	    	swaping();
		   cout<<"\n------------------------------------";
	     	break;
	     	case 12:
	     	quad();
	     	cout<<"\n------------------------------------";
	     	break;
	     	case 13:
	     	gmtrc();
	     	cout<<"\n------------------------------------";
	     	break;
	     case 14:
	     	break;
		default:
		cout<<"you entered wrong function!";
		cout<<"\n------------------------------------";	
	}} while(fun!=14);
	cout<<endl;
	cout<<"\nThank you! "<<name<<" for using our services\n";
}
void calculator(){
	float num1,num2,result;
	
	char op;// operator
	cout<<"\nEnter two numbers: ";
	cin>>num1>>num2;
	cin.ignore();
	cout<<"\nEnter operator from the following '+,-,*,/' \n";
	cin>>op;
	cin.ignore();
	switch(op){
		case '+':
		result=num1+num2;
	   cout<<num1<<" + "<<num2<<" = "<<result;
	   break;
	    case '-':
	    	result=num1-num2;
	   cout<<num1<<" - "<<num2<<" = "<<result;
	   break;
	   case '*': 
	    result=num1*num2;
	   cout<<num1<<" * "<<num2<<" = "<<result;
	   break;
	   case '/':
	   	result=num1/num2;
	   cout<<num1<<" / "<<num2<<" = "<<result;
	   break;
	   default: 
	   cout<<"\nYou entered wrong operator!\n";
}
}
void table(){
     float x;
	cout<<"\nEnter number of which you want to print table: \n";
	cin>>x;
	cin.ignore();
	for(int i=1;i<=10;i++){
		cout<<x<<" X "<<i<<" = "<<x*i<<endl;
	}
}
void message(){
	string line;// line which user want to print
	int time;// how many time user want to print 
	cout<<"\nEnter line what do you want to print.\n";
	getline(cin,line);
	cout<<"How many times you want to enter: ";
	cin>>time;
	cin.ignore();
	if(time>0){
		for(int i=1;i<=time;i++){
			cout<<i<<". "<<line<<endl;
		}
	}
	else{
		cout<<"You Entered wrong number!";
	}
}
void factorial(){
	int num,factorial=1;
	cout<<"\nEnter a number whose factorial you want(number must b greater than 0): ";
	cin>>num;
	cin.ignore();
	if(num>0){
		for(int i=1;i<=num;i++){
			factorial*=i;
		}
		cout<<"Factorial= "<<factorial;
	}
	else{
		cout<<"you Entered wrong a number!";
		
	}
}
void numberofdigit(){
	int num,a,i=0;
	cout<<"Enter a numbers: ";
	cin>>num;
	num;
	while(num!=0){
		num/=10;
		i++;
	}
	cout<<"numbers of digits are "<<i;
}
void reverseofnumber(){
	    int rev=0, no,rem;
    cout<<"Enter a number: ";
    cin>>no;
    while(no!=0){
    	rem=no%10;
    	rev=rev*10+rem;
    	no=no/10;
	}
    cout<<"reverse is "<<rev;
}
void fibonacci(){
		int num,first=0,second=1, next;
	cout<<"Enter a number whose fibonacci series: ";
	cin>>num;
	if(num>0){
		for(int i=0;i<num;i++){
			cout<<first<<"	";
			next=first+second;
			first=second;
			second=next;
		}
	}
	else{
		cout<<"you entered negative or zero";
	}
}
void armstrong(){
		int no,rem,sum=0;
	cout<<"Enter a number: ";
	cin>>no;
	int temp=no;
	while(no!=0){
		rem=no%10;
		sum+=rem*rem*rem;
		no/=10;
	}
	if(temp==sum){
		cout<<"Armstrong: "<<temp;
	} 
	else{
		cout<<"\nNot a Armstrong:";
	}
}
void HCF(){
	int a,b;
	cout<<"\nEnter two numbers: ";
	cin>>a;
	cin>>b;
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	cout<<"HCF of two numbers is: "<<a;
	
}
void cipher(){
	cout<<"\nBy Using your 'Roll No' last digit as shift n, e.g., roll no. 22391 have shift = 1.";
	cout<<"\nold shift =1 then new shift for new word will be shift = 3"<<endl;
	int key,no;
	string word;
	cout<<"\nEnter your roll number: ";
	cin>>no;// roll number
	cin.ignore();
	key=no%10;
	cout<<"\nkey is: "<<key<<endl;
	cout<<"\nEnter your sentence: ";
	getline(cin,word);// sentence
	cout<<"\nChipher: ";
	for(int i=0;i<word.length();i++){
		if(word[i]==' '){// key rotation for example: first key is 2 after space it'll be 4.
			key+=2;
			cout<<" ";
			continue;
		}
		int asci=word[i];
	  int (asci+key);
		if(asci+key>122){
		int	kali=(asci+key-26);// for reversing of alphabets 
			cout<<char(kali);
			continue;
		}
		else{
			cout<<char(asci+key);
		}
	}
}
void swaping(){
		int num1,num2,temp;
	cout<<"Enter the value of first variable: "<<endl;
	cin>>num1;
	cout<<"Enter the value of first variable: "<<endl;
	cin>>num2;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<"With third variable: "<<endl;
	cout<<"After swapping First value: "<<num1<<endl;
	cout<<"After swapping second value: "<<num2<<endl;
	num1=num1+num2;// without two variable
	num2=num1-num2;
	num1=num1-num2;
	cout<<"Without third variable: "<<endl;
	cout<<"After swapping First value: "<<num1<<endl;
	cout<<"After swapping second value: "<<num2<<endl;
}
void quad(){
		int a,b,c,deter,x1,x2;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
	if(a>0&&b>0){
		deter=b*b-4*a*c;
		if(deter>=0){
			x1=(-b+sqrt(deter))/(2*a);
			x2=(-b-sqrt(deter))/(2*a);
			cout<<"\n\nroots are real: "<<endl;
			cout<<"first value of x: "<<x1<<endl;
			cout<<"second value of x: "<<x2<<endl;
			
		}
	}
	else{
		cout<<"It is not Quadratic Equation Value: ";
	}
}
void gmtrc(){
		int a,r,n;
	cout<<"Enter a size: ";
	cin>>n;
	cout<<"\nEnter the common ration r: ";
	cin>>r;
	cout<<"Enter a: ";
	cin>>a;
	for(int i=1;i<=n;i++){
		a*=r;
		cout<<a<<" ";
	}
}