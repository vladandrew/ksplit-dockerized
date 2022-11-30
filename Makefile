build:
	sudo docker build -t ksplit .

run:
	docker run --volume $(CURDIR):/mnt/workspace:rw --privileged -it --rm ksplit \
                bash -c "cp -R /mnt/workspace/* /root/ && /bin/bash"
