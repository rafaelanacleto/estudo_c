
int main(int arg_count, char *args[])
{

    if (arg_count > 1)
    {
        name = string(args[1]);
        cout << "Welcome  " << name << endl;
        print_menu(name);
    }
    else
    {
        cout << "No Arguments" << endl;
    }

    return 0;
}

