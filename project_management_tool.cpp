#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <string>

using namespace std;

class Project {
    public:
    string cus_name,cus_id,cus_location;
    string pro_name,pro_id,customer_id;
    string con_id,con_value,start_date,end_date;
    string exp_manager_name,exp_lead_name;
    string exp_france_manager_name,exp_france_lead_name;
    public:
    virtual void project_details() 
    {
        cout<<"hi";
    }
    virtual void print_project_details() 
    {
        cout<<"hello";
    }
    virtual void search() 
    {
       cout<<"hi"<<endl;
    }
};
class Project2 : public Project {
    public:
    void project_details()
    {
        fstream file;
        //cout<<"----customer details -----"<<endl;
        cout<<"enter customer name "<<endl;
        cin>>cus_name;
        cout<<"enter customer id "<<endl;
        cin>>cus_id;
        cout<<"enter customer location "<<endl;
        cin>>cus_location;
        
        //cout<<"-----project details------"<<endl;
        cout<<"enter project name "<<endl;
        cin>>pro_name;
        cout<<"enter project id "<<endl;
        cin>>pro_id;
        cout<<"enter customer id "<<endl;
        cin>>customer_id;
        
       // cout<<"-----contract details------"<<endl;
        cout<<"enter contract id "<<endl;
        cin>>con_id;
        cout<<"enter contract value "<<endl;
        cin>>con_value;
        cout<<"enter start date "<<endl;
        cin>>start_date;
		cout<<"enter end date "<<endl;
        cin>>end_date;
        
        //cout<<"----expleo manager detail -----"<<endl;
        cout<<"enter expleo manager name "<<endl;
        cin>>exp_manager_name;
        
       // cout<<"----expleo lead detail -----"<<endl;
        cout<<"enter expleo lead name "<<endl;
        cin>>exp_lead_name;
        
        //cout<<"----expleo france manager detail -----"<<endl;
        cout<<"enter expleo france manager name "<<endl;
        cin>>exp_france_manager_name;
        
       // cout<<"----expleo france  lead detail -----"<<endl;
        cout<<"enter expleo france lead name "<<endl;
        cin>>exp_france_lead_name;
        
        
        
        file.open("n1.txt",ios::out | ios::app);
        file <<"\n"<<cus_name<<" "<< cus_id <<" " <<cus_location<<"\n"<<"\n"<<pro_name<<" "<<pro_id<<" "<<customer_id<<"\n"<<"\n"<<con_id<<" "<<con_value<<" "<<start_date<<" "<<end_date<<"\n"<<"\n"<<exp_manager_name<<"\n"<<"\n"<<exp_lead_name<<"\n"<<"\n"<<exp_france_manager_name<<"\n"<<"\n"<<exp_france_lead_name<<"\n"; 
        file.close();
    }
    void print_project_details()
    {
        fstream file;
        int total = 1;
        file.open("n1.txt", ios::in);
        if (!file)
        {
        cout << "no file... ";
        file.close();
        }
        else
        {
        file >> cus_name >> cus_id >> cus_location >> pro_name >> pro_id >> customer_id >> con_id >> con_value >> start_date >> end_date >> exp_manager_name >> exp_lead_name >> exp_france_manager_name >> exp_france_lead_name;

        while (!file.eof())
        {
        //cout<<"----details of customer ------"<<endl;
        cout<<"customer name : "<<cus_name<<endl;
        cout<<"customer id : "<<cus_id<<endl;
        cout<<"customer location : "<<cus_location<<endl; 
        //cout<<"----details of project-----"<<endl;
        cout<<"project name :"<<pro_name<<endl;
        cout<<"project id :"<<pro_id<<endl;
        cout<<"customer id: "<<customer_id<<endl;
       // cout<<"-----contract details-------"<<endl;
        cout<<"contract id :"<<con_id<<endl;
        cout<<"contract value :"<<con_value<<endl;
        cout<<"start date :"<<start_date<<endl;
        cout<<"end date :"<<end_date<<endl;
       // cout<<"---manager detail---"<<endl;
        cout<<"expleo manager :"<<exp_manager_name<<endl;
        //cout<<"---lead detail---"<<endl;
        cout<<"expleo lead :"<<exp_lead_name<<endl;
        //cout<<"---france manager detail---"<<endl;
        cout<<"france manager :"<<exp_france_manager_name<<endl;
       // cout<<"---france lead detail---"<<endl;
        cout<<"france lead :"<<exp_france_lead_name<<endl;
        file >>cus_name >> cus_id >> cus_location >>pro_name >>pro_id>> customer_id>>con_id>>con_value>>start_date>>end_date>>exp_manager_name>>exp_lead_name>>exp_france_manager_name>>exp_france_lead_name;
        }
        }
        file.close();
    }
    
       
};
class Project3 :public Project
{
    
    void search()
    {
        fstream file;
        int found=0;
        file.open("n1.txt",ios::in);
        if(!file)
        {
            cout<<"no data"<<endl;
        }
        else
        {
            string detail;
            cout<<"enter any detail :"<<endl;
            cin>>detail;
            
            file >>cus_name >> cus_id >> cus_location >>pro_name >>pro_id>> customer_id>>con_id>>con_value>>start_date>>end_date>>exp_manager_name>>exp_lead_name>>exp_france_manager_name>>exp_france_lead_name;
            while(!file.eof())
            {
            if(detail ==cus_name)
                {
                   
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail ==cus_id)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++; 
                }
                else if(detail ==cus_location)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail == pro_name)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail == pro_id)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail == customer_id)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail == con_id)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail == con_value)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail == start_date)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail == end_date)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail ==exp_manager_name)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail ==exp_lead_name)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail ==exp_france_manager_name)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                else if(detail ==exp_france_manager_name)
                {
                    cout<<"customer name : "<<cus_name<<endl;
                    cout<<"customer id : "<<cus_id<<endl;
                    cout<<"customer location : "<<cus_location<<endl; 
                    cout<<"project name :"<<pro_name<<endl;
                    cout<<"project id :"<<pro_id<<endl;
                    cout<<"customer id: "<<customer_id<<endl;
                    cout<<"contract id :"<<con_id<<endl;
                    cout<<"contract value :"<<con_value<<endl;
                    cout<<"start date :"<<start_date<<endl;
                    cout<<"end date :"<<end_date<<endl;
                    cout<<"expleo manager :"<<exp_manager_name<<endl;
                    cout<<"expleo lead :"<<exp_lead_name<<endl;
                    cout<<"france manager :"<<exp_france_manager_name<<endl;
                    cout<<"france lead :"<<exp_france_lead_name<<endl;
                    found++;
                }
                file >>cus_name >> cus_id >> cus_location >>pro_name >>pro_id>> customer_id>>con_id>>con_value>>start_date>>end_date>>exp_manager_name>>exp_lead_name>>exp_france_manager_name>>exp_france_lead_name;
                if(found == 0)
                {
                    cout<<"."<<endl;
                }
                
            }    

            file.close();
        }
    }
};


void function (Project *ptr)
{
    ptr->project_details();
    ptr->print_project_details();
}

int main()
{
    Project *ptr1;
    Project *ptr2;
    
    
    
    Project2 senobj;
    Project3 thirdobj;
    
   
    
    ptr1=&senobj;
    ptr2=&thirdobj;
    int num;
    menu:
    cout<<"---project tool---"<<endl;
    cout<<"1.add project details"<<endl;
    cout<<"2.search"<<endl;
    cout<<"3.exit"<<endl;
    
    
    cout<<"enter [1/2/3] :"<<endl;
    cin>>num;
    switch(num)
    {
        case 1:
        function(ptr1);
        goto menu;
        break;
        
        case 2:
        ptr2->search();
        goto menu;
        break;
        
        case 3:
        cout<<"Program terminated"<<endl;
        exit(0);
    }
    
    return 1;
    


}



