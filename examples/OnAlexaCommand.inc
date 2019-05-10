
public OnAlexaCommand(playerid, const text[])
{
  // if player type "ucp" or "user control panel" The code below will be executed
	if(IsStringContainWords(text, "ucp, user control panel")) // , Used to separate words
  {
    show_ucp(playerid);
  }
  return -1; // -1 should be used instead of 1 or 0
}
