# sha512 kata c

Note: this is not software for production.

## Testing

```
SHA512/256("")
0x c672b8d1ef56ed28ab87c3622c5114069bdd3ad7b8f9737498d0c01ecef0967a
```

(from https://en.wikipedia.org/wiki/SHA-2)

in mac,

```bash
➜  sha512 git:(master) echo -n "" | shasum -a 512256
c672b8d1ef56ed28ab87c3622c5114069bdd3ad7b8f9737498d0c01ecef0967a  -
```

## Running it

```bash
cmake .
make all test
```