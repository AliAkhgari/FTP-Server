# FTP-Server

This project implements a simplified version of FTP (File Transfer Protocol) comprising a `client` and `server`. The server is responsible for serving files to the client.

In this FTP implementation, communication occurs via two distinct channels: the `command channel` for sending commands and responses, and the `data channel` for handling data transfer. Additionally, a configuration file named `config.json` is utilized to store user and channel port information for authentication and authorization.

## Supported Commands

The following table outlines the supported FTP commands and their respective descriptions:

| Command               | Description                                                   |
| --------------------- | ------------------------------------------------------------- |
| `user <username>`     | Provide a username for authentication                         |
| `pass <password>`     | Provide a password for authentication                         |
| `pwd`                 | Get the path of the current directory                         |
| `mkd <directory>`     | Create a new directory                                        |
| `dele -f <filename>`  | Delete a file                                                 |
| `dele -d <directory>` | Delete a directory                                            |
| `ls`                  | List files and directories in the current working directory   |
| `cwd <path>`          | Change the current working directory to a different directory |
| `rename <from> <to>`  | Rename files or directories                                   |
| `retr <name>`         | Download a file (if it exists)                                |
| `help`                | Display information about available commands                  |
| `quit`                | Logout                                                        |
