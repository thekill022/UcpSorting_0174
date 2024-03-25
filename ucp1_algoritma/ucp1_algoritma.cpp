//Soal Tipe 2
#include <iostream>
using namespace std;

int gibranFathoni[74];
int n;

void input()
{
	while (true)
	{
		cout << "Masukkan Panjang data array yang ingin anda inputkan : ";
		cin >> n;

		if (n <= 74)
		{
			break;
		}
		else
		{
			cout << "\nMaksimum panjang data adalah 74" << endl;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Masukkan nilai array index ke-" << i << " : ";
		cin >> gibranFathoni[i];
	}
}


void selectionSort()
{
	for (int j = 0; j <= n-2; j++)
	{
		int min_index = j;

		for (int i = j+1; i <= n-1; i++)
		{
			if (gibranFathoni[i] < gibranFathoni[min_index])
			{
				min_index = i;
			}
		}

		int temp = gibranFathoni[j];
		gibranFathoni[j] = gibranFathoni[min_index];
		gibranFathoni[min_index] = temp;

		cout << "\nPass" << j + 1 << " : ";
		for (int k = 0; k < n; k++)
		{
			cout << gibranFathoni[k] << " ";
		}
		

	}
	
		
}

void output()
{
	cout << endl;
	cout << "===========================" << endl;
	cout << "Hasil yang sudah di urutkan" << endl;
	cout << "===========================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << gibranFathoni[i] << " ";
	}
}


int main()
{
	input();
	selectionSort();
	output();
	return 0;
}

//1. Bubble menukar serta membandingkan element dari yang terkecil ke yang terbesar dengan membandingkan 
// besar ukuran antar element i dan i+1 secara berulang hingga nilai yang paling besar berada di posisi paling
// kanan dalam 1 pass. Algoritma ini memiliki nilai pass akhir yaitu n-1. Analoginya misal ada A = 12, B = 20, dan C = 14. pertama A akan dibandingkan dengan B
//jika A lebih besar dari B maka posisi akan ditukar. Ternyata A tidak lebih besar dari B, maka A tetap pada posisinya.
//lalu sekarang B akan dibandingkan dengan C menggunakan cara yang sama dengan A ke B. Ternyata B lebih besar. 
//Maka nilai pada index tempat B atau index i akan ditukar dengan index tempat B atau index i+11. cara menukar adalah
// dengan memasukkan B ke dalam variabel temporary lalu memasukkan nilai C ke index i, dan terakhir index i+1 akan diganti dengan nilai variabel temporary yaitu B.
//karena saat ini perbandingan sudah dilakukan sebanyak n-pass maka pass 1 selesai. pada pass kedua cara yang berlaku juga sama

// 2. algoritma shell sort membandingkan serta menukar nilai dengan memisah isi array menjadi list list kecil. Biasanya di awali dengan
// list yang berselang dengan increment 3 pada pass 1, lalu pada pass 2 list dipecah dengan index yang berselang 2 atau di increment 2. setelah 2 pass ini 
// sudah dilakukan, maka yang terakhir adalah menyelesaikan urutan dengan insertion sort.

// 3. algoritma yang harus dipilih adalah insertion sort. Hal ini karena efisiensi insertion lebih cepat dari yang dilakukan oleh
// Bubble sort ataupun selection sort, namun hal memiliki syarat yaitu algoritma sudah beberapa yang kondisinya urut.

//1.	Repeat steps 2 and 3 varying j from 0 to n – 2
//2.	Find the minimum value in arr[j] to arr[n – 1]:
//a.Set min_index = j
//b.Repeat step c varying i from j + 1 to n – 1
//c.If arr[i] < arr[min_index] :j
	//i.min_index = i
	//3.	Swap arr[j] with arr[min_index]
