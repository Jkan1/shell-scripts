# linux_commands

* ps aux (all running processes)
* ps -ef (with ppid)
* ps lax (new colums - userid, priority, flag)
* jobs
* fg `<jobnum>` (bring job from bg to fg)
* bg `<jobnum>` (run job in bg)
* kill %`<jobnum>` (kill bg job)
* kill -l (list kill signals)
* pgrep `<sevicename>` -l (find process)
* pgrep -u `<username>` -l (find by user)
* kill -`<signal>` `<pid>` (SIGKILL immediate)
* pkill `<servicename>` (terminate by service not just a process)
* w (check all logged in users in system)
* pkill -9 -t `<ttyname>` (kick out user)  

* uptime
* cat /proc/cpuinfo (cpu info)
* `command` & (to run command in bg)
* top (press m,1,p,<shift>+m,k)

* systemctl status `<servicename>`.service
* ps -up `<pid>`
* systemctl stop `<servicename>`.service
* systemctl disable `<servicename>`.service (no autostart on sys boot)
* systemctl mask/unmask `<servicename>` (to not allow other users to start)

* cat /var/log (system service logs)
* tail -f `<filename>` (follow last lines)
* vi /etc/rsyslog.conf

* timedatectl
* timedatectl list-timezones
* timedatectl set-timezone `<timezonename>`

* hostnamectl set-hostname `<a.example.com>`
* vi /etc/hosts (sys first checks this file to resolve hosts, then DNS)
* cat /etc/resolve.conf (DNS info)

### Add new DNS
* nmcli con mod "default" ipv4.dns 8.8.8.8
* nmcli con down default
* nmcli con up default
