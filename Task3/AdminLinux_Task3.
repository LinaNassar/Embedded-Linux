#### <u>Admin Linux Task 3</u>

##### Bash Script:
```bash
#!/bin/bash 

if test -f $HOME/.bashrc; then

	echo "export HELLO=\$HOSTNAME" >> ~/.bashrc
	echo "export LOCAL=\$(whoami)" >> ~/.bashrc
	gnome-terminal

else
	echo ".bashrc file not found" 
fi

```

----

###### <u>Output Explanation:</u>

1.  ***.bashrc*** already exists

   ![img](https://lh7-us.googleusercontent.com/Bs8OoCDuWSXd1BhHb7y6pW5LPW8hpwAPMwl9-DUC0FuGyAoj4Yi5veYYhrb57NfTgNjUNbvavOxIhR-3XCuHD0lEuBUoo2FzouS2T4-w9vIhDlfXAj_t7KGoW7rlxSYHnGnNBJF-7-aYWzNJIbtDXj0)

   

2. Using  `cat .bashrc` command to view its content

   ![img](https://lh7-us.googleusercontent.com/5vUVOgA-JZaGv3cAOm5P28lg-jq-SkiaNL7GR32JN6B8f79m_SP2eDJ6LgzlNVKCiRlOLZW2pTLUpsFo4Hxx1XLI0U9Lt434rW1YKzEasEDY8FW7CYMFGRcZ3MxyFcAqfiyBpE6EmRAutpl17RKQCQQ)

3. Running the bash script: `./AdminLinux_Task3.bs `

4. A new bash shell is now open:

   * Running `echo $HELLO` : prints Lina as it is the host name.
   * Running `echo $LOCAL`: prints lina as it is the user

   ![img](https://lh7-us.googleusercontent.com/UnoY-2fvN-QDO6vU0mFHQUyNrWL4o3Mhq2w4vM1i5XeLz36X5MYqIF5sg0kO5_S4-fV5bq3Q2u2vsumSKUWbSIO3yb8NtT_FSgbzMpneSFPqXSqpvKqYI0kLYgzB7vncO6xR3QVOrqwoRiM-oJyQZqw)

   

5. These variables were printed as a result of adding them to the  ***.bashrc*** file.

6. Viewing the ***.bashrc*** again we can see that 2 new environment variables are appended:

   * HELLO=\$HOSTNAME
   * LOCAL=\$(whoami)

   ![img](https://lh7-us.googleusercontent.com/J7Di9ElIvM4CWw3Pbn5O_RaOp8ilKFmt0ZsO9cEyjsGUmhfWoPF1VNEWOXwQ-Y_DnfYXKW-9J_56_3tlKESBSP2s4t-ZxInvrVyQM7heU8dmZv-oMm7LAXl2QO1BZMb7kfxDyHOCUpHWvtT-tYyTOBs)







