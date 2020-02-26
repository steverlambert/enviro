ENVIRO: The multi-agent, multi-user, multi-everything simulator
===

To build the docker image, do
```bash
docker build -t enviro .
```

To start the development environment, do
```bash
docker run -p80:80 -p8765:8765 -v $PWD:/development -it enviro bash
```

To build the client, do
```bash
cd client
npm install  
export NODE_ENV=production
npx babel --watch src/enviro.js --out-file enviro.js 
```

To start the client, do
```bash
ws -p 80 &
```

Then on the host machine, go to [http://localhost](http://localhost).

To compile the server, do

```bash
cd ../server
make
```

To compile an example, do 

```bash
cd ../examples/wanderers
make
```

And to run an example, do

```bash
../server/bin/enviro
```

After which the client should be showing some robots moving around.

To build a new project, do
```bash
mkdir my_project
cd my_project
esm init
esm generate MyAgent
make
```

and you'll have a new project. You can start adding code to `src/my_agent.h` and so on.
