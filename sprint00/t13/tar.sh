if [ "$1" = "-e" ];
then
tar -xf ${@:2}
elif [ "$1" = "-c" ];
then 
tar -cf ${@:2}
fi
