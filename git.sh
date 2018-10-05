#!/bin/sh

git add day*/ex*
git status
echo "y || n?"
read -p 'answer: ' answer
if [[ "$answer" == "y" ]]
then
	read -p "comment: " comment
	git commit -m "$comment"
	git push
else
	echo Canceled
fi
