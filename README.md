# FreeBSD ports overlay to test xfce 4.13

**These are experimental ports, not ready for production use. Use at your own risk.**

This repository contains a [FreeBSD ports](https://www.freebsd.org/doc/en_US.ISO8859-1/books/handbook/ports-using.html) overlay with [XFCE desktop environment](https://xfce.org/) ports updated to version 4.13 of the desktop, whcih is the development desktop on which the future version 4.14 wioll be based.

As a further warning, I'm only testing these in virtual machines, and these ports are being tested, for the time being built, only with default options and get only very light usage. I suggest anyone interested in testing performs sugch testing in virtual machines only too, since I can't warrant stability, prompt updates, or any future availability of the compiled binary packages.

## How to test

### Compiling yourself

Esiest way to use this overlay is through [portshaker](https://www.freshports.org/ports-mgmt/portshaker/).

to grab this repo as a source you can create a file `/usr/local/etc/portshaker.d/xfce413`:

```
. /usr/local/share/portshaker/portshaker.subr
if [ "$1" != '--' ]; then
        err 1 "Extra arguments"
fi
shift
method="git"
git_clone_uri="https://github.com/madpilot78/FreeBSD-xfce4.13.git"
run_portshaker_command $*
```

Configure portshaker to include this overlay in whatever ports tree tyou need it (I strongly suggect using [poudriere](https://github.com/freebsd/poudriere/wiki)) and compile your own packages.

### Binary packages

**These are provided on a best effort basis and no availability warranty is given.**

**The packages at this URL are, at present, quite outdated. I'm planning to provide new ones in the future, but not right away.**

If you are confident of the binaries I'll provide this will save you time.

Please note that these binaries will be most often built with `WITH_DEBUG` enabled.

I'm peridically building a package set for FreeBSD 12.0 from these ports which can be found at https://pkg.madpilot.net/120amd64-xfce13

These packages are signed with an RSA key, you should use the following cert to verify the signature:

```
-----BEGIN PUBLIC KEY-----
MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAyaKp1P7+QPT23600lZz9
A9TBgaf9X7h6ES8eKrb5ZYChSRNg898GZAaRUnCzu9BWAmOj4qTrNqfa9t4MYgiR
VoBGnyHanJLLc3B8PdwKv38cUrmawu48XF9X8lj8VXQQWeyglc18or8V7gzEShK7
A6mcboY/BtUircUNQeCZaZPWD18jmGA3TYamDif1yOg+3AlvmLsDQa+/DU4GH2am
j9wWXJicSNExjT68YsC53YcpLhWEH8oqDpwWDf4WaOPaqMn73MzGLX1GlSFWmd3y
BuX+wbsPwWuZSpyQz/YJwiBnCDanN8nRejXHdvLa4Zg4vbTS9yF1kP5Rn8HHR1b4
q/vmKP4aRm0JITbO5RIf0k2dfErGqXpG+aaTkCfEuILGgYM7oVnEixX/RqvuQXDE
Bjq3sVPvflGsaj9gpjwNHXuCoo02vCaiacuYHvYoZy0a7VrGrijRJ1Sl5VvRXjsh
1MgIZ4Mh87M68J0bmqTu7ogs03Y6o6a7LgJaIQk4kLdvkskFAGpMQ9FkvjklcE9c
rxobX+kWDP40iadbzJTSJh9Jfe9GIjVZX6neI9HmUfKVfYYHp0QgMOUEZnoS/FzQ
Yexx8Pti5Lc5MuOVv7OqIv4xgFaNZ+fH++ydr8AuNEtFA6NUn8EOIr+6bhy4ZQZl
UlBI8RSv42DrQOv2LXeBHRkCAwEAAQ==
-----END PUBLIC KEY-----
```

I'll assume you saved the cert in `/usr/local/etc/pkg/xfce13.cert`.

Since the repo I'm building is only partial best way to use it is to configure it alongside the "latest" official packages repo with an higher priority, so you could add to `/usr/local/etc/pkg/repos/xfce13.conf`:

```
xfce413: {
  url: https://pkg.madpilot.net/120amd64-xfce13,
  mirror_type: none,
  signature_type: pubkey,
  pubkey: /usr/local/etc/pkg/xfce13.cert,
  enabled: yes,
  priority: 1
}

FreeBSD: {
  url: "pkg+http://pkg.freebsd.org/${ABI}/latest",
  priority: 0
}
```

after this pkg should install xfce packages from my repo.

## Notes

### LightDM

LightDM + GTK Greeter fails to start with default system configuration.

I found out it requires more locked memory than what is allowed in the default login.conf.

Please edit `/etc/login.conf` and in the `daemon:` section raise the `memorylocked` value from `128M` to `256M`:

```
daemon:\
        :memorylocked=256M:\
        :tc=default:
```

After this rebuild the database:

```
# cd /etc
# cap_mkdb login.conf
```

Then reboot. LightDM should now work fine.

### Miscellaneous

- I added GIR options to some ports but they are not working properly. Work needed here.
- xfce4-mixer, which has been unsupported upstream since xfce 4.10, is not compiling anymore. It should be possible to fix it though, so at some point I will get to that.
- Lightdm fails to start with default system configuration. It requires more locked memory than allowed by default.
