# 2 same numbers are added to the end of the file due to the race condition.
# As long as the processes finish, the race condition manifests itself.
# The critical region is the 9th line of code.

FILE=file.txt

if test -f FILE
then
  if ln FILE FILE.lock
  then
    echo $(($(tail -1 FILE)+1)) >> FILE
    rm -f FILE.lock
  fi
else
  echo "0" > FILE
fi
