#include<iostream>
#include<string>
#include<cstdio>
#include<cctype>
#include<vector>
#include<bitset>

using namespace std;



class CAnimal{
public:
    virtual void Speak() = 0;
};

class CCat:public CAnimal
{
    public:
        void CatchMice(){cout<<"I caught a mouse!"<<endl;}
        void Speak(){cout<<"Meow"<<endl;}
};

class CDog:public CAnimal{
    public:
        void WagTail(){cout<<"Dog��I wagged my tail"<<endl;}
        void Speak(){cout<<"wang"<<endl;}
};

class CBook{

};

void DetermineType(CAnimal *pAnimal)
{
    CDog* pDog = dynamic_cast<CDog *>(pAnimal);
    if(pDog)
    {
        cout<<"The animal is the dog!!"<<endl;
        pDog->WagTail();
    }


}
int main1(){

    double dPi = 3.14;
    int nNum = static_cast<int>(dPi);//��̬ת�����ڱ����ʱ����һЩ�����ļ��

    int nNum2 = (int)dPi;

    int nNum3 = dPi;

cout<< nNum << nNum2 << nNum3 << endl;
//��ò�Ҫʹ��ǿ������ת��
    return 0;

}

int main2()
{
    char *pszString = "Hello World!";
    int *pBuf = (int *)pszString;//c ǿ��ת��
    //int *pBuf2 = static_cast<int *>(pszString);    //ת����ȥ���������ָ���޷�ת��
    int *pBuf3 = reinterpret_cast<int *>(pszString);

    return 0;
}
int main3()
{
    CAnimal *pAnimal = new CCat();
    CCat *pCat1 = static_cast<CCat *>(pAnimal);
    CCat *pCat2 = (CCat *)pAnimal;
////CBook *pBook = static_cast<CBook *>(pAnimal);//��ΪCBook��pAnimal������أ����Բ�����
    CBook *pBook1 = (CBook *)pAnimal;//C style��
    CBook *pBook2 = reinterpret_cast<CBook *>(pAnimal);//C++ style!
    return 0;

}

int main()
{

    CAnimal *p;
    p = NULL;
    DetermineType(p);
    const char *pc_str = "hello world!";
    char *pc = const_cast<char *>(pc_str);
    char *pc2 = (char *)pc_str;
    return 0;
}

