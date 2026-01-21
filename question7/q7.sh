
sudo addgroup groupe_a
sudo addgroup groupe_b
sudo adduser lambda_a --ingroup groupe_a
sudo adduser lambda_b --ingroup groupe_b
sudo adduser admin

mkdir dir_a dir_b dir_c

sudo chown admin:groupe_a dir_a
sudo chmod 1770 dir_a 

sudo chown admin:groupe_b dir_b
sudo chmod 1770 dir_b

sudo addgroup shared_abc
sudo usermod -aG shared_abc lambda_a
sudo usermod -aG shared_abc lambda_b
sudo chown admin:shared_abc dir_c
sudo chmod 750 dir_c