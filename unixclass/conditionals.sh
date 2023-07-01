if grep "UNIX" test >/dev/null
then
echo "UNIX occurs in file"
elif grep "DOS" test >/dev/null
then
echo "UNIX does not occur, but DOS does"
elif grep "DOS & UNIX" test >/dev/null
then
echo "BOTH words occur"
else
echo "none of the words occur "
fi

