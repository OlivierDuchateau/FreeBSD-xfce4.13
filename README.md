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

**NOTE: If you want to compile the sysutils/xfce4-places-plugin port you should manually remove it's line from MOVED after mergine the trees. Portshaker will not do this automatically.**

### Binary packages

**These are provided on a best effort basis and no availability warranty is given.**

If you are confident of the binaries I'll provide this will save you time.

Please note that these binaries will be most often built with `WITH_DEBUG` enabled.

I'm peridically building a package set for FreeBSD 12.0 (amd64) from these ports which can be found at https://pkg.madpilot.net/120amd64-xfce413

These packages are signed with an RSA key, you should use the following cert to verify the signature:

```
-----BEGIN PUBLIC KEY-----
MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEA2XWrfAxyOnf1cRL/pxr1
6yxBAMlHoJZQQLB9XDF3EaFEtiDsWEQuZFGfLp+LUcifCgfb7MzEsOJSImIJ+VXL
/M+Mg1QVtNa3a3Vt9x6u7FNEkpU2Php989J+pgqSJ8LNj4MsaxKSFBDWBYoJZqh7
xd2lsq0gHc4R8LIWehe4PCxHGflBakS6p9+czAosqCs0U5kByofO65ggect+60Zg
KaVbRlatGk1Ec67fTwXujio0QB7mWW29PcdQZxS5SI5N+PIKdx8+Gvm0OUk0fmdh
VOFo/0DkutA67PCOhb7CvbNNJ/kqNXtmludFMrjz9A1oEKFTuIqQvNasWiIbNBdV
LB4iwgWqA0NDPPKaHPEXUtMIfO9o/b7ila619b4KQ9TftGnDXofmmOHejHsR6GWH
LHaZJ6GC0qMzK8MAk0N5rr+3qvX7tnkKj0w8H6ICFLfQDxQl0FYeLE98RrANaBCp
lRhd+RC9IjG0h14hKw87lGeCgn30WTOciAjU0G6hoI/+lmahOsb5j2bOyA0oXqBJ
oBhiTqjQ0rohnfPgah73JvRWrIoGDGqkzTdxiRoGMmmQrZ34I4qauK8mqYU2tKWP
pV5ij9BTkYKsHQvWH6ufVeMdjcwvxzRe9HNek54mxbdT3qBjCRebdlCSrqF+2Gfc
9mFT6ITogO5AxJkLfDje+ucCAwEAAQ==
-----END PUBLIC KEY-----
```

(changed on 2019-05-01)

I'll assume you saved the cert in `/usr/local/etc/pkg/xfce413.cert`.

Since the repo I'm building is only partial best way to use it is to configure it alongside the "latest" official packages repo with an higher priority, so you could add to `/usr/local/etc/pkg/repos/xfce13.conf`:

```
xfce413: {
  url: https://pkg.madpilot.net/120amd64-xfce413,
  mirror_type: none,
  signature_type: pubkey,
  pubkey: /usr/local/etc/pkg/xfce413.cert,
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
