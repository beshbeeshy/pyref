build:
	python3 setup.py build
clean:
	rm -rf build
install:
	python3 setup.py install
uninstall:
	rm -rf /usr/local/lib/python3.6/dist-packages/PyRef-1.0.egg-info
	rm -rf /usr/local/lib/python3.6/dist-packages/pyref.cpython-36m-x86_64-linux-gnu.so
