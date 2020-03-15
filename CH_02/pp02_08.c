#include <stdio.h>

int main(void) {
  float loan;
  float interest, m_interest;
  float m_payment;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest);
  m_interest = interest / 12.0f;
  printf("Enter m payment: ");
  scanf("%f", &m_payment);

  loan = loan * (1.0f + m_interest / 100.0f) - m_payment;
  printf("Balance remaining after first payment: %.2f\n", loan);
  loan = (loan * (1.0f + m_interest / 100.0f)) - m_payment;
  printf("Balance remaining after first payment: %.2f\n", loan);
  loan = (loan * (1.0f + m_interest / 100.0f)) - m_payment;
  printf("Balance remaining after first payment: %.2f\n", loan);

  return 0;
}
