 #include <conio.h>
 #include <iostream.h>

 void main () {

  clrscr();

  int op;
  float c,f,k;

	cout <<"\n\t\tWELCOME TO TEMPERATURE CONVERTOR\n";

	cout <<"\n\t1. Celsius into Fahrenhiet";
	cout <<"\n\t2. Fahrenhiet into Celsius";
	cout <<"\n\t3. Kelvin into Celsius";
	cout <<"\n\t4. Celsius into Kelvin";
	cout <<"\n\t5. Kelvin into Fahrenhiet";
	cout <<"\n\t6. Fahrenhiet into Kelvin";

	cout <<"\n\nEnter any choice: ";
	cin >>op;

  switch (op) {

	case 1:
	cout <<"\n\n\tCelsius into Fahrenhiet Convertor";

	cout <<"\n\nEnter temperature in �C: ";
	cin >> c;

	f = (c*9/5)+32;

	cout <<"\n\tThe given temperature in Fahrenhiet is: ";
	cout << f;
	cout << "�F";
	break;

	case 2:
	cout <<"\n\tFahrenhiet into Celsius Convertor";

	cout <<"\n\nEnter temperature �F: ";
	cin >> f;

	c = (f*5/9)-32;

	cout <<"\n\tThe given temperature in Celsius is: ";
	cout << c;
	cout << "�C";
	break;

	case 3:
	cout <<"\n\tKelvin into Celsius Convertor";

	cout <<"\n\nEnter temperature in �K:";
	cin >> k;

	c = (k-273.15);

	cout <<"\n\tThe given temperature in Celsius is: ";
	cout << c;
	cout << "�C";
	break;

	case 4:
	cout <<"\n\tCelsius into Kelvin Convertor";

	cout <<"\n\nEnter temperature in �C: ";
	cin >> c;

	k = (c+273.15);

	cout <<"\n\tThe given temperature in Kelvin is: ";
	cout << k;
	cout << "�K";
	break;

	case 5:
	cout <<"\n\tKelvin into Fahrenhiet Convertor";

	cout <<"\n\nEnter temperature in �K: ";
	cin >> k;

	f = ((k - 273) * 9/5 ) + 32;

	cout <<"\n\tThe given temperature in Fahrenhiet is: ";
	cout << f;
	cout << "�F";
	break;

	case 6:
	cout <<"\n\tFahrenhiet into Kelvin Convertor";

	cout <<"\n\nEnter temperature in �F: ";
	cin >> f;

	k = (5/9*(f - 32) + 273);

	cout <<"\n\tThe given temperature in Kelvin is: ";
	cout << k;
	cout << "�K";
	break;

	default:
	cout <<"\n\tInvalid choice !";
	break;

	}

	getche();

  }
