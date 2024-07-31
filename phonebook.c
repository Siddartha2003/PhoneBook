#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_CONTACTS 250
FILE *ptr;

int i,n,p,total=6;
struct phonebook{
    char name[100],number[100],address[100],email[100],category[100],DOB[100];
    }a,all[MAX_CONTACTS];

int START();
int DELETE();
int EDIT_EMAIL();
int EDIT_NAME();
int EDIT_NUMBER();
int EDIT_ADDRESS();
int OPTIONS();
int ADD_CONTACT();
int SEARCH_CONTACT();
int ALL_CONTACTS();
int EDIT_CAT();
int EDIT_DoB();
int OPT();
int DELETE_ALL();
int DETAILS();
int SAVE_CONTACTS();

int main()
{
    DETAILS();
    START();
    SAVE_CONTACTS();
    return 0;
}    

int START()
{
     while(1)
     {  
        p=0;
        printf("\n-----------------------WELCOME TO PHONEBOOK-------------------------");
        printf("\nChoose");
        printf("\n1. Add contact");
        printf("\n2. Search contact");
        printf("\n3. Show all contacts");
        printf("\n4. Delete a contact");
        printf("\n5. Exit\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1: ADD_CONTACT();
            break;
        case 2: SEARCH_CONTACT();
            break;
        case 3: ALL_CONTACTS();
            break;
        case 4: DELETE();
            break;
        case 5:     
        SAVE_CONTACTS();
        break;            
        default:printf("\nInvalid Input");
            break;
        }
        if(p==1)
        {
            printf("\nThank you!");;
            break;
        }
    }
    return 0;
}

int DELETE()
{
    char temp1[20];
    int x;
    printf("\nEnter name : ");
    scanf("%s",temp1);
    printf("\nPress 1.Continue");
    printf("\nPress 2.Cancel\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        break;
        case 2:
        return 0;
    }
    for(i=0;i<total;i++)
    {
        if(strcmp(temp1,all[i].name)==0)
        {
            while(i<total)
            {
            if(i==total-1)
            {
                total--;
                break;
            }
            else
            {
                all[i]=all[i+1];
              }
              i++;
            }
            printf("\nContact successfully deleted");
            return 0;
        }
    }
    printf("\nContact not found");
    return 0;
}   

int EDIT_EMAIL()
{
    int x;
    printf("\nPresent email id : %s",all[i].email);
    printf("\nPress 1.Delete Email ID");
    printf("\nPress 2.Reset Email ID\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        strcpy(all[i].email,"___");
        return 0;
        case 2:
        break;
        default:
        printf("\nInvalid Input");
    }
    printf("\nEnter new email id : ");
    scanf("%s",all[i].email);
    printf("\nEmail id updated successfully");
     return 0;
} 

int EDIT_NAME()
{
    printf("\nPresent name : %s",all[i].name);
    printf("\nEnter new name : ");
    scanf("%s",all[i].name);
    printf("\nName updated successfully");
     return 0;
} 

int EDIT_NUMBER()
{
    printf("\nPresent number : %s",all[i].number);
    printf("\nEnter new number : ");
    scanf("%s",all[i].number);
    printf("\nNumber updated successfully");
     return 0;
}

int EDIT_ADDRESS()
{
    int x;
    printf("\nPresent address : %s",all[i].address);
    printf("\nPress 1.Delete Address");
    printf("\nPress 2.Reset Address\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        strcpy(all[i].address,"___");
        return 0;
        case 2:
        break;
        default:
        printf("\nInvalid Input");
    }
    printf("\nEnter new address : ");
    scanf("%s",all[i].address);
    printf("\nAddress updated successfully");
     return 0;
}

int EDIT_CAT()
{
    int select,x;
    printf("\nPresent category : %s",all[i].category);
    printf("\nPress 1.Delete Category");
    printf("\nPress 2.Reset Category\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        strcpy(all[i].email,"___");
        return 0;
        case 2:
        break;
        default:
        printf("\nInvalid Input");
    }
    printf("\nSelect category : ");
    printf("\n1.Family");
    printf("\n2.Friend");
    printf("\n3.Business");
    printf("\n4.Work");
    printf("\n5.Emergency");
    printf("\n6.Myself");
    printf("\n7.Other\n");
    scanf("%d",&select);
    switch(select)
    {
        case 1:strcpy(a.category,"Family");
        break;
        case 2:strcpy(a.category,"Friend");
        break;
        case 3:strcpy(a.category,"Business");
        break;
        case 4:strcpy(a.category,"Work");
        break;
        case 5:strcpy(a.category,"Emergency");
        break;
        case 6:strcpy(a.category,"Myself");
        break;
        case 7:strcpy(a.category,"Other");
        break;
        default:
        printf("\nInvalid Input");
        break;
    }
    printf("\nCategory updated successfully");
     return 0;
}

int EDIT_DoB()
{
    int x;
    printf("\nPresent DoB : %s",all[i].DOB);
    printf("\nPress 1.Delete DoB");
    printf("\nPress 2.Reset DoB\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        strcpy(all[i].DOB,"___");
        return 0;
        case 2:
        break;
        default:
        printf("\nInvalid Input");
    }
    printf("\nEnter DoB : ");
    scanf("%s",all[i].DOB);
}

int OPTIONS()
{
    int edit;
    if(all[i].number=="911")
    {
        printf("\nCan't edit this contact");
        return 0;
    }
    while(1)
    {
    printf("\nChoose");
    printf("\n1. Edit name");
    printf("\n2. Edit number");
    printf("\n3. Edit address");
    printf("\n4. Edit email id");
    printf("\n5. Edit category");
    printf("\n6. Edit DoB");
    printf("\n7. Delete");
    printf("\n8. Back\n");
    scanf("%d",&edit);
    switch(edit)
    {
        case 1: EDIT_NAME();
            break;
        case 2: EDIT_NUMBER(); 
            break;
        case 3: EDIT_ADDRESS();
            break;    
        case 4:
            EDIT_EMAIL();
            break;
        case 5:
            EDIT_CAT(); 
        case 6:
            EDIT_DoB();       
        case 7:     
             while(i<total){
            if(i==total-1)
            {
                total--;
                break;
            }
            else
            {
                all[i]=all[i+1];
              }
              i++;
            }
            printf("\nContact successfully deleted");
            return 0;
        case 8: START(); 
        break;   
        default: printf("\nInvalid Input : ");  
            break;     
        }
    }
     return 0;
}

int ADD_CONTACT()
{
    int select;
    if(total+1!=MAX_CONTACTS)
    {
        int opt;
    printf("\nEnter number : ");
    scanf("%s",a.number);
    for(i=0;i<total;i++)
    {   
        if(strcmp(a.number,all[i].number)==0)
        {
            printf("\nNumber already exist!");
            return 0;
        }
      }
    
    printf("\nEnter name : ");
    scanf("%s",a.name);
    for(i=0;i<total;i++)
    {
        if(a.name==all[i].name)
        {
            printf("\nA contact under this name already exists");
            return 0;
        }
    }
    printf("\nPress 1.Add more details");
    printf("\nPress 2.Save\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: 
        break;
        case 2:
        strcpy(a.address,"___");
        strcpy(a.category,"___");
        strcpy(a.DOB,"___");
        strcpy(a.email,"___");
        all[total]=a;
        total++;
        printf("\nContact added successfully");
        return 0;
        default:
        printf("\nPlease Invalid Input");
    }
    printf("\nEnter address : ");
    scanf("%s",a.address);
    printf("\nEnter Email id : ");
    scanf("%s",a.email);
    printf("\nSelect category : ");
    printf("\n1.Family");
    printf("\n2.Friend");
    printf("\n3.Business");
    printf("\n4.Work");
    printf("\n5.Emergency");
    printf("\n6.Myself");
    printf("\n7.Other\n");
    scanf("%d",&select);
    switch(select)
    {
        case 1:strcpy(a.category,"Family");
        break;
        case 2:strcpy(a.category,"Friend");
        break;
        case 3:strcpy(a.category,"Business");
        break;
        case 4:strcpy(a.category,"Work");
        break;
        case 5:strcpy(a.category,"Emergency");
        break;
        case 6:strcpy(a.category,"Myself");
        break;
        case 7:strcpy(a.category,"Other");
        break;
        default:
        printf("\nInvalid Input");
        break;
    }
    printf("\nEnter DoB(DD-MM-YYYY) : ");
    scanf("%s",a.DOB);
    all[total]=a;
    total++;
    printf("\nContact added successfully");
    }
    else
        printf("\nContacts limit exceeded");
     return 0;    
}

int SEARCH_CONTACT()
{
    int opt,a,x;
    char temp[20];
    printf("\nEnter name : ");
    scanf("%s",temp);
    for(i=0;i<total;i++)
    {
    if(strcmp(temp,all[i].name)==0)
    {
       a=1;
       break;
    }
 }
 if(a==1)
 {
    printf("\nNumber : %s",all[i].number);
    printf("\nPress 1.Show more details");
    printf("\nPress 2.Back\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        break;
        case 2: START();
        break;
        default:
        printf("\nInvalid Input");
    }
    printf("\nAddress : %s",all[i].address);
    printf("\nEmail id : %s",all[i].email);
    printf("\nCategory : %s",all[i].category);
    printf("\nDoB : %s",all[i].DOB);
 }
 else
 {
    return 0;
 }
 printf("\nChoose");
 printf("\n1. Edit");
 printf("\n2. Back\n");
 scanf("%d",&opt);
 switch(opt)
 {
    case 1:OPTIONS();
        break;
    case 2: START();
    break;
    default:
        printf("\nInvalid Input");
 }
  return 0;
}

int ALL_CONTACTS()
{
    int opt;
    if(total>0)
    {
    for(int i=0;i<total;i++)
    {
        printf("\n%d. %s",i+1,all[i].name);
        printf("\t%s",all[i].number);
        }
    }
    else
    {
        printf("\nNo contacts found ");
    }
    printf("\nPress 1.Options");
    printf("\nPress 2.Back");
    printf("\nPress 3.Exit\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1: OPT();
        break;
        case 2: START();
        break;
        case 3: SAVE_CONTACTS();
        break;
        default:
        printf("\nPlease Invalid Input");
        break;
    }
     return 0;
}

int OPT()
{
    int x;
    printf("\nPress 1.Delete all contacts");
    printf("\nPress 2.Back");
    printf("\nPress 3.Exit\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:DELETE_ALL();
        break;
        case 2:ALL_CONTACTS();
        break;
        case 3: SAVE_CONTACTS();
        break;
    }
    return 0;
}

int DELETE_ALL()
{
    for(i=0;i<total;i++)
    {
        free(all[i].address);
        free(all[i].category);
        free(all[i].DOB);
        free(all[i].email);
        free(all[i].name);
        free(all[i].number);
    }
    printf("\nAll contacts deleted successfully");
    return 0;
}
int DETAILS()
{
    strcpy(all[0].name,"siddu");
    strcpy(all[0].address,"Srinivas Nagar");
    strcpy(all[0].email,"siddarthapeeka2003@gmail.com");
    strcpy(all[0].number,"7569252827");
    strcpy(all[0].category,"Myself");
    strcpy(all[0].DOB,"26-12-2003");
    strcpy(all[1].name,"vignesh");
    strcpy(all[1].address,"Gandhi Nagar");
    strcpy(all[1].email,"vignesh@gmail.com");
    strcpy(all[1].number,"4589249876");
    strcpy(all[1].category,"Friend");
    strcpy(all[1].DOB,"09-03-2005");
    strcpy(all[2].name,"shivani");
    strcpy(all[2].address,"Nizamabad");
    strcpy(all[2].email,"shivanikamani@gmail.com");
    strcpy(all[2].number,"9089234658");
    strcpy(all[2].category,"Family");
    strcpy(all[2].DOB,"04-09-2004");
    strcpy(all[3].name,"tejasai");
    strcpy(all[3].address,"Madikonda");
    strcpy(all[3].email,"tejasai@gmail.com");
    strcpy(all[3].number,"7168451354");
    strcpy(all[3].category,"Friend");
    strcpy(all[3].DOB,"16-12-2004");
    strcpy(all[4].name,"saketh");
    strcpy(all[4].address,"Srinivas Nagar");
    strcpy(all[4].email,"sakethkumar@gmail.com");
    strcpy(all[4].number,"8648348312");
    strcpy(all[4].category,"Friend");
    strcpy(all[4].DOB,"01-02-2004");
    strcpy(all[5].name,"Emergency");
    strcpy(all[5].address,"___");
    strcpy(all[5].email,"___");
    strcpy(all[5].number,"911");
    strcpy(all[5].category,"Emergency");
    strcpy(all[5].DOB,"___");
    return 0;
}

int SAVE_CONTACTS()
{
    remove("C:\\Users\\Sidda\\OneDrive\\Desktop\\contacts.txt");
    ptr=fopen("C:\\Users\\Sidda\\OneDrive\\Desktop\\contacts.txt","w");
    if (ptr == NULL) {
        printf("\nFailed to open file\n");
        return 0;
    }
    for (i = 0; i < total; i++) {
        fprintf(ptr,"\n\nName: %s",all[i].name);
        fprintf(ptr,"\n\tNumber: %s",all[i].number);
        fprintf(ptr,"\n\tAddress: %s",all[i].address);
        fprintf(ptr,"\n\tEmail id: %s",all[i].email);
        fprintf(ptr,"\n\tCategory: %s",all[i].category);
        fprintf(ptr,"\n\tDate of Birth: %s",all[i].DOB);
    }
    fclose(ptr);
    printf("\nContacts saved to file\n");
    printf("\n\tThankyou");
    exit(0);
    return 0;
}