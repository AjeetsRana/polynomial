// polynomial.h
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <gmp.h> // Include the appropriate big integer library.

// Define the structure for a term in a polynomial.
typedef struct Term {
    mpz_t coefficient; // Use the big integer type from the library.
    int exponent;
    struct Term* next;
} Term;

// Define the structure for a polynomial.
typedef struct Polynomial {
    Term* head;
} Polynomial;

// Function prototypes
Polynomial* createPolynomial();
void insertTerm(Polynomial* poly, const mpz_t coefficient, int exponent);
void addPolynomials(Polynomial* result, const Polynomial* poly1, const Polynomial* poly2);
void subtractPolynomials(Polynomial* result, const Polynomial* poly1, const Polynomial* poly2);
void multiplyPolynomials(Polynomial* result, const Polynomial* poly1, const Polynomial* poly2);
void printPolynomial(const Polynomial* poly);
void destroyPolynomial(Polynomial* poly);

#endif // POLYNOMIAL_H

