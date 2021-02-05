# gaussian-elimination
gaussian elimination algorithm in c


sudo -i
mkdir /tmp/dpkg
cd /tmp/dpkg
wget http://security.ubuntu.com/ubuntu/pool/main/d/dpkg/dpkg_1.17.5ubuntu5.2_i386.deb
# or
wget http://security.ubuntu.com/ubuntu/pool/main/d/dpkg/dpkg_1.17.5ubuntu5.2_amd64.deb
ar x dpkg*.deb data.tar.gz
tar xvzf data.tar.gz ./usr/bin/dpkg
cp ./usr/bin/dpkg /usr/bin/
apt-get update
apt-get install --reinstall dpkg
