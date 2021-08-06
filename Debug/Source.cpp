#include<iostream>
#include <windows.h>
#include<stdlib.h>
#include<conio.h>
#include <iomanip>	
#include<string>

using namespace std;

typedef struct sv
{

    int mssv;
	
	char hoten[30];
	float diem_ava1;
	float diem_gdtc1;
	float diem_vldc;
	float diem_nmlt;
	float diem_tcc;
	float diem_THNMLT;
	float diem_THPCMT;
	float diem_thud;
	float diem_pl;
	
	float diem_pcmt;
	
};
typedef struct node
{
	sv info;
	node *next;
};
typedef struct list
{
	node *head;
	node *tail;
};
node *getnode(sv x)
{
	node *p;
	p = new node;
	if (p == NULL)
	{
		cout << "ko du bo nho";
		exit(1);

	}
	p->info = x;
	p->next = NULL;
	return p;
}
void inserttail(list &l, sv x)
{
	node *p;
	p = getnode(x);
	if (p == NULL)
	{
		cout << "ko tao duoc nut";
		exit(1);

	}
	if (l.head == NULL)
	{
		l.head = l.tail = p;

	}
	else
	{
		l.tail->next = p;
		l.tail = p;
	}
}

void output(list &l)
{
	
	node *p;
	p = l.head;
	cout << "......................................................................................................................\n";
	cout << "......................................................................................................................\n";

	cout << setw(12) << left << "MSSV" << setw(27) << left << "HO VA TEN"  <<"\tAVA1" << "\tGDTC1" << "\tNMLT" << "\tPCMT" << "\tPL" << "\tTCC" << "\tTHNMLT" << "\tTHPCMT" << "\tTHUD" << "\tVLDC" << endl;
	while (p != NULL)
	{

		
		
		cout << setw(12) << left <<p->info.mssv;
		cout << setw(30) << left << p->info.hoten;
		cout << p->info.diem_ava1<< "\t";
     	cout << p->info.diem_gdtc1 << "\t";
        cout << p->info.diem_nmlt << "\t";
	    cout << p->info.diem_pcmt << "\t";
	    cout << p->info.diem_pl << "\t";
		cout << p->info.diem_tcc << "\t";
		cout << p->info.diem_THPCMT << "\t";
		cout << p->info.diem_THNMLT << "\t";
		cout << p->info.diem_thud << "\t";
		cout << p->info.diem_vldc<<"\t";
		cout << endl;
	

		p = p->next;
	


	}
	
	cout << "......................................................................................................................\n";
	cout << "......................................................................................................................\n";


}


void newlist(list &l)
{

	sv x;
	FILE *f1;
	FILE *f2;
	FILE *f3;
	FILE *f4;
	FILE *f5;
	FILE *f6;
	FILE *f7;
	FILE *f8;
	FILE *f9;
	FILE *f10;
	FILE *f11;
	char *Filename1 = "mssv_hoten.txt";
	
	char *Filename2 = "mssv_ava1.txt";

	char *Filename3 = "mssv_gdtc1.txt";
	
	char *Filename4 = "mssv_nmlt.txt";

	char *Filename5 = "mssv_pcmt.txt";

	char *Filename6 = "mssv_pl.txt";

	char *Filename7 = "mssv_tcc.txt";
	
	char *Filename8 = "mssv_THPCMT.txt";

	char *Filename9 = "mssv_THNMLT.txt";
	
	char *Filename10 = "mssv_thud.txt";

	char *Filename11 = "mssv_vldc.txt";

	f1 = fopen(Filename1, "r");
	f2 = fopen(Filename2, "r");

	f3 = fopen(Filename3, "r");
	f4 = fopen(Filename4, "r");

	f5 = fopen(Filename5, "r");
	f6 = fopen(Filename6, "r");

	f7 = fopen(Filename7, "r");
	f8 = fopen(Filename8, "r");

	f9 = fopen(Filename9, "r");
	f10 = fopen(Filename10, "r");

	f11 = fopen(Filename11, "r");

	if (f1 == NULL&&f2 == NULL&&f3 == NULL&&f4 == NULL&&f5 == NULL&&f6 == NULL&&f7 == NULL&&f8 == NULL&&f9 == NULL&&f10==NULL&&f11==NULL)
	{
		cout << "Khong co file";
		return;
	}

	for (int i = 0; i < 274; i++)
	{
          fscanf(f1, "  %d ", &x.mssv);//doc file co so nguyen
         fscanf(f1, "  %[^\n] ",&x.hoten);//doc file kieu char co khoang trang
		
		 /*  fgets(x.hoten, 50, f);*/
		  fscanf(f2, "  %d ", &x.mssv);
		  fscanf(f2, "%e", &x.diem_ava1);//anh van 1

		  fscanf(f3, "  %d ", &x.mssv);
		  fscanf(f3, "%e", &x.diem_gdtc1);//giao duc the chat 1

		  fscanf(f4, "  %d ", &x.mssv);
		  fscanf(f4, "%e", &x.diem_nmlt);//nhap mon lap trinh 
		
		  fscanf(f5, "  %d ", &x.mssv);
		  fscanf(f5, "%e", &x.diem_pcmt);//phan  cung may tinh
	
		  fscanf(f6, "  %d ", &x.mssv);
		  fscanf(f6, "%e", &x.diem_pl);//phap luat
		
		  fscanf(f7, "  %d ", &x.mssv);
		  fscanf(f7, "%e", &x.diem_tcc);//toan cao cap
		 
		  fscanf(f8, "  %d ", &x.mssv);
		  fscanf(f8, "%e", &x.diem_THPCMT);//thuc hanh pcmt
		 
		  fscanf(f9, "  %d ", &x.mssv);
		  fscanf(f9, "%e", &x.diem_THNMLT);//thuc hanh nmlt

		  fscanf(f10, "  %d ", &x.mssv);
		  fscanf(f10, "%e", &x.diem_thud);//tinhoc ung dung
		
		  fscanf(f11, "  %d ", &x.mssv);
		  fscanf(f11, "%e", &x.diem_vldc);//vat li dai cuong
		  inserttail(l, x);
		
		 
	

	}
	   
	

	fclose(f1);
	fclose(f2);

	fclose(f3);
	fclose(f4);

	fclose(f5);
	fclose(f6);

	fclose(f7);
	fclose(f8);

	fclose(f9);
	fclose(f10);

	fclose(f11);
	
}
void del_head(list &l)
{
	node* q;
	q= l.head;
	l.head = l.head->next;
	delete(q);
}
void del_after(list &l)
{
	node *p;
	p= l.head;
	while (p->next != l.tail)
		p = p->next;
	node *k = l.tail;
	l.tail = p;
	l.tail->next = NULL;
	delete(k);
}
void del_sv(list&l)
{
	int mssv;
	

	cout << " nhap mssv de xoa sinh vien: ";
	cin >> mssv;
	if (l.head->info.mssv == mssv)
	{
		del_head(l);
		return;
	}
	if (l.tail->info.mssv == mssv)
	{
		del_after(l);
		return;
	}
	node*m;
	m= new node;
	for (node*n = l.head; n != NULL; n = n->next)
	{
		if (n->info.mssv == mssv)
		{
			m->next = n->next;
			delete n;
			return;
		}
		m = n;
	
   }

}


void timsv(list &l )
{
	void menu();
	
	int k;
	node *p;
	p = l.head;
	cout << "nhap mssv can tim, nhap 0 de ket thuc tim kiem:";
	cin >> k;
	if (k == 0)
	{
		cout << "ket thuc tim kiem tro ve menu!!!" << endl;
		return menu();
	}
	while (p != NULL)
	{
	
		if (p->info.mssv == k)
		{
			cout << "\n";
			cout << "......................................................................................................................\n";
			cout << "......................................................................................................................\n";
			cout << "THONG TIN VA DIEM SINH VIEN:" << endl;
			cout << "mssv:" << p->info.mssv;
			cout << "\n";

			cout << "hoten:" << p->info.hoten;
			cout << "\n";

			cout << "diem anh van 1:\t"<< p->info.diem_ava1;
			cout << "\n";
			cout << "diem nmlt:\t" << p->info.diem_nmlt;
			cout << "\n";
			cout << "diem gdtc1:\t" << p->info.diem_gdtc1;
			cout << "\n";
			cout << "diem pcmt:\t" << p->info.diem_pcmt;
			cout << "\n";
			cout << "diem vldc:\t" << p->info.diem_vldc;
			cout << "\n";
			cout << "diem thuc:\t" << p->info.diem_thud;
			cout << "\n";
			cout << "diem THPCMT:\t" << p->info.diem_THPCMT;
			cout << "\n";
			cout << "diem THNMLT:\t" << p->info.diem_THNMLT;
			cout << "\n";
			cout << "diem Phap luat:\t" << p->info.diem_pl;
			cout << "\n";
			cout << "diem tcc:\t" << p->info.diem_tcc;
			cout << "\n";
			cout << "\n";
			cout << "......................................................................................................................\n";
			cout << "......................................................................................................................\n";


		}
		
		p = p->next;
		
		
		
	}
	


}

void inserthead(list &l, sv x)
{
	node *p;
	p = getnode(x);
	if (p == NULL)
	{
		cout << "Khong tao duoc node";
		exit(1);
	}
	if (l.head == NULL)l.head = l.tail = p;
	else
	{
		p->next = l.head;
		l.head = p;
	}
}
void insertsv(list& l)
{

	cout << "THEM SINH VIEN:" << endl;
	cout << "bam 0 de dung them sinh vien va quay lai menu chinh" << endl;

	sv x;
	cout << "......................................................................................................................\n";
	cout << "......................................................................................................................\n";
	cout << "Nhap mssv de them sinh vien: ";
	cin >> x.mssv;

	while (x.mssv != 0)
	{
	
		
		cout << "Nhap ho ten sinh vien:"; cin >> x.hoten;
		cout << "Nhap diem anh van 1:"; cin >> x.diem_ava1;
		cout << "Nhap diem gdtc1:"; cin >> x.diem_gdtc1;
		cout << "Nhap diem nmlt:"; cin >> x.diem_nmlt;
		cout << "Nhap diem pcmt:"; cin >> x.diem_pcmt;
		cout << "Nhap diem phap luat:"; cin >> x.diem_pl;
		cout << "Nhap diem toan cao cap:"; cin >> x.diem_tcc;
		cout << "Nhap diem thuc hanh nhap mon lap trinh:"; cin >> x.diem_THNMLT;
		cout << "Nhap diem thuc hanh PCMT:"; cin >> x.diem_THPCMT;
		cout << "Nhap diem tin hoc ung dung:"; cin >> x.diem_thud;
		cout << "Nhap diem vat li dai cuong:"; cin >> x.diem_vldc;
		inserttail(l, x);
		cout << "Nhap mssv: ";
		cin >> x.mssv;
		cout << "......................................................................................................................\n";
		cout << "......................................................................................................................\n";
	}
	cout << "......................................................................................................................\n";
	cout << "......................................................................................................................\n";
	cout << "DANH SACH SAU KHI DUOC THEM:" << endl;
	cout << setw(12) << left << "MSSV" << setw(27) << left << "HO VA TEN" << "\tAVA1" << "\tGDTC1" << "\tNMLT" << "\tPCMT" << "\tPL" << "\tTCC" << "\tTHNMLT" << "\tTHPCMT" << "\tTHUD" << "\tVLDC" << endl;
	node *p = l.head;
	while (p != NULL)
	{

		cout << setw(12) << left << p->info.mssv;
		cout << setw(30) << left << p->info.hoten;
		cout << p->info.diem_ava1 << "\t";
		cout << p->info.diem_gdtc1 << "\t";
		cout << p->info.diem_nmlt << "\t";
		cout << p->info.diem_pcmt << "\t";
		cout << p->info.diem_pl << "\t";
		cout << p->info.diem_tcc << "\t";
		cout << p->info.diem_THPCMT << "\t";
		cout << p->info.diem_THNMLT << "\t";
		cout << p->info.diem_thud << "\t";
		cout << p->info.diem_vldc << "\t";
		cout << endl;


		p = p->next;
	}
	cout << "......................................................................................................................\n";
	cout << "......................................................................................................................\n";
	cout << endl;
}


	
	 
	
	
	
	
	


void menu()
{
	
	
	system("cls");
	cout << "CHAO MUNG DEN VOI\n";
	cout << "CHUONG TRINH QUAN LI DIEM SINH VIEN CAO THANG\n";
	
	cout << "......................................................................................................................\n";
	cout << "MENU" << endl;
	cout << "1.SINH VIEN" << endl;
	cout << "2.GIAO VIEN " << endl;
	cout << "3.THONG TIN DEV" << endl;
	cout << "......................................................................................................................\n";
	
	
	list l;

	l.head = l.tail = NULL;
	newlist(l);
	
	int c;
	
	
	do
	{
		cout << "chon nguoi dung tuong ung voi so thu tu:" << endl;
	   cin >> c;
	   if (c<0||c>3)
		{
		cout << "ban vua nhap sai. Xin vui long kiem tra lai" << endl;
		}
	} while (0 > c || c > 3);
	switch (c)
	{
	case 1:
	{
			  system("cls");
			  cout << "SINH VIEN" << endl;
			  timsv(l);

			
			 
			  int me;
			  cout << "Bam 0 de tro ve menu chinh:" << endl;
			  cin >> me;
			  if (me == 0)
			  {
				  return menu();
			  }

			  break;
		
	}
	case 2:
	{
			  system("cls");
			  int pass;
			  cout << "GIAO VIEN " << endl;
			  cout << "pass:123\n";
			  cout << "Vui long nhap mat dung khau de vao neu nhap sai va quay lai menu chinh: "; cin >> pass;
			 
			  if (pass == 123)
			  {


				  int  ch;
				  cout << endl;
				  system("cls");
				  cout << "1.XUAT DANH SACH SINH VIEN:" << endl;
				  cout << "2.TIM SINH VIEN:" << endl;
				  cout << "3.THEM SINH VIEN:" << endl;
				  cout << "4.XOA SINH VIEN:" << endl;
				  cout << "5.SUA SINH VIEN:" << endl;








				  do
				  {
					  cout << "chon nguoi dung tuong ung voi so thu tu, bam 0 de tro ve menu chinh:" << endl;
					  cin >> ch;
					  if (ch<0 || ch>5)
					  {
						  cout << "ban vua nhap sai. Xin vui long kiem tra lai:" << endl;
					  }
					  if (ch == 0)
					  {
						  return menu();
					  }
				  } while (0 > ch || ch > 5);


				  switch (ch)
				  {
				  case 1:
				  {
							system("cls");
							cout << "1.XUAT DANH SACH SINH VIEN:" << endl;
							output(l);
							int me;
							cout << "Bam 0 de tro ve menu chinh:" << endl;
							cin >> me;
							if (me == 0)
							{
								return menu();
							}

							break;
				  }
				  case 2:
				  {
							system("cls");
							cout << "2.TIM SINH VIEN:" << endl;
							timsv(l);
							int me;
							cout << "Bam 0 de tro ve menu chinh:" << endl;
							cin >> me;
							if (me == 0)
							{
								return menu();
							}

							break;

				  }

				  case 3:
				  {
							system("cls");
							cout << "3.THEM SINH VIEN:" << endl;
							cout << "WARNING:\n";
							cout << "He thong chi them duoc khi khong nhap khoang trang\n";
							insertsv(l);

							int me;
							cout << "Bam 0 de tro ve menu chinh:" << endl;
							cin >> me;
							if (me == 0)
							{
								return menu();
							}
							break;

				  }
				  case 4:
				  {
							system("cls");
							cout << "4.XOA SINH VIEN:" << endl;
							del_sv(l);
							cout << "\n";
							cout << "DANH SACH SAU KHI XOA:" << endl;
							output(l);

							int me;
							cout << "Bam 0 de tro ve menu chinh:" << endl;
							cin >> me;
							if (me == 0)
							{
								return menu();
							}
							break;

				  }
				  case 5:
				  {
							system("cls");
							cout << "5.SUA SINH VIEN:" << endl;
							cout << "THONG BAO\n";
							cout << "He thong chua co chuc nang sua sinh vien mong user thong cam!!\n";
							int me;
							cout << "Bam 0 de tro ve menu chinh:" << endl;
							cin >> me;
							if (me == 0)
							{
								return menu();
							}
							break;

				  }
				  default:
				  {
							 system("cls");
							 return menu();
							 break;
				  }
				  }
			  }
			  else 
				
				  return menu();
				  break;
	}
			  
				  /*  cout << "ban muon them sinh vien khong ?" << endl;
					cout << "bam 0 la khong muon them va quay lai menu,bam so con lai de them sinh vien:" ;
					cin >> n;

					if (n == 0)
					{
					cout << "ket thuc them sinh vien!!" << endl;;
					return menu();

					}

					else
					{
					Insertsv(l);

					}
					char m;
					cout << "ket thuc them sinh vien,nhap m de tro lai menu!" << endl;
					cin >>m ;
					if (m == m)
					{
					return menu();
					}
					cout << "ban muon tim sinh vien khong ?" << endl;
					cout << "bam 0 la khong muon tim va quay lai menu,bam so con lai de tim sinh vien:";
					cin >> n;

					if (n == 0)
					{
					cout << "ket thuc tim sinh vien!!" << endl;;
					return menu();

					}

					else
					{
					timsv(l);

					}
					cout << "ket thuc tim sinh vien,nhap m de tro lai menu!" << endl;
					cin >> m;
					if (m == m)
					{
					return menu();
					}*/
			
			 /* case 3:
			  {
						cout << "3.GIAO VIEN BO MON AVA1" << endl;
						break;
			  }
			  case 4:
			  {
						cout << "4.GIAO VIEN BO MON GDTC1" << endl;
						break;
			  }
			  case 5:
			  {
						cout << "5.GIAO VIEN BO MON NMLT" << endl;
						break;
			  }

			  case 6:
			  {
						cout << "6.GIAO VIEN BO MON PCMT" << endl;

						break;
			  }
			  case 7:
			  {
						cout << "7.GIAO VIEN BO MON PHAP LUAT" << endl;
						break;
			  }
			  case 8:
			  {
						cout << "8.GIAO VIEN BO MON TOAN CAO CAP" << endl;
						break;
			  }
			  case 9:
			  {
						cout << "9.GIAO VIEN BO MON THNMLT" << endl;
						break;
			  }
			  case 10:
			  {
						 cout << "10.GIAO VIEN BO MON THPCMT" << endl;
						 break;
			  }
			  case 11:
			  {
						 cout << "11.GIAO VIEN BO MON THUD" << endl;
						 break;
			  }
			  case 12:
			  {
						 cout << "12.GIAO VIEN BO MON VLDC" << endl;
						 break;
			  }*/

  case 3:
  {

			system("cls");
			cout << "THONG TIN DEV\n";
			cout << "Tran Quy Vinh - mssv:0306181097\n";
			cout << "Nguyen Minh Tan - mssv:0306181070\n";
			int me;
			cout << "Bam 0 de tro ve menu chinh:" << endl;
			cin >> me;
			if (me == 0)
			{
				return menu();
			}
  }
			  }
			
	}
	


void main()
{
	
	menu();
	
	system("pause");
}