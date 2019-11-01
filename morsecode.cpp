#include <iostream>
#include <cstring>

using namespace std;

struct Node {
   char val;
   Node* left;
   Node* right;
};

void deleteTree(Node* stptr);

int main() {

   Node* start = new Node;

   start->val = ' '; 

   Node* T = new Node;
   Node* E = new Node;

   T->val = 'T';
   E->val = 'E';

   start->left = T;
   start->right = E;

   Node *M, *N, *A, *I;

   M = new Node;
   N = new Node;
   A = new Node;
   I = new Node;

   M->val = 'M';
   N->val = 'N';
   A->val = 'A';
   I->val = 'I';

   T->left = M;
   T->right = N;

   E->left = A;
   E->right = I;

   Node *O, *G, *K, *D, *W, *R, *U, *S;

   O = new Node;
   G = new Node;
   K = new Node;
   D = new Node;
   W = new Node;
   R = new Node;
   U = new Node;
   S = new Node;

   O->val = 'O';
   G->val = 'G';
   K->val = 'K';
   D->val = 'D';
   W->val = 'W';
   R->val = 'R';
   U->val = 'U';
   S->val = 'S';

   M->left = O;
   M->right = G;

   N->left = K;
   N->right = D;

   A->left = W;
   A->right = R;

   I->left = U;
   I->right = S;

   Node *QU, *DOT, *Q, *Z, *Y, *C, *X, *B, *J, *P, *L, *DSH, *F, *V, *H;

   QU = new Node;
   DOT = new Node;
   Q = new Node;
   Z = new Node;
   Y = new Node;
   C = new Node;
   X = new Node;
   B = new Node;
   J = new Node;
   P = new Node;
   L = new Node;
   DSH = new Node;
   F = new Node;
   V = new Node;
   H = new Node;


   QU->val = '?';
   DOT->val = '.';
   Q->val = 'Q';
   Z->val ='Z';
   Y->val = 'Y';
   C->val = 'C';
   X->val = 'X';
   B->val = 'B';
   J->val = 'J';
   P->val = 'P';
   L->val = 'L';
   DSH->val = '-';
   F->val = 'F';
   V->val = 'V';
   H->val = 'H';

   O->left = QU;
   O->right = DOT;

   G->left = Q;
   G->right = Z;

   K->left = Y;
   K->right = C;

   D->left = X;
   D->right = B;

   W->left = J;
   W->right = P;

   B->left = NULL;
   B->right = L;

   J->left = DSH;
   J->right = F;

   S->left = V;
   S->right = H;

   Node *ZERO, *NINE, *EIGHT, *SEVEN, *SIX, *ONE, *TWO, *THREE, *FOUR, *FIVE;

   ZERO = new Node;
   ONE = new Node;
   TWO = new Node;
   THREE = new Node;
   FOUR = new Node;
   FIVE = new Node;
   SIX = new Node;
   SEVEN = new Node;
   EIGHT = new Node;
   NINE = new Node;

   ZERO->val = '0';
   ONE->val = '1';
   TWO->val = '2';
   THREE->val = '3';
   FOUR->val = '4';
   FIVE->val = '5';
   SIX->val = '6';
   SEVEN->val = '7';
   EIGHT->val = '8';
   NINE->val = '9';

   QU->left = ZERO;
   QU->right = NINE;

   DOT->right = EIGHT;

   Z->right = SEVEN;

   B->right = SIX;

   J->left = ONE;

   DSH->left = Z;

   V->left = THREE;

   H->left = FOUR;
   H->right = FIVE;

   // dit = . left
   // dah = - right
   // / = space

   string input;

   cout << "Enter Morse Code: ";
   getline(cin, input);

   Node* curr = start;

   for (char c : input) {

      if (c == '.') {
         curr = curr->right;
      } else if (c == '-') {
         curr = curr->left;
      } else if (c == ' ') {
         cout << curr->val;
         curr = start;
      } else if (c == '/') {
         cout << ' ';
      } else {
         cout << "Invalid Morse Code." << endl;
         return 1;
      }

   }

   cout << curr->val << endl;

   deleteTree(start);

   return 0;
}

void deleteTree(Node* stptr) {
   if (stptr == NULL) return;

   deleteTree(stptr->left);
   deleteTree(stptr->right);

   delete stptr;
}