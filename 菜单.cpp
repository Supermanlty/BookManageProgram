int i = -1;
    while (i != 0)
    {
        system("cls");
        cout << "1--图书信息录入" << endl;
        cout << "2--图书信息增加" << endl;
        cout << "3--图书信息删除" << endl;
        cout << "4--图书信息修改" << endl;
        cout << "5--图书信息查询" << endl;
        cout << "6--退出"<< endl;
        cin >> i;
        switch(i)
        {
            case 1:
            {
                system("cls");
                
                fflush(stdin);
                getchar();
                break;
            }
            
            case 2:
            {
                system("cls");

                fflush(stdin);
                getchar();
                break;
            }
            case 3:
            {
                system("cls");
                
                fflush(stdin);
                getchar();
                break;
            } 
            
            case 4:
            {
                system("cls");
                
                fflush(stdin);
                getchar();
                break;
            }
            case 5:
            {
                system("cls");
                
                fflush(stdin);
                getchar();
                break;  
            }
            
            case 6:
            {
                return 0;
            }
            default:
            {
                system("cls");
                cout << "Error option." << endl;
                fflush(stdin);
                getchar();
                break;
            }
    }
