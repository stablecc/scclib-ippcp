# scclib import for Intel Integrated Performance Primitives Cryptography

Requires an installed
[Intel ipp cryptography library](https://www.intel.com/content/www/us/en/developer/tools/oneapi/ipp.html).

## Installation

The IPP library should be installed in the default location `/opt/intel`, and shared libraries
made available at run time, for example:
```
$ cat /etc/ld.so.conf.d/ippcp.conf 
/opt/intel/ippcp/lib/intel64
$ sudo ldconfig
```

## Licensing

Source:
* [BSD 3-Clause License](LICENSE)

Redistribution:
* [Intel Simplified Software License](intel_license.txt)
