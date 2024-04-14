# The base image that we are using
FROM python:3.9

# the work directory. The period means this directory.
WORKDIR .

# The file we want to copy | the location in our host
COPY main.py .

# execute something on the cmd.
CMD [ "python", "hello.py" ]

# finally we have to build it
# docker build -t hello .
