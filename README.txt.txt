Title: Assignement1
Status:
{Program behaviour is as expected. State diagram complete with transition table.
 State, Input, and output defined in des.h
 State machine loopsback to start state
 Every state has a transition to the exit state
 PID for Display and Controller are shown
 Display works properly as a server for controller
 Controller works a client for Display as well as a server for Inputs
 Inputs work as a server for controller
 FSM implemented in the controller as well as using function pointers
 Input asks for user input, if invalid input is entered it will stay in the current state
 gracufully terminates on exit}
 
Known Issues:
{Processes terminate on exit with the Momentics ide.
On NTO processes terminate and dont show when pidin command is used,
however the program does not run like the first time. 
Sometime causing duplicates diplay message or blocking when user is prompted for input }

Expected Grade:
{A}