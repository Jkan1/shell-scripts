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
  * mkdir -p parentFolder/childFolder (create parent folders)
  * sudo su `<username>` (substitute user)
  * sudo su - `<username>` (Login shell, loads `<username>` home directory profile ENV and configs)
  * sudo service `<service>` start|stop|restart|reload|status 
  * sudo systemctl enable|status `<service>`

* User Management
  * sudo useradd `<options>` `<username>` (Only root)
  * sudo passwd `<username>`
  * sudo useradd -m `<username>` (-m --create-home)
  * id -u `<username>` (user Id)
  * sudo useradd -g `<group>` `<username>`
  * sudo useradd -e `<2019-01-22>` `<username>` (temporary user, set account expiry) 
  * sudo chage -l `<username>` (user password expiry details)
  * useradd -D (default command values) (`/etc/default/useradd`)
  * passwd --expire `<username>` (expire user password)
  * chage --lastday 0 `<username>` (using chage command)

* Network Commands
  * ip addr
  * ifconfig
  * Check open Ports
    * sudo netstat -ntlpu | grep LISTEN
    * sudo lsof -i -P -n | grep LISTEN (List Of Open File)

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
