#!/usr/bin/env sh
set -x

export NODE_ENV=production
export NVM_BIN=$HOME/.nvm/versions/node/v9.10.0/bin

cd ${REMOTEAPPDIR} && \
tar zxvf package.tgz -C . && \
mv build/package.json . && \
npm install && \
npm run start