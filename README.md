## Test installation of ROOT via different packages
This tests different ways to install [ROOT](https://root.cern.ch/) and tries to compile a simple C++ program against it.


| Package                          | Status        | Upstream Issue | Finding |
| -------------------------------- | ------------- |:--------------:| ------- |
| from precompiled .tar.gz         | [![Test ROOT from precompiled .tar.gz](https://github.com/olifre/root-install-test/actions/workflows/test-precompiled-tar.yml/badge.svg)](https://github.com/olifre/root-install-test/actions/workflows/test-precompiled-tar.yml) | --- | works |
| from Snap Store                  | [![Test ROOT from Snap store](https://github.com/olifre/root-install-test/actions/workflows/test-snap.yml/badge.svg)](https://github.com/olifre/root-install-test/actions/workflows/test-snap.yml) | [MrCarroll/root-snap+1](https://github.com/MrCarroll/root-snap/issues/1) | not directly suited for this use case |
| from Snap Store, run inside Snap | [![Test ROOT from Snap store, run inside Snap](https://github.com/olifre/root-install-test/actions/workflows/test-snap-embedded.yml/badge.svg)](https://github.com/olifre/root-install-test/actions/workflows/test-snap-embedded.yml) | [MrCarroll/root-snap+1](https://github.com/MrCarroll/root-snap/issues/1) | works, may be a bit cryptic |
| via Conda using Miniconda        | [![Test ROOT via Conda using Miniconda](https://github.com/olifre/root-install-test/actions/workflows/test-conda-miniconda.yml/badge.svg)](https://github.com/olifre/root-install-test/actions/workflows/test-conda-miniconda.yml) | [conda-forge/root-feedstock#139](https://github.com/conda-forge/root-feedstock/issues/139) | |
| via Conda using Anaconda         | [![Test ROOT via Conda using Anaconda](https://github.com/olifre/root-install-test/actions/workflows/test-conda-anaconda.yml/badge.svg)](https://github.com/olifre/root-install-test/actions/workflows/test-conda-anaconda.yml) | [conda-forge/root-feedstock#139](https://github.com/conda-forge/root-feedstock/issues/139) | |
