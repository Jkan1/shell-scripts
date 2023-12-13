# linux_commands

* Terminal
  * `<username>` @ `<machine_name>` `<current_directory_path>` `<$>` (Not user root) or `<#>` (Root User)
  * ~ (Home Directory of `<username>`)

* Important Commands
  * `<command>` --help (Shows Command Options and Usage)
  * man `<command>`   (Manual Page from Linux)
  * pwd (Print Working Directory)
  * uptime  (System uptime and Load, Users logged In )
  * who  (Logged In Users; Username and Terminal No.)  
  * whoami (Logged in Username)

* Basic Shell commands
  * locate `<filename>` & find `<path>` -name "`<filename>`" (to find files)
  * mkdir -p parentFolder/childFolder (create parent folders)
  * sudo su `<username>` (substitute user)
  * sudo su - `<username>` (Login shell, loads `<username>` home directory profile ENV and configs)
  * sudo service `<service>` start|stop|restart|reload|status 
  * sudo systemctl enable|status `<service>`

* User Management
  * sudo useradd `<options>` `<username>` (Only root)
  * sudo passwd `<username>` (change password)
  * sudo useradd -m `<username>` (-m --create-home)
  * id -u `<userid>` (user Id)
  * id `<username>` (as above - for user details)
  * sudo useradd -g `<group>` `<username>`
  * useradd -aG `<group>` `<username>` (append user to group) (ex. `wheel` group is admin group)
  * sudo useradd -e `<2019-01-22>` `<username>` (temporary user, set account expiry) 
  * sudo chage -l `<username>` (user password expiry details)
  * useradd -D (default command values) (`/etc/default/useradd`)
  * passwd --expire `<username>` (expire user password)
  * chage --lastday 0 `<username>` (using chage command) (ex. -M:max days,-m: min days)
  * userdel `<username>`
  * usermod -L `<username>` (lock)
  * usermod -U `<username>` (unlock)
  * usermod -g `<groupname>` `<username>` (set primary group for user)
  * usermod -G `<groupname>` `<username>` (add 1 secondary group for user)
  * usermod -aG `<groupname>` `<username>` (append group for user)
  * groupadd -r `<groupname>` (create system group with system group id)
  * groupmod -n `<newgroupname>` `<groupname>` (rename group)
  * groupmod -g `<newgroupid>` `<groupname>` (updated group id)

* Permission Management
  * read = 4, write = 2, execute = 1
  * `d rwx r-x r--  <username>  <group>   <filename>` (d:directory, -:file)
  * r : Permission to read the file.
  * w : Permission to write (or delete) the file.
  * x : Permission to execute the file, or, in the case of a directory, search it.
  * u : owner file's owner (first 3 bits `rwx`)
  * g : group users who are members of the file's group (second 3 bits `r-x`)
  * o : others users who are neither the owner nor members of group (last 3 bits `r--`)
  * a : all All three of the above, same as ugo
  * chmod 755 `<filename>` (octal mode)
  * chmod u=rx `<filename>`
  * sudo chown `<username>` `<filename>`
  * chown `<username>`:`<group>` `<filename>`
  * chmod u+s `<filename>` (setuid permission to run with permissions of owner)
  * chmod g+s `<filename>` (setgid permission - group set from directory group)
  * chmod o+t `<filename>` (sticky bit permission - only owner, or root can rename/delete file)
  * visudo (to edit user permissions to use commands)
	* ex: user1 ALL = NOPASSWD :/bin/rpm, /usr/bin/yum
	* i.e., `<username>` `<hosts>` = `<no password need on command use>` : `<command1>`, `<command2>`

* Network Commands
  * ip addr
  * ifconfig
  * Check open Ports
    * sudo netstat -ntlpu | grep LISTEN
    * sudo lsof -i -P -n | grep LISTEN (List Of Open File)
    * netstat -Lan (check connection queue size)

* Generate Private/Public Keys
  * ssh-keygen -t rsa -C "your_email@example.com" (-t algorithm)
  * ssh configuration
    * touch ~/.ssh/config
    * Host * (github.com)
    * HostName `<IP>`
    * PreferredAuthentications publickey
    * AddKeysToAgent yes
    * IdentityFile ~/.ssh/id_rsa
  * ssh -T git@github.com (Test connection to the Host)
  * ssh tunneling
    * Host ssh configuration
      * touch ~/.ssh/config
      * `#Tunnel Host Config`
      * Host ostunnel
	     * HostName `<IP>`
	     * User `<user>`
	     * IdentitiesOnly yes
	     * IdentityFile ~/.ssh/id_rsa.ssh (or path to PEM.pem file)
	     * LocalForward `<LOCAL_PORT>` `HOST_IP_ADDRESS:443`

* Firewall Commands
  * systemctl start firewalld
  * systemctl stop firewalld 
  * firewall-cmd --list-ports
  * firewall-cmd --get-zones
  * firewall-cmd --get-zone-of-interface=eth0
  * firewall-cmd --add-port 1191/tcp (open port 1191 for TCP traffic)
  * firewall-cmd --permanent --add-port 1191/tcp (open port 1191 for TCP traffic & reboot persistent)
  * firewall-cmd --permanent --add-port 60000-61000/tcp (range of ports)
  * sudo ufw enable (Uncomplicated Firewall (UFW))
  * sudo ufw disable 
  * sudo ufw allow 1191/tcp
  * sudo ufw allow 60000-61000/tcp


