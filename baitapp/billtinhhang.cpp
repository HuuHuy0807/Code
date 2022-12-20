#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

const float VAT = 0.1;

int numCharAtt;
void CountNumber()
{
}

typedef struct Shop
{
    int Day;
    int Month;
    int Year;
    char Customer_Name[50];
    char Item_Code[50];
    float Unit_Price[50];
    float Total_Money[50];
    int Quantity;
    int Number;
};

typedef struct Shopping
{
    // 1
    float My_Cay_Bo = 37;
    // 2
    float My_Cay_Hai_San = 45;
    // 3
    float My_Cay_Thap_Cam = 55;
    // 4
    float Su_Shi = 27;
    // 5
    float Banh_Trang_Tron = 15;
    // 6
    float Khan_Lanh = 3;
    // 7
    float Coca = 10;
    // 8
    float C2 = 10;
    // 9
    float Seven_Up = 10;
    // 10
    float Pesi = 10;
    // 11
    float Tra_Dao = 15;
    // 12
    float Tra_Sua = 25;
    // 13
    float Tra_Tac = 12;
};

float Search(int y)
{
    float Result;
    Shopping Items;
    switch (y)
    {
    case 1:
    {
        Result = Items.My_Cay_Bo;
        break;
    }
    case 2:
    {
        Result = Items.My_Cay_Hai_San;
        break;
    }
    case 3:
    {
        Result = Items.My_Cay_Thap_Cam;
        break;
    }
    case 4:
    {
        Result = Items.Su_Shi;
        break;
    }
    case 5:
    {
        Result = Items.Banh_Trang_Tron;
        break;
    }
    case 6:
    {
        Result = Items.Khan_Lanh;
        break;
    }
    case 7:
    {
        Result = Items.Coca;
        break;
    }
    case 8:
    {
        Result = Items.C2;
        break;
    }
    case 9:
    {
        Result = Items.Seven_Up;
        break;
    }
    case 10:
    {
        Result = Items.Pesi;
        break;
    }
    case 11:
    {
        Result = Items.Tra_Dao;
        break;
    }
    case 12:
    {
        Result = Items.Tra_Sua;
        break;
    }
    case 13:
    {
        Result = Items.Tra_Tac;
        break;
    }
    }
}

// Ham nhap Bill
void Input_Bill(Shop &Bill, int Items_Code[50], int Quantity[50], char *Items_Name[50][50])
{
    cout << "\t\tNHAP HOA DON\n";
    cout << "--------------------------------------------------" << endl;
    cout << "Ten khach: ";
    cin.getline(Bill.Customer_Name, 50);
    cout << "Ban so: ";
    cin >> Bill.Number;
    cout << "Ngay, thang, nam: \n";
    cout << "  Ngay: ";
    cin >> Bill.Day;
    cout << "  Thang: ";
    cin >> Bill.Month;
    cout << "  Nam: ";
    cin >> Bill.Year;
    cout << "-----------\n";
    int i = 0;
    int x = 1;
    while (x < 14 && x > 0)
    {
        cout << "Ma mat hang thu " << i + 1 << ": ";
        cin >> Items_Code[i];
        if (Items_Code[i] > 13 || Items_Code[i] < 1)
        {
            goto tt;
        }
        switch (Items_Code[i])
        {
        case 1:
        {
            Items_Name[i][50] = "My cay bo";
            break;
        }
        case 2:
        {
            Items_Name[i][50] = "My cay hai san";
            break;
        }
        case 3:
        {
            Items_Name[i][50] = "My cay thap cam";
            break;
        }
        case 4:
        {
            Items_Name[i][50] = "Su Shi";
            break;
        }
        case 5:
        {
            Items_Name[i][50] = "Banh trang tron";
            break;
        }
        case 6:
        {
            Items_Name[i][50] = "Khan lanh";
            break;
        }
        case 7:
        {
            Items_Name[i][50] = "Nuoc uong Coca";
            break;
        }
        case 8:
        {
            Items_Name[i][50] = "Nuoc uong C2";
            break;
        }
        case 9:
        {
            Items_Name[i][50] = "Nuoc uong 7 Up";
            break;
        }
        case 10:
        {
            Items_Name[i][50] = "Nuoc uong Pesi";
            break;
        }
        case 11:
        {
            Items_Name[i][50] = "Tra dao";
            break;
        }
        case 12:
        {
            Items_Name[i][50] = "Tra sua";
            break;
        }
        case 13:
        {
            Items_Name[i][50] = "Tra tac";
            break;
        }
        }
        cout << "So luong: ";
        cin >> Quantity[i];
        cout << endl;
        Bill.Quantity = x;
        x++;
        i++;
    }
tt:
    cout << Bill.Quantity << endl;
}

// Ham tinh tien tung mat hang
float Result_Item(Shop Bill, int Items_Code, int Quantity)
{
    float Result = 0;
    Shopping Items;

    if (Items_Code == 1)
    {
        Result = (float)Items.My_Cay_Bo * Quantity;
        return Result;
    }
    if (Items_Code == 2)
    {
        Result = (float)Items.My_Cay_Hai_San * Quantity;
        return Result;
    }
    if (Items_Code == 3)
    {
        Result = (float)Items.My_Cay_Thap_Cam * Quantity;
        return Result;
    }
    if (Items_Code == 4)
    {
        Result = (float)Items.Su_Shi * Quantity;
        return Result;
    }
    if (Items_Code == 5)
    {
        Result = (float)Items.Banh_Trang_Tron * Quantity;
        return Result;
    }
    if (Items_Code == 6)
    {
        Result = (float)Items.Khan_Lanh * Quantity;
        return Result;
    }
    if (Items_Code == 7)
    {
        Result = (float)Items.Coca * Quantity;
        return Result;
    }
    if (Items_Code == 8)
    {
        Result = (float)Items.C2 * Quantity;
        return Result;
    }
    if (Items_Code == 9)
    {
        Result = (float)Items.Seven_Up * Quantity;
        return Result;
    }
    if (Items_Code == 10)
    {
        Result = (float)Items.Pesi * Quantity;
        return Result;
    }
    if (Items_Code == 11)
    {
        Result = (float)Items.Tra_Dao * Quantity;
        return Result;
    }
    if (Items_Code == 12)
    {
        Result = (float)Items.Tra_Sua * Quantity;
        return Result;
    }
    if (Items_Code == 13)
    {
        Result = (float)Items.Tra_Tac * Quantity;
        return Result;
    }
}

// Ham tinh tien
void Result_Bill(Shop &Bill, int Items_Code[50], int Quantity[50], float Result_Items, float Items_Money[50], float &Result)
{
    Result = 0;
    for (int i = 0; i < Bill.Quantity; i++)
    {
        int x = Result_Item(Bill, Items_Code[i], Quantity[i]);
        Result += x;
        Items_Money[i] = x;
    }
}

void Write_File_Bill(Shop &Bill, int Items_Code[50], int Quantity[50], char *Items_Name[50][50], float Items_Money[50], float &Result)
{
    fstream File("TEXT.txt", ios::out);
    File << "\n";
    File << "BBQ 217\n";
    File << "36/34B, Phuong 1, TP.My Tho, Tien Giang\n";
    File << "SDT: 0356 457 999\n";
    File << "--------------------------------------------------" << endl;
    File << "\t\tHOA DON THANH TOAN\n\n";
    File << "Ten khach hang: " << Bill.Customer_Name << endl;
    File << "Ban so: " << Bill.Number << endl;
    File << "Ngay: " << Bill.Day << "/" << Bill.Month << "/" << Bill.Year << endl
         << endl;
    File << "Thong tin thanh toan:\n";
    File << "\t\t\t\tSo:............... " << endl;
    File << "__________________________________________________\n";
    for (int i = 0; i < Bill.Quantity; i++)
    {

        Search(Items_Code[i]);
        File << i + 1 << ". " << Items_Name[i][50] << endl;
        // File << "------------------------\n";
        File << "SL: " << Quantity[i] << "\n";
        File << "Don gia: " << Search(Items_Code[i]) << ".000 đ" << endl;
        File << "Thanh tien: " << Items_Money[i] << ".000 đ" << endl;
        File << "__________________________________________________\n";
    }
    File << " Tong cong: " << Result << ".000 đ" << endl;
    File << " Phi VAT: 10%\n";
    File << " [Thanh toan: " << (int)Result + (int)Result * 10 / 100 << ".000 đ]" << endl;
    File << "--------------------------------------------------" << endl;
    File << "Hen gap lai quy khach!\n\n";
    File << "                             Thu ngan\n\n\n\n";
    File << "                          Tran Thanh Tan\n";
}

void Output_Bill(Shop Bill, int Items_Code[50], int Quantity[50])
{
}

// Ham main
int main()
{
    Shop Bill;
    Shopping Items;
    int Items_Code[50];
    char *Items_Name[50][50];
    float Items_Money[50];
    int Quantity[50];
    float Result_Items;
    float Result;

    Input_Bill(Bill, Items_Code, Quantity, Items_Name);

    Result_Bill(Bill, Items_Code, Quantity, Result_Items, Items_Money, Result);

    Write_File_Bill(Bill, Items_Code, Quantity, Items_Name, Items_Money, Result);

    Output_Bill(Bill, Items_Code, Quantity);

    return 0;
}
