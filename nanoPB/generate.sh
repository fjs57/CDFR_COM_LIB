files=`ls ./protos/*.proto`
for file in $files
do
    echo ">>  generate sources for " $file
    python3 ./tools/generator/nanopb_generator.py $file
done

echo ">> move generated files to messages filder"

mv ./protos/*.pb.* ./messages

echo ">> end generate"