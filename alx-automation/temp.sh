#!/bin/bash
DIR_PATH=./0x03-debugging
! [[ -d "$DIR_PATH" ]] && mkdir $DIR_PATH


README_PATH=$DIR_PATH/README.md
if ! [[ -f "$README_PATH" ]]
then
        echo -e 'You do not have a README.md yet. Create it now' > $README_PATH
        vi $README_PATH
fi

create_new () {
        cat $2 > $1
}

echo -n "What is filename: "
read filename
FILE_PATH=$DIR_PATH/$filename
if ! [ -f "$FILE_PATH" ]
then
    if [ $1 == bash ] || [ $1 == Bash ] || [ $1 == BASH ]
    then
            create_new "$FILE_PATH" ./alx-automation/temp.bash
    elif [ $1 == c ] || [ $1 == C ]
    then
            create_new "$FILE_PATH" ./alx-automation/temp.c
    elif [ $1 == h ] || [ $1 == H ]
    then
            create_new "$FILE_PATH" ./alx-automation/temp.h
    fi
fi
echo -e "\n"
ls -l $DIR_PATH
echo -e "\n"
echo -e "    /\\    "
echo -e "   /  \\   "
echo -e "  /_  _\\  "
echo -e "    ||     "
echo -e "    --     "
echo -e "Folder content\n"


vi $FILE_PATH

echo "Verify the result =>"
if [ $1 == bash ] || [ $1 == Bash ] || [ $1 == BASH ]
then
    chmod u+x $FILE_PATH
    echo "Plato: Man know thyself" | $FILE_PATH
elif [ $1 == c ] || [ $1 == C ]
then
        echo -e "Add main c template code [cat main.c] (optional) [y/n]"
        read ans
        if [ $ans == y ] || [ $ans == Y ]
        then
                vi $DIR_PATH/main.c
                gcc -Wall -pedantic -Werror -Wextra -std=gnu89 \
                        main.c $filename -o $DIR_PATH/main
                chmod u+x $DIR_PATH/main
                $DIR_PATH/main
                rm $DIR_PATH/main.c $DIR_PATH/main
        else
                gcc -Wall -pedantic -Werror -Wextra -std=gnu89 \
                        $filename -o $DIR_PATH/main
                chmod u+x main
                ./main
                rm $DIR_PATH/main
        fi
fi

echo "Verify result and hit enter key to continue or ctrl+C to terminate: "
read


git add .
git status
echo -n "Enter commit message: "
read message
git commit -m "$message"
git push

