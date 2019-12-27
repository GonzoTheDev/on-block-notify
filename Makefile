all: notify

notify:
	gcc notify.c -o notify 

notify_win:
	gcc notify_win.c -o notify_win.exe -lwsock32