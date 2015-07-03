#include <stdio.h>
#include <conio.h>
#include <malloc.h>
/* ==== Khai bao danh sach kieu con tro ====*/
typedef int ElementType;
typedef struct Node{
 ElementType Element;
 Node* 	     Next;
}Node;
typedef Node*    Position;
typedef Position List;

/*==== Cac phep toan tren danh sach ====*/
/*== Ham tao danh sach rong ==*/
void MakeNull_List(List *Header){
 (*Header)       = (Node*)malloc(sizeof(Node));
 (*Header)->Next = NULL;
}

int Empty_List(List L){
 return (L->Next == NULL);
}
/*== Cac ham dinh vi tri trong danh sach lien ket ===*/
Position FirstList(List L)
{return L; }

Position Next ( Position P, List L)
{ return P->Next; }

Position EndList (List L)
{
Position P;
P=L;
while (P->Next != NULL) P=P->Next;
return P;
}

// Ham tra ve vi tri truoc P trong danh sach
Position Previous (Position P, List L)
{
  if (P==L)  // p==FirstList
    printf("\nKhong co vi tri dung truoc \n");
  else
    { Position T=L;
      while (T->Next != P)
        T=T->Next; 
      return T;
    }
}


/*== Ham chen phan tu X vao vi tri P ==*/
void Insert_List(ElementType X, Position P, List *L){
 Position T;
 T = (Node*)malloc(sizeof(Node));
 T->Element = X;//4
 T->Next    = P->Next;//3
 P->Next    = T;//2
}
/*== Ham xoa phan tu tai vi tri P ==*/
void Delete_List(Position P, List *L){
 Position T;
 if(P->Next != NULL){
	T = P->Next;
	P->Next = P->Next->Next;//T->Next;
	free(T);
 }
 else printf("\nLoi ! Khong the xoa");
}
/*== Ham tim vi tri phan tu dau tien co noi dung X ==*/
Position Locate(ElementType X, List L){
 Position P=L;
 int found = 0;
 while ((P->Next != NULL) && (found ==0)){
	if(P->Next->Element == X)
	  found=1;
	else P=P->Next;
 }
 return P;
}
/*== Ham lay noi dung phan tu tai vi tri  P ==*/
ElementType Retrieve(Position P, List L){
 if(P->Next != NULL) // P <> Endlist
   return P->Next->Element;
 else printf("\n\n Vi tri khong hop le ");
}

/*============ Ham in danh sach =================================*/
void Print_List(List L){
     Position P;
     P = FirstList(L);
     while(P != EndList(L)){
	printf("%10d",Retrieve(P,L));
	P = Next(P,L);
     }
}
/*============ Ket thuc ham in danh sach ========================*/
/*============ Ham nhap danh sach ===============================*/
//void read_list(list *l){
//    int i,n;
//    elementtype x;
//    makenull_list(l);
//    printf("\nnhap vao so phan tu trong danh sach : ");
//    scanf("%d",&n);
//	fflush(stdin);
//    for(i=1; i<= n; i++){
//       printf("\nphan tu thu %d la ",i);
//       scanf("%d",&x);fflush(stdin);
//       insert_list(x,endlist(*l),l);
//    }
//}
