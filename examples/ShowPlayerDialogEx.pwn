#include <a_samp>
#include <iorp>

new My_Dialog;
enum {
    Main_menu
};

public OnGameModeInit()
{
    My_Dialog = ObtainDialogID();
    return 1;
}

public OnPlayerConnect(playerid)
{
    ShowPlayerDialogEx(playerid, My_Dialog, Main_menu, DIALOG_STYLE_INPUT, "IORP Dialog", "Enter Your Name", "Submit", "Close", 999, "payload check");
    return 1;
}

public OnDialogResponseEx(playerid, dialogid, offsetid, response, listitem, inputtext[], extraid, payload[])
{
    if(dialogid != My_Dialog) return 1;
    if(offsetid == Main_menu)
    {
        if(!response) return 1;
        return 1;
    }
    return 1;
}
