### Comands

* vi crontab
* crontab -e (to edit crontab)
* 5 (*) `<username>` `<command>` (format of cron)
* crontab -l (to list cron jobs)
* crontab -l -u `<username>` (list all jobs by user)
* crontab -r -u `<username>` (remove all jobs by user)
* cron.deny (file to add user to deny use of crontab)
* cron.d (directory, any files inside will be read and run)
* cron.daily, cron.hourly, cron.monthly (directories)

* vi /etc/anacrontab (run jobs even after downtime, doesn't assume 24/7 uptime)
* `<period_days>` `<delay_minutes>` `<jobname>` `<command>` (format of anacron)

* journalctl -xn (to check job)

* yum install at (utility)
* systemctl enable atd (enable at)
* systemctl start atd
* at now +6 hours
  * reboot or any other commands
  * Exit (ctrl + d)
* atq (list all jobs)
* atrm `<jobnum>` (remove job)
