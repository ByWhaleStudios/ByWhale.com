#!/usr/bin/env sh
set -x

export NODE_ENV=production
export NVM_BIN=$HOME/.nvm/versions/node/v9.10.0/bin

rm -rf /srv/www/bywhale.me/public && \ #remove pubic folder
cd /srv/www/bywhale.me/ && \
rm -rf last_version && \
rm -rf main && \
tar zxvf package.tgz -C last_version && \
mv last_version/build/* main/ # && \


# mv build/package.json . && \
# npm install && \
# npm run start