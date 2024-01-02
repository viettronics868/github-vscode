/*
This procedure is used to commit and push my code to github from VSCode
Date 2024-01-01. Author: Naphlk
No line of code in this file, only the work instruction on how to work with Github 
from VSCode.

*********************
On my Terminal window:
$ cd <link to my source folder>

$ git init
        Initialized empty Git repository in ~/<link to my source folder>/.git/

$ git branch
        * master

************************
On my Github account on the web browser:
- Create a new Github repository. 
- Then checking the branch to make sure it is main or master or else. 
- My goal is matching the branch in local and the branch in remote. 
- They should be the same branch to avoid error when pushing from local to remote later.
- Exactly get the username of the owner of Github account.
- Exactly get the email of the owner of Github account.
- Exactly get the link of the repository.

*****************
On my Terminal window:

$ git config --global init.defaultBranch main

$ git branch -m main

$ git branch
        * main

$ git config --global user.name "<username of the owner of Github account>"

$ git config --global user.email "<email of the owner of Github account>"

$ git remote add origin https://github.com/<user.name>/<link of my repository>.git

$ git push -u origin main
        To https://github.com/<<user.name>/<my repository>.git
        ! [rejected]        main -> main (fetch first)
        error: failed to push some refs to 'https://github.com/<user.name>/<my repository>.git'
        hint: Updates were rejected because the remote contains work that you do
        hint: not have locally. This is usually caused by another repository pushing
        hint: to the same ref. You may want to first integrate the remote changes
        hint: (e.g., 'git pull ...') before pushing again.
        hint: See the 'Note about fast-forwards' in 'git push --help' for details.


$ git pull --rebase origin main
        remote: Enumerating objects: 4, done.
        remote: Counting objects: 100% (4/4), done.
        remote: Compressing objects: 100% (3/3), done.
        remote: Total 4 (delta 0), reused 0 (delta 0), pack-reused 0
        Unpacking objects: 100% (4/4), 1.25 KiB | 1.25 MiB/s, done.
        From https://github.com/<user.name>/<my repository>
        * branch            main       -> FETCH_HEAD
        * [new branch]      main       -> origin/main
        Successfully rebased and updated refs/heads/main.


$ git push -u origin main
        Enumerating objects: 5, done.
        Counting objects: 100% (5/5), done.
        Delta compression using up to 4 threads
        Compressing objects: 100% (4/4), done.
        Writing objects: 100% (4/4), 3.23 KiB | 3.23 MiB/s, done.
        Total 4 (delta 0), reused 0 (delta 0), pack-reused 0
        To https://github.com/<user.name>/<my repository>.git
        c4387a7..08232d9  main -> main
        Branch 'main' set up to track remote branch 'main' from 'origin'.





*/