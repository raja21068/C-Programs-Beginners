 #include <conio.h>
 #include <iostream.h>

 void main () {

  clrscr();

  int op;
  float c,f,k,x;

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

	cout <<"\n\nEnter temperature in øC: ";
	cin >> c;

	f = c*9/5+32;

	cout <<"\n\tThe given temperature in Fahrenhiet is: ";
	cout << f;
	cout << "øF";

	break;

	case 2:
	cout <<"\n\tFahrenhiet into Celsius Convertor";

	cout <<"\n\nEnter temperature øF: ";
	cin >> f;

	c = (f-32)*5/9;

	cout <<"\n\tThe given temperature in Celsius is: ";
	cout << c;
	cout << "øC";

	break;

	case 3:
	cout <<"\n\tKelvin into Celsius Convertor";

	cout <<"\n\nEnter temperature in øK:";
	cin >> k;

	c = k-273.15;

	cout <<"\n\tThe given temperature in Celsius is: ";
	cout << c;
	cout << "øC";

	break;

	case 4:
	cout <<"\n\tCelsius into Kelvin Convertor";

	cout <<"\n\nEnter temperature in øC: ";
	cin >> c;

	k = c+273.15;

	cout <<"\n\tThe given temperature in Kelvin is: ";
	cout << k;
	cout << "øK";

	break;

	case 5:
	cout <<"\n\tKelvin into Fahrenhiet Convertor";

	cout <<"\n\nEnter temperature in øK: ";
	cin >> k;

	f = (k - 273.15)*9/5+32;

	cout <<"\n\tThe given temperature in Fahrenhiet is: ";
	cout << f;
	cout << "øF";

	break;

	case 6:
	cout <<"\n\tFahrenhiet into Kelvin Convertor";

	cout <<"\n\nEnter temperature in øF: ";
	cin >> f;

	k = (f - 32)*5/9 + 273.15;

	cout <<"\n\tThe given temperature in Kelvin is: ";
	cout << k;
	cout << "øK";

	break;

	default:
	cout <<"\n\tInvalid choice !";

	}

	getche();

  }
