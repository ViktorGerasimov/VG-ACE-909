#include <iostream>
#include <stdio.h>


using namespace std;
int F13(int a) {
	int n, s, k;
	for (n = a, s = 0; n != 0; n = n / 10)
	{
		k = n % 10; s = s + k;
	}
	return s;
}
int F14(int a) {
	int n, s, k;
	for (n = a, s = 0; n != 0; n = n / 10)
	{
		k = n % 10; if (k > s) s = k;
	}
	return s;
}
int F15(int a) {
	int n, s, k;
	for (n = a, s = 0; n != 0; n = n / 10)
	{
		k = n % 10; s = s * 10 + k;
	}
	return s;
}
int F16(int a, int A[]) {
	int n, i;
	int ly = 0;
	for (i = 0, n = a; n != 0; i++, n = n / 10);
	for (A[i--] = -1, n = a; n != 0; i--, n = n / 10) {
		A[i] = n % 10;
		ly++;
	}
	return ly;
}
int F17(int A[]) {
	int j, a, n, s, k;
	for (j = 0, a = 10; a < 30000; a++) {
		for (n = a, s = 0; n != 0; n = n / 10)
		{
			k = n % 10; s = s + k;
		}
		if (a == s * s * s) A[j++] = a;

	}
	return j;
}
int F18(int v, int A[]) {
	int j, a, s, n, k;
	int ly = 0;
	for (j = 0, a = 10; a < v; a++) {
		for (n = a, s = 0; n != 0; n = n / 10)
		{
			k = n % 10; s = s * 10 + k;
		}
		if (a == s) {
			A[j++] = a;
			ly++;
		}
	}
	return ly;
}
int F19(int A[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		if (A[i] < 0) {
			for (j = i; j < n - 1; j++) A[j] = A[j + 1];
			n--;
			i--;
		}
	} 
	return n;
}
int F20(int A[], int n) {
	int i, k, j;
	for (i = 1, k = 0; i < n; i++)
		if (A[i] > A[k]) k = i;
	for (j = k; j < n - 1; j++) A[j] = A[j + 1];
	n--;
	return n;
}
int F21(int v, int A[]) {
	int i, a, n;
	int ly = 0;
	for (i = 0, a = 2; a < v; a++) {
		for (n = 2; n < a; n++)
		{
			if (a % n == 0) break;
		}
		if (n == a) {
			A[i++] = a;
			ly++;
		}
	}
	A[i] = 0;
	return ly;
}
int F22(int v, int A[]) {
	int i, a, s, n;
	int ly = 0;
	for (i = 0, a = 2; a < v; a++) {
		for (s = 0, n = 2; n < a; n++)
			if (a % n == 0) { s = 1; break; }
		if (s == 0) {
			A[i++] = a;
			ly++;
		}
	}
	A[i] = 0;
	return ly;
}
int F23(int n, int A[], int B[]) {
	int j, i, m;
	int ly = 0;
	for (j = 0, i = 0; i < n; i++) {
		for (m = 2; m < A[i]; m++)
		{
			if (A[i] % m == 0) break;
		}
		if (m == A[i]) {
			B[j] = A[i];
			ly++;
			j++;
		}
	}
	B[j] = 0;
	return ly;
}
int F24(int n, int A[], int B[]) {
	int j, i, s, m;
	int ly = 0;
	for (j = 0, i = 0; i < n; i++) {
		for (s = 0, m = 2; m < A[i]; m++)
			if (A[i] % m == 0) { s = 1; break; }
		if (s == 0) {
			B[j++] = A[i];
			ly++;
		}
	}
	B[j] = 0;
	return ly;
}
int F25(int n, int A[]) {
	int i, m, j;
	for (i = 0; i < n; i++) {
		for (m = 2; m < A[i]; m++)
		{
			if (A[i] % m == 0) break;
		}
		if (m == A[i]) {
			for (j = i; j < n - 1; j++) A[j] = A[j + 1];
			n--;
			i--;
		}
	}
	return n;
}
int F26(int n, int A[]) {
	int j, i, s, m;
	for (j = 0, i = 0; i < n; i++) {
		for (s = 0, m = 2; m < A[i]; m++)
			if (A[i] % m == 0) { s = 1; break; }
		if (s == 0) {
			for (j = i; j < n - 1; j++) A[j] = A[j + 1];
			n--;
			i--;
		}
	}
	return n;
}
int F27(int val, int A[]) {
	int i, m;
	int ly = 0;

	for (i = 0; val != 1; i++) {
		for (m = 2; val % m != 0; m++);
		val /= m; A[i] = m;
		ly++;
	}
	A[i] = 0;
	return m;
}
int F28(int n, int A[]) {
	int v, i, s;
	v = A[0] + 1;
	do {
		v--;
		for (i = 0, s = 0; i < n; i++)
			if (A[i] % v != 0) { s = 1; break; }
	} while (s == 1);
	return v;
}
int F29(int v, int n, int A[]) {
	int i;
	for (i = 0; i < n; i++)
		if (A[i] % v != 0) { v--; i = -1; }
	return v;
}
int F30(int v, int A[]) {
	int i, a, s, j;
	int ly = 0;
	for (i = 0, a = 2; a < v; a++) {
		for (s = 0, j = 0; j < i; j++)
			if (a % A[j] == 0) { s = 1; break; }
		if (s == 0)
			A[i++] = a;
	}
	A[i] = 0;
	return i;
}
int F31(int n, int c[]) {
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (c[i] == c[j]) return i;
	return -1;
}
int F32(int n, int c[]) {
	int s, i, k, j, b;
	for (s = 0, i = 0; i < n; i++) {
		for (k = 0, j = 0; j < n; j++)
			if (c[i] == c[j]) k++;
		if (k > s) s = k, b = i;
	}
	return s;
}
int F33(int n, int A[]) {
	int s, i, k, b;
	for (s = 0, i = 0; i < n - 1; i++)
		if (A[i] == A[i + 1]) {
			for (k = 2; i + k < n && A[i] == A[i + k]; k++);
			if (k > s) s = k, b = i;
		}
	if (k > s) s = k, b = i;
	return b;
}
int F34(int n) {
	int k, m;
	for (k = 0, m = 1; m <= n; k++, m = m * 2);
	return k - 1;
}
void F35(int n, int c[]) {
	int i, j, k, z, ly;
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		k = c[i]; c[i] = c[j]; c[j] = k;
	}
	for (ly = 0, z = 0; z < n; z++)
	{
		if (ly == 0) {
			cout << "���������:" << c[z] << " ";
			ly++;
		}
		else {
			cout << c[z] << " ";
		}
	}
}
int F36(int n, int c[]) {
	int i, j, k1, k2;
	for (i = 0; i < n; i++) {
		for (j = k1 = k2 = 0; j < n; j++)
			if (c[i] != c[j])
			{
				if (c[i] < c[j]) k1++; else k2++;
			}
		if (k1 == k2) return i;
	}
	return -1;
}
int F37(int n, int c[]) {
	int s, i, j, m, b;
	for (s = 0, i = 0; i < n - 1; i++) {
		for (j = i + 1, m = 0; j < n; j++)
			if (c[i] == c[j]) m++;
		if (m > s) s = m, b = i;
	}
	return b;
}
int F38(int n, int c[]) {
	int i, k, m, b;
	for (i = k = m = 0; i < n - 1; i++)
		if (c[i] == c[i + 1]) k++;
		else {
			if (k > m) m = k, b = i - k - 1;
			k = 0;
		}
	if (k > m) m = k, b = i - k - 1;
	return b;
}
int F39(int n, int A[]) {
	int s, i;
	for (s = 0, i = 0; i < n; i++) {
		if (A[i] < 0) continue;
		if (A[i] == 0) break;
		s = s + A[i];
	}
	return s;
}
int F40(int n, int A[]) {
	int s, i;
	for (s = 0, i = 0; i < n && A[i] != 0; i++)
		if (A[i] > 0)
			s = s + A[i];
	return s;
}
int F41(int n, int A[]) {
	int k, s, i;
	for (k = 0, s = 0, i = 0; i < n && k == 0; i++) {
		if (A[i] < 0) k = 1;
		s = s + A[i];
	}
	return s;
}
int F42(int n, int A[]) {
	int s1, s2, i, j;
	for (s1 = 0, s2 = 0, i = 0, j = n - 1; i <= j;) {
		if (s1 < s2) s1 += A[i], i++;
		else s2 += A[j], j--;
	}
	return i;
}
int F43(int n, int A[]) {
	int s, i;
	for (s = 0, i = 0; i < n; i++) {
		if (A[i] % 2 == 0)	s = s + A[i];
		else s = s - A[i];
	}
	return s;
}
void F44(int n, int A[]) {
	int j, i, k, B[10], ly;

	for (j = 0; n != 0; j++) {
		for (k = 0, i = 1; i < n; i++)
			if (A[i] < A[k]) k = i;
		B[j] = A[k];
		for (; k < n - 1; k++) A[k] = A[k + 1];
		n--;
	}
	for (ly = 0, i = 0; i < j; i++)
	{
		if (ly == 0) {
			cout << "���������:" << B[i] << " ";
			ly++;
		}
		else {
			cout << B[i] << " ";
		}
	}
}
void F45(int n, int A[]) {
	int j, max, k, i, B[10], ly;
	for (j = 0, max = A[0]; j < n; j++)
		if (A[j] > max) max = A[j];
	for (j = 0; j < n; j++) {
		for (k = 0, i = 1; i < n; i++)
			if (A[i] < A[k])
				k = i;
		B[j] = A[k];
		A[k] = max + 1;
	}
	for (ly = 0, i = 0; i < n; i++)
	{
		if (ly == 0) {
			cout << "���������:" << B[i] << " ";
			ly++;
		}
		else {
			cout << B[i] << " ";
		}
	}
}
void F46(int n, int A[]) {
	int k, i, c, a = n, ly;
	while (n != 0) {
		for (k = 0, i = 1; i < n; i++)
			if (A[i] < A[k]) k = i;
		c = A[k]; A[k] = A[n - 1]; A[n - 1] = c;
		n--;
	}
	for (ly = 0, i = 0; i < a; i++)
	{
		if (ly == 0) {
			cout << "���������:" << A[i] << " ";
			ly++;
		}
		else {
			cout << A[i] << " ";
		}
	}
}
int F47(int v, int A[]) {
	int j, a, s, k, n;
	for (j = 0, a = 10; a < v; a++) {
		for (s = 0, n = a, s = 0; n != 0; n = n / 10) {
			k = n % 10;
			if (k != 0 && a % k != 0) { s = 1; break; }
		}
		if (s == 0) {
			A[j++] = a;
		}
	}
	return j;
}
int F48(int n, int A[]) {
	int i, j;
	int ly = 0;
	for (i = 0; i < n - 1; i++)
		if (A[i] == A[i + 1]) {
			for (j = i; j < n - 2; j++) A[j] = A[j + 2];
			n = n - 2;
			i--;
			ly++;
		}
	return ly;
}
int F49(int A[], int n) {
	int  i, k;
	for (i = 0, k = -1; i < 10; i++) {
		if (A[i] < 0) continue;
		if (k == -1) k = i;
		else
			if (A[i] < A[k]) k = i;
	}
	return k;
}
int F50(int A[], int n) {
	int i, s, k;
	for (i = 0, s = 0, k = 0; i < 10; i++)
		if (A[i] < 0) k = 1;
		else {
			if (k == 1) s++;
			k = 0;
		}
	if (k == 1) s++;
	k = 0;
	return s;
}
int F51(int A[], int n) {
	int i, s;
	for (i = 0, s = 0; i < 10; i++)
		if (A[i] > s) s = A[i];
	return s;
}
int F52(int A[], int n) {
	int i, k;
	for (i = 1, k = 0; i < 10; i++)
		if (A[i] > A[k]) k = i;
	return k;
}
int F53(int A[], int n) {
	int i, k;
	for (i = 0, k = -1; i < 10; i++)
	{
		if (A[i] < 0) continue;
		if (k == -1) k = i;
		else
			if (A[i] < A[k]) k = i;
	}
	return k;
}
int F54(int A[], int n) {
	int i, k;
	for (i = 0, k = -1; i < 10; i++)
	{
		if (A[i] < 0) continue;
		if (k == -1 || A[i] < A[k]) k = i;
	}
	return k;
}
int F55(int A[], int n) {
	int i, s;
	for (i = 0, s = 0; i < 10; i++)
		if (A[i] > 0) s++;
	return s;
}
int F56(int A[], int n) {
	int i, s;
	for (i = 1, s = 0; i < 10; i++)
		if (A[i] > 0 && A[i - 1] < 0) s++;
	return s;
}
int F57(int A[], int n) {
	int i, s, k;
	for (i = 1, s = 0, k = 0; i < 10; i++) {
		if (A[i - 1] < A[i]) k++;
		else {
			if (k > s) s = k;
			k = 0;
		}
	}
	if (k > s) s = k;
	return s;
}
int F58(int A[]) {
	int i, s, k;
	for (i = 0, s = 0, k = 0; i < 10; i++)
		if (A[i] < 0) k = 1;
		else
		{
			if (k == 1) s++; k = 0;
		}
	if (k == 1) s++; k = 0;
	return s - 1;
}
int main() {
	int a, v, n, nf, i, val;
	setlocale(LC_ALL, "Russian");
	cout << "����� ������� (13-58):";
	cin >> nf;
	for (;;)
	{
		
        
		
		    int A[100];
			int B[100];
			int c[100];
			
		    switch (nf) 
			{

			case 13:
				cout << "������ ������� ������� ����� ���� ��������� �����" << endl;
				cout << "������� �����:";
				cin >> a;
				cout << "���������:" << F13(a);
				break;
			case 14:
				cout << "��������� ������� ���������� ����� � �������� �����" << endl;
				cout << "������� �����:";
				cin >> a;
				cout << "���������:" << F14(a);
				break;
			case 15:
				cout << "��������� ������ ����� ����� �������, ����� ������������������ ����" << endl;
				cout << "������� �����: ";
				cin >> a;
				cout << "���������:" << F15(a);
				break;
			case 16:
				cout << "��������� ��������� ����� �� ������� � ������� ��������" << endl;
				cout << "������� �����:";
				cin >> n;
				a = F16(n, A);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << A[i] << " ";
				break;
			case 17:
				cout << "��������� ������� �����, ����� ���� ������� ����������� � ��� � ���� ��� �����" << endl;
				a = F17(A);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << A[i] << " ";
				break;
			case 18:
				cout << "��������� ������� ��� ����� � ����������� ������� �� �����" << endl;
				cout << "������� ��������:" << endl;
				cin >> v;
				a = F18(v, A);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << A[i] << " ";
				break;
			case 19:
				cout << "��������� ���� ������������� ����� � �������, e��� ����� ����� �������,�� ��� ��������� ������� ������� �����" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������: ";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> A[i];
				a = F19(A, n);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << A[i] << " ";
				break;
			case 20:
				cout << "�������� ����������� �������� �������" << endl;
				cout << "������� ���������� ��������� ��������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> A[i];
				a = F20(A, n);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << A[i] << " ";
				break;
			case 21:
				cout << "����� ������� ������� �����" << endl;
				cout << "������� ��������:";
				cin >> v;
				a = F21(v, A);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << A[i] << " ";
				break;
			case 22:
				cout << "����� ������� �����" << endl;
				cout << "������� ��������:";
				cin >> v;
				a = F22(v, A);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << A[i] << " ";
				break;
			case 23:
				cout << "���������� ������� ����� �� ������� � ������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;

				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++) {
					cin >> A[i];
				}
				a = F23(n, A, B);
				cout << "���������:";
				for (int j = 0; j < a; j++) {
					cout << B[j] << " ";
				}
				break;
			case 24:
				cout << "����� ������� ����� � �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> A[i];
				a = F24(n, A, B);
				cout << "���������:";
				for (int j = 0; j < a; j++) {
					cout << B[j] << " ";
				}
				break;
				break;
			case 25:
				cout << "�������� �� ������� ���� ������� �����" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> A[i];
				a = F25(n, A);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << A[i] << " ";
				break;
			case 26:
				cout << "�������� �� ������� ������� �����" << endl;
				cout << "������� ���������� ��������� �������-";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������-";
					cin >> n;
				}
				cout << "������� �������� �������" << endl;
				for (i = 0; i < n; i++)
					cin >> A[i];
				a = F26(n, A);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << A[i] << " ";
				break;
			case 27:
				cout << "������������� ����� �� ������� ���������" << endl;
				cout << "������� �����: ";
				cin >> val;
				a = F27(val, A);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << A[i] << " ";
				break;
			case 28:
				cout << "����� ����������� ������ ��������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> A[i];
				cout << "���������:" << F28(n, A);
				break;
			case 29:
				cout << "����� ����������� ������ �������� �� ��������� ��������� v" << endl;
				cout << "������� ��������:";
				cin >> v;
				for (v; v < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> v;
				}
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> A[i];
				cout << "���������:" << F29(v, n, A);
				break;
			case 30:
				cout << "����� ������� ����� �� v" << endl;
				cout << "������� ��������:";
				cin >> v;
				for (v; v < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> v;
				}
				a = F30(v, A);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << A[i] << " ";
				break;

			case 31:
				cout << "����� ���������� ��������� � ����� ������� �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F31(n, c);
				break;
			case 32:
				cout << "����� ������������� ���������� ���������� ����������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F32(n, c);
				break;
			case 33:
				cout << "����� ������� 3����������� �������������� ��������." << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> A[i];
				cout << "���������:" << F33(n, A);
				break;
			case 34:
				cout << "����� ������� 2, ��� ������� ����� ����������� ������� 2^k<=n" << endl;
				cout << "������� �����: ";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "���������:" << F34(n);
				break;
			case 35:
				cout << "�������������� ������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 0;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				F35(n, c);
				break;
			case 36:
				cout << "����� ������� ��������, ������������ �� ������ ���������� �� ������ �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F36(n, c);
				break;
			case 37:
				cout << "����� ������� ��������, ������������ ��������� � ������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 0;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F37(n, c);
				break;
			case 38:
				cout << "����� ������� �������� ����� ������ ��������� ������������ ������������������ ���������� �����" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 0;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F38(n, c);
				break;
			case 39:
				cout << "���������� �������� ���� ������������� ����� �� ������� ����" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F39(n, c);
				break;
			case 40:
				cout << "����������� ���� ������������� ����� �� ������� ����" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F40(n, c);
				break;
			case 41:
				cout << "���������� ����� ���� ��������� �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F41(n, c);
				break;
			case 42:
				cout << "���������� ������ �������� ������� � �������, ��� ����� ��������� � �������� ��������� �������� ����� ����� ��������� � �������� ���������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 0;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F42(n, c);
				break;
			case 43:
				cout << "�������� ����� ������ � �������� ����� �����" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F43(n, c);
				break;
			case 44:
				cout << "�������� ������� B, ��������� ��������������� �� ����������� ������ � " << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				F44(n, c);
				break;
			case 45:
				cout << "���������� ��������� (�� �����������)" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				F45(n, c);
				break;
			case 46:
				cout << "���������� ������� (�� ��������)" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				F46(n, c);
				break;
			case 47:
				cout << "����� ����� ����,������� ������� �� ������ ����� ������" << endl;
				cout << "������� ��������:";
				cin >> v;
				for (v; v < 1;) {
					cout << "������� ��������:";
					cin >> v;
				}
				a = F47(v, c);
				cout << "���������:";
				for (i = 0; i < a; i++)
					cout << c[i] << " ";
				break;

			case 48:
				cout << "�������� ������� ���������� ��������� �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				a = F48(n, c);
				cout << "���������:";
				for (int j = 0; j < a; j++) {
					cout << c[j] << " ";
				}
				break;
			case 49:
				cout << "����� ������������ �������� ������� ����� ������������� � ������������ �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F49(c, n);
				break;
			case 50:
				cout << "������� ���������� ���� ����� � �������������� �� ������������� � �������� �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F50(c, n);
				break;
			case 51:
				cout << "����� ������������� �������� � ������� ����� �������������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F51(c, n);
				break;
			case 52:
				cout << "����� ������� ����������� �������� �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 0;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F52(c, n);
				break;
			case 53:
				cout << "����� ������� ����������� �������� �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F53(c, n);
				break;
			case 54:
				cout << "����� ������� ������ ���������� �������������� ��������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 0;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F54(c, n);
				break;
			case 55:
				cout << "������� ������������� ��������� �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F55(c, n);
				break;
			case 56:
				cout << "������� ���������� ���� ����� � �������������� �� ������������� � �������� �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F56(c, n);
				break;
			case 57:
				cout << "����� ������������� �� ��������� ���������� ���������� ���������(� ������� ��� �������)" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F57(c, n);
				break;
			case 58:
				cout << "������� ���������� ���� ����� � �������������� �� ������������� � �������� �������" << endl;
				cout << "������� ���������� ��������� �������:";
				cin >> n;
				for (n; n < 1;) {
					cout << "������� ���������� ��������� �������:";
					cin >> n;
				}
				cout << "������� �������� �������:" << endl;
				for (i = 0; i < n; i++)
					cin >> c[i];
				cout << "���������:" << F58(c);
				break;
			
				

			  default:
					cout << "����� F �� ����������, ������� ��������:" << endl;
					cin >> nf;
					break;
			case 0:
				return 0;
				

			
			}
			
			
		}

	
}