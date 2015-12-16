#include <cstdlib>
#include <iostream>
#include <string>
#include <stack>
#include <cmath>

using namespace std;

#define N_operators 6
const string operators[N_operators] = {"+", "-", "*", "/", "%", "^"};
int precedences[N_operators] = {1, 1, 2, 2, 2, 3};

bool is_operator( const string );
int precedence( const string );



	string infix, postfix, token;
	stack <string> standby;
	stack <double> result;
	size_t i;
	char c;
	double A, B;

	cout << "Intro expresion infija: ">
	getline( cin, infix );
	cout << endl;


	for ( i = 0; i < infix.size(); i++ ) {

		c = infix[i];
		token.clear();
		if ( c == ' ' ) continue;

		cout << "Analizando token: '" << c << "'" << endl;

		if ( c >= '0' && c <= '9' ) {
			cout << "\tes numero: pasado a posfijo" << endl << endl;
			postfix = postfix + " " + c;
			continue;
		}


		if ( is_operator( token ) ) {
			cout << "\tes operador:" << endl;
			while ( !standby.empty() && precedence( standby.top() )
						>= precedence( token ) ) {
				cout << "\tpasado operador '" + standby.top() +
					"' de la pila a posfijo" << endl;
				postfix = postfix + " " + standby.top();
				standby.pop();
			}
			standby.push( token );
			cout << "\tcolocar '" << token << "' en la pila" << endl << endl;
			continue;
		}

		if ( token == "(" ) {
			cout << "pasado a posfijo" << endl << endl;
			standby.push( token );
			continue;
		}


		if ( token == ")" ) {
			while ( !standby.empty() && standby.top() != "(" ) {
				cout << "\tpasado operador '" + standby.top() +
					"' de la pila a posfijo" << endl << endl;
				postfix = postfix + " " + standby.top();
				standby.pop();
			}
			if ( !standby.empty() )
				standby.pop();
		}
	}


	while ( !standby.empty() ) {
		cout << "Pasado operador '" + standby.top() +
			"' de la pila a posfijo" << endl << endl;
		postfix = postfix + " " + standby.top();
		standby.pop();
	}


	cout << "Posfijo es: \n\t" << postfix << endl << endl;


	A = 0;
	cout << "Evaluando la expresion ..." << endl;
	for ( i = 0; i < postfix.size(); i++ ) {

		c = postfix[i];
		token.clear();
		token += c;


		if ( c >= '0' && c <= '9' ) {
			result.push( c - '0' );
			continue;
		}


		if ( is_operator( token ) ) {
			if ( !result.empty() ) {
				B = result.top();
				result.pop();
			}
			else {
				cout << "Argumentos insuficientes para '" << c << "'" << endl;
				return -1;
			}

			if ( !result.empty() ) {
				A = result.top();
				result.pop();
			}
			else {
				cout << "Argumentos insuficientes para '" << c << "'" << endl;
				return -1;
			}

			cout << "\toperar " << A << token << B << " = ";
			if ( token == "+" ) {
				A += B;
				result.push( A );
			}
			else if ( token == "-" ) {
				A -= B;
				result.push( A );
			}
			else if ( token == "*" ) {
				A *= B;
				result.push( A );
			}
			else if ( token == "/" ) {
				A /= B;
				result.push( A );
			}
			else if ( token == "%" ) {
				A = (int )A % (int )B;
				result.push( A );
			}
			else if ( token == "^" ) {
				A = pow(A, B);
				result.push( A );
			}
			cout << A << endl;
		}
	}

	if ( !result.empty() )
		cout << endl << "El resultado es: " << result.top() << endl;

	return 0;
}


bool is_operator( const string token ) {

	for ( int i = 0; i < N_operators; i++ )
		if ( operators[i] == token )
			return true;

	return false;
}


int precedence( const string token ) {

	for ( int i = 0; i < N_operators; i++ )
		if ( operators[i] == token )
			return precedences[i];

	return -1;
}
