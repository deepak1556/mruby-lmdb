#! /bin/sh -e

echo "----> mkdir tmp"
mkdir -p tmp
echo "----> cd tmp"
cd tmp
echo "----> Downloading mruby"
git clone https://github.com/mruby/mruby.git
echo "----> Generating libmruby"
cd mruby
make CFLAGS='-O3 -fPIC'
echo "----> Done"
