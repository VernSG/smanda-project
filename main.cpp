#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
  char kode_sepatu,merk_sepatu[15];
  int jumlah_beli,harga_sepatu,total_bayar;

  cout<<"penjualan sepatu online                                  :"<<endl;
  cout<<"=======================                                  :"<<endl;
  cout<<"kode sepatu [A/H/C/N/V/]                                 :";cin>>kode_sepatu;
  if(kode_sepatu=='A'||kode_sepatu=='a')
  { 
    strcpy(merk_sepatu,"ADIDAS");
    harga_sepatu=1500000;
  }
  else if(kode_sepatu=='H'||kode_sepatu=='h')
  {
    strcpy(merk_sepatu,"HOKA");
    harga_sepatu=5200000;
  }
  else if(kode_sepatu=='C'||kode_sepatu=='c')
  {
    strcpy(merk_sepatu,"CONVERS");
    harga_sepatu=1200000;
  }
  else if(kode_sepatu=='N'|| kode_sepatu=='n')
  {
    strcpy(merk_sepatu,"NEW BALANCE");
    harga_sepatu=2350000;
  }
  else if(kode_sepatu=='V'||kode_sepatu=='v')
  {
    strcpy(merk_sepatu,"VANS");
    harga_sepatu=800000;
  }
  else
  {
    cout<<"masukan kode yang benar";
  }
  cout<<"jumlah beli                                              :";cin>>jumlah_beli;


  cout<<"data penjualan sepatu online"<<endl;
  cout<<"============================"<<endl;
  cout<<"merk sepaatu              : "<<merk_sepatu<<endl;
  cout<<"harga sepatu              : "<<harga_sepatu<<endl;

if(jumlah_beli >=0)
{
  total_bayar=jumlah_beli*harga_sepatu;
  cout<<"total bayar               : "<<total_bayar<<endl;
    return 0;
}
}